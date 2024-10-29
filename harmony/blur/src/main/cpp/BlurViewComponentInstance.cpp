#include "BlurViewComponentInstance.h"
#include "BlurPackage.h"
#include "RNOH/arkui/ImageNode.h"

namespace rnoh {

BlurViewComponentInstance::BlurViewComponentInstance(Context context) : CppComponentInstance(std::move(context)) {
    DLOG(INFO) << "[BlurViewComponentInstance] Props->blurType: " << std::string("start...");
}

void BlurViewComponentInstance::onPropsChanged(SharedConcreteProps const &props) {
    CppComponentInstance::onPropsChanged(props);
    if (props == nullptr) {
        return;
    }
    m_blurNode.setBlurtype(props->blurType, props->blurAmount);
}

BlurViewNode &BlurViewComponentInstance::getLocalRootArkUINode() { return m_blurNode; }
} // namespace rnoh