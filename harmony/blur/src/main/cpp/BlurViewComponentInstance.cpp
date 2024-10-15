#include "BlurViewComponentInstance.h"
#include "BlurViewPackage.h"
#include "RNOH/arkui/ImageNode.h"

namespace rnoh {

BlurViewComponentInstance::BlurViewComponentInstance(Context context) : CppComponentInstance(std::move(context)) {
    DLOG(INFO) << "[BlurViewComponentInstance] Props->blurType: " << std::string("start...");
}

// std::optional<std::string> BlurViewComponentInstance::getTintColorFromDynamic(folly::dynamic value, std::string type) {
//     auto rawPropsColor = (value.count(type) > 0) ? std::optional(value[type].asString()) : std::nullopt;
//     return rawPropsColor;
// }

void BlurViewComponentInstance::onPropsChanged(SharedConcreteProps const &props) {
    CppComponentInstance::onPropsChanged(props);
    if (props == nullptr) {
        return;
    }
//     auto blurStyleValue = getTintColorFromDynamic(props->rawProps, "blurType");
    
//     std::string blurStyleString = "prominent";
//     if (blurStyleValue.has_value()) {
//         blurStyleString = blurStyleValue.value();
//     }
    m_blurNode.setBlurtype(props->blurType, props->blurAmount);
}

BlurViewNode &BlurViewComponentInstance::getLocalRootArkUINode() { return m_blurNode; }
} // namespace rnoh