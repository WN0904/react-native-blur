#include "RNOH/Package.h"
#include "ComponentDescriptors.h"
#include "RTNBlurJSIBinder.h"
#include "RTNBlurComponentInstance.h"

namespace rnoh {

class RTNBlurComponentInstanceFactoryDelegate : public ComponentInstanceFactoryDelegate {
public:
    using ComponentInstanceFactoryDelegate::ComponentInstanceFactoryDelegate;

    ComponentInstance::Shared create(ComponentInstance::Context ctx) override {
        if (ctx.componentName == "RTNBlur") {
            return std::make_shared<RTNBlurComponentInstance>(std::move(ctx));
        }
        return nullptr;
    }
};

class RTNBlurPackage : public Package {
public:
    RTNBlurPackage(Package::Context ctx) : Package(ctx) {}

    ComponentInstanceFactoryDelegate::Shared createComponentInstanceFactoryDelegate() override {
        return std::make_shared<RTNBlurComponentInstanceFactoryDelegate>();
    }

    std::vector<facebook::react::ComponentDescriptorProvider> createComponentDescriptorProviders() override {
        return {facebook::react::concreteComponentDescriptorProvider<facebook::react::RTNBlurComponentDescriptor>()};
    }

    ComponentJSIBinderByString createComponentJSIBinderByName() override {
        return {{"RTNBlur", std::make_shared<RTNBlurJSIBinder>()}};
    }
};
} // namespace rnoh