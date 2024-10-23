/**
 * Used only in C-API based Architecture.
 */
#pragma once
#include "Props.h"
#include "RNOH/arkui/ArkUINode.h"

namespace rnoh {
class BlurViewNode : public ArkUINode {
public:
    BlurViewNode();
    BlurViewNode &setBlurtype(facebook::react::BlurViewBlurType const &blurType, const int &blurAmount);
};
} // namespace rnoh