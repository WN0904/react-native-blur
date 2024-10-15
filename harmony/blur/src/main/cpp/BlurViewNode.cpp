#include "BlurViewNode.h"
#include "RNOH/arkui/NativeNodeApi.h"
#include <cmath>
#include <cstdint>

namespace rnoh {
BlurViewNode::BlurViewNode() : ArkUINode(NativeNodeApi::getInstance()->createNode(ArkUI_NodeType::ARKUI_NODE_STACK)) {}

BlurViewNode &BlurViewNode::setBlurtype(facebook::react::BlurViewBlurType const &blurType, const int &blurAmount) {
    static int32_t style = ARKUI_BLUR_STYLE_THIN;
    static int32_t mode = ARKUI_COLOR_MODE_DARK;

    if (blurType == facebook::react::BlurViewBlurType::dark) {
        style = ARKUI_BLUR_STYLE_BACKGROUND_THICK;
        mode = ARKUI_COLOR_MODE_DARK;
    } else if (blurType == facebook::react::BlurViewBlurType::light) {
        style = ARKUI_BLUR_STYLE_COMPONENT_THIN;
        mode = ARKUI_COLOR_MODE_LIGHT;
    } else if (blurType == facebook::react::BlurViewBlurType::thickMaterialDark) {
        style = ARKUI_BLUR_STYLE_THICK;
        mode = ARKUI_COLOR_MODE_DARK;
    } else if (blurType == facebook::react::BlurViewBlurType::thinMaterialDark) {
        style = ARKUI_BLUR_STYLE_THIN;
        mode = ARKUI_COLOR_MODE_DARK;
    } else if (blurType == facebook::react::BlurViewBlurType::thickMaterialLight) {
        style = ARKUI_BLUR_STYLE_THICK;
        mode = ARKUI_COLOR_MODE_LIGHT;
    } else if (blurType == facebook::react::BlurViewBlurType::thinMaterialLight) {
        style = ARKUI_BLUR_STYLE_THIN;
        mode = ARKUI_COLOR_MODE_LIGHT;
    } else if (blurType == facebook::react::BlurViewBlurType::xlight) {
        style = ARKUI_BLUR_STYLE_COMPONENT_THICK;
        mode = ARKUI_COLOR_MODE_LIGHT;
    } else if (blurType == facebook::react::BlurViewBlurType::extraDark) {
        style = ARKUI_BLUR_STYLE_COMPONENT_THICK;
        mode = ARKUI_COLOR_MODE_DARK;
    } else if (blurType == facebook::react::BlurViewBlurType::regular) {
        style = ARKUI_BLUR_STYLE_REGULAR;
        mode = ARKUI_COLOR_MODE_SYSTEM;
    } else if (blurType == facebook::react::BlurViewBlurType::ultraThinMaterialDark) {
        style = ARKUI_BLUR_STYLE_COMPONENT_ULTRA_THIN;
        mode = ARKUI_COLOR_MODE_DARK;
    } else if (blurType == facebook::react::BlurViewBlurType::ultraThinMaterialLight) {
        style = ARKUI_BLUR_STYLE_COMPONENT_ULTRA_THIN;
        mode = ARKUI_COLOR_MODE_LIGHT;
    } else if (blurType == facebook::react::BlurViewBlurType::chromeMaterialDark) {
        style = ARKUI_BLUR_STYLE_COMPONENT_ULTRA_THICK;
        mode = ARKUI_COLOR_MODE_DARK;
    } else if (blurType == facebook::react::BlurViewBlurType::materialDark) {
        style = ARKUI_BLUR_STYLE_COMPONENT_REGULAR;
        mode = ARKUI_COLOR_MODE_DARK;
    } else if (blurType == facebook::react::BlurViewBlurType::materialLight) {
        style = ARKUI_BLUR_STYLE_COMPONENT_REGULAR;
        mode = ARKUI_COLOR_MODE_LIGHT;
    } else if (blurType == facebook::react::BlurViewBlurType::chromeMaterialLight) {
        style = ARKUI_BLUR_STYLE_COMPONENT_ULTRA_THICK;
        mode = ARKUI_COLOR_MODE_LIGHT;
    } else if (blurType == facebook::react::BlurViewBlurType::prominent) {
        style = ARKUI_BLUR_STYLE_THICK;
        mode = ARKUI_COLOR_MODE_SYSTEM;
    } else if (blurType == facebook::react::BlurViewBlurType::chromeMaterial) {
        style = ARKUI_BLUR_STYLE_COMPONENT_ULTRA_THICK;
        mode = ARKUI_COLOR_MODE_SYSTEM;
    } else if (blurType == facebook::react::BlurViewBlurType::material) {
        style = ARKUI_BLUR_STYLE_COMPONENT_REGULAR;
        mode = ARKUI_COLOR_MODE_SYSTEM;
    } else if (blurType == facebook::react::BlurViewBlurType::thickMaterial) {
         style = ARKUI_BLUR_STYLE_COMPONENT_THICK;
        mode = ARKUI_COLOR_MODE_SYSTEM;
    } else if (blurType == facebook::react::BlurViewBlurType::thinMaterial) {
         style = ARKUI_BLUR_STYLE_COMPONENT_THIN;
        mode = ARKUI_COLOR_MODE_SYSTEM;
    } else if (blurType == facebook::react::BlurViewBlurType::ultraThinMaterial) {
        style = ARKUI_BLUR_STYLE_COMPONENT_ULTRA_THIN;
        mode = ARKUI_COLOR_MODE_SYSTEM;
    }


    DLOG(INFO) << "[BlurViewNode] style: " << std::int32_t(style);
    DLOG(INFO) << "[BlurViewNode] mode: " << std::int32_t(mode);
    DLOG(INFO) << "[BlurViewNode] blurAmount: " << float(blurAmount) / 100;
    ArkUI_NumberValue BlurVal[] = {
        {.i32 = style}, {.i32 = mode}, {.i32 = ARKUI_ADAPTIVE_COLOR_DEFAULT}, {.f32 = float(blurAmount) / 100},
        {.f32 = 0},     {.f32 = 0}};
    ArkUI_AttributeItem BlurItem = {.value = BlurVal, .size = sizeof(BlurVal) / sizeof(ArkUI_NumberValue)};
    maybeThrow(NativeNodeApi::getInstance()->setAttribute(m_nodeHandle, NODE_FOREGROUND_BLUR_STYLE, &BlurItem));
    return *this;
}
} // namespace rnoh
