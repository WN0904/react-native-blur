/**
 * Used only in C-API based Architecture.
 */
#pragma once
#include "Props.h"
#include "RNOH/arkui/ArkUINode.h"

namespace rnoh {
class RTNBlurNode : public ArkUINode {
public:
    RTNBlurNode();
    RTNBlurNode &setBlurtype(facebook::react::RTNBlurBlurStyle const &blurStyle,
                             facebook::react::RTNBlurColorMode const &colorMode, const int &blurAmount);
};
} // namespace rnoh