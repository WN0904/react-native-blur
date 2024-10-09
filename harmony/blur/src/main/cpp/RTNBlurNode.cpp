#include "RTNBlurNode.h"
#include "RNOH/arkui/NativeNodeApi.h"
#include <cmath>
#include <cstdint>

namespace rnoh {
RTNBlurNode::RTNBlurNode()
    : ArkUINode(NativeNodeApi::getInstance()->createNode(ArkUI_NodeType::ARKUI_NODE_STACK)){}

RTNBlurNode &RTNBlurNode::setBlurtype(facebook::react::RTNBlurBlurStyle const &blurStyle,
                                      facebook::react::RTNBlurColorMode const &colorMode,const int &blurAmount) {
    static int32_t style = ARKUI_BLUR_STYLE_THIN;
    static int32_t mode = ARKUI_COLOR_MODE_SYSTEM;
    
    if(blurStyle == facebook::react::RTNBlurBlurStyle::Thin){
        style = ARKUI_BLUR_STYLE_THIN;
    } else if (blurStyle == facebook::react::RTNBlurBlurStyle::Regular) {
        style = ARKUI_BLUR_STYLE_REGULAR;
    } else if (blurStyle == facebook::react::RTNBlurBlurStyle::Thick) {
        style = ARKUI_BLUR_STYLE_THICK;
    } else if (blurStyle == facebook::react::RTNBlurBlurStyle::BackgroundThin) {
        style = ARKUI_BLUR_STYLE_BACKGROUND_THIN;
    } else if (blurStyle == facebook::react::RTNBlurBlurStyle::BackgroundRegular) {
        style = ARKUI_BLUR_STYLE_BACKGROUND_REGULAR;
    } else if (blurStyle == facebook::react::RTNBlurBlurStyle::BackgroundThick) {
        style = ARKUI_BLUR_STYLE_BACKGROUND_THICK;
    } else if (blurStyle == facebook::react::RTNBlurBlurStyle::BackgroundUltraThick) {
        style = ARKUI_BLUR_STYLE_BACKGROUND_ULTRA_THICK;
    } else if (blurStyle == facebook::react::RTNBlurBlurStyle::None) {
        style = ARKUI_BLUR_STYLE_NONE;
    } else if (blurStyle == facebook::react::RTNBlurBlurStyle::ComponentUltraThin) {
        style = ARKUI_BLUR_STYLE_COMPONENT_ULTRA_THIN;
    } else if (blurStyle == facebook::react::RTNBlurBlurStyle::ComponentThin) {
        style = ARKUI_BLUR_STYLE_COMPONENT_THIN;
    } else if (blurStyle == facebook::react::RTNBlurBlurStyle::ComponentRegular) {
        style = ARKUI_BLUR_STYLE_COMPONENT_REGULAR;
    } else if (blurStyle == facebook::react::RTNBlurBlurStyle::ComponentThick) {
        style = ARKUI_BLUR_STYLE_COMPONENT_THICK;
    } else if (blurStyle == facebook::react::RTNBlurBlurStyle::ComponentUltraThick) {
        style = ARKUI_BLUR_STYLE_COMPONENT_ULTRA_THICK;
    }

    if(colorMode == facebook::react::RTNBlurColorMode::System){
        mode = ARKUI_COLOR_MODE_SYSTEM;
    } else if (colorMode == facebook::react::RTNBlurColorMode::Light) {
        mode = ARKUI_COLOR_MODE_LIGHT;
    } else if (colorMode == facebook::react::RTNBlurColorMode::Dark) {
        mode = ARKUI_COLOR_MODE_DARK;
    }
    DLOG(INFO) << "[RTNBlurNode] style: " << std::int32_t (style);
    DLOG(INFO) << "[RTNBlurNode] mode: " << std::int32_t(mode);
    DLOG(INFO) << "[RTNBlurNode] mode: " << std::float_t(blurAmount/100);
    
    ArkUI_NumberValue BlurVal[] = {{.i32 = style},
                                   {.i32 = mode},
                                   {.i32 = ARKUI_ADAPTIVE_COLOR_DEFAULT},
                                   {.f32 = float_t(blurAmount/100)},
                                   {.f32 = 0},
                                   {.f32 = 0}};
    ArkUI_AttributeItem BlurItem = {.value = BlurVal, .size = sizeof(BlurVal) / sizeof(ArkUI_NumberValue)};
    maybeThrow(NativeNodeApi::getInstance()->setAttribute(m_nodeHandle, NODE_FOREGROUND_BLUR_STYLE, &BlurItem));
    return *this;
}
} // namespace rnoh
