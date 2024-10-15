#include "RNOH/Package.h"
#include "ComponentDescriptors.h"
#include "BlurViewJSIBinder.h"
#include "BlurViewComponentInstance.h"

namespace rnoh {

class BlurViewComponentInstanceFactoryDelegate : public ComponentInstanceFactoryDelegate {
public:
    using ComponentInstanceFactoryDelegate::ComponentInstanceFactoryDelegate;

    ComponentInstance::Shared create(ComponentInstance::Context ctx) override {
        if (ctx.componentName == "BlurView") {
            return std::make_shared<BlurViewComponentInstance>(std::move(ctx));
        }
        return nullptr;
    }
};

class BlurViewPackage : public Package {
public:
    BlurViewPackage(Package::Context ctx) : Package(ctx) {}

    ComponentInstanceFactoryDelegate::Shared createComponentInstanceFactoryDelegate() override {
        return std::make_shared<BlurViewComponentInstanceFactoryDelegate>();
    }

    std::vector<facebook::react::ComponentDescriptorProvider> createComponentDescriptorProviders() override {
        return {facebook::react::concreteComponentDescriptorProvider<facebook::react::BlurViewComponentDescriptor>()};
    }

    ComponentJSIBinderByString createComponentJSIBinderByName() override {
        return {{"BlurView", std::make_shared<BlurViewJSIBinder>()}};
    }
};
} // namespace rnoh