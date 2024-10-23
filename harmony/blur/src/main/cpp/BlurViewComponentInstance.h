#pragma once

#include "ShadowNodes.h"
#include "RNOH/CppComponentInstance.h"
#include "BlurViewNode.h"

namespace rnoh {
class BlurViewComponentInstance : public CppComponentInstance<facebook::react::BlurViewShadowNode> {
private:
    BlurViewNode m_blurNode;

public:
    BlurViewComponentInstance(Context context);
    void onPropsChanged(SharedConcreteProps const &props) override;
    BlurViewNode &getLocalRootArkUINode() override;
};
} // namespace rnoh