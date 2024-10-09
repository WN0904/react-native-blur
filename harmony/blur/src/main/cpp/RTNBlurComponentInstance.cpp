#include "RTNBlurComponentInstance.h"
#include "RTNBlurPackage.h"
#include "RNOH/arkui/ImageNode.h"

namespace rnoh {

RTNBlurComponentInstance::RTNBlurComponentInstance(Context context) : CppComponentInstance(std::move(context)) {
    DLOG(INFO) << "[RTNBlurComponentInstance] Props->blurStyle: " << std::string("start...");
}

void RTNBlurComponentInstance::onPropsChanged(SharedConcreteProps const &props) {
    CppComponentInstance::onPropsChanged(props);
    if(props == nullptr){
        return;
    }
    m_blurNode.setBlurtype(props->blurStyle, props->colorMode, props->blurAmount);
}

RTNBlurNode &RTNBlurComponentInstance::getLocalRootArkUINode(){ return m_blurNode; } 
} // namespace rnoh