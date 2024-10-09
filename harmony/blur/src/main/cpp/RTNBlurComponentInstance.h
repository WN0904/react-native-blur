#pragma once

#include "ShadowNodes.h"
#include "RNOH/CppComponentInstance.h"
#include "RTNBlurNode.h"

namespace rnoh {
class RTNBlurComponentInstance : public CppComponentInstance<facebook::react::RTNBlurShadowNode>{
private:
    RTNBlurNode m_blurNode;

public:
    RTNBlurComponentInstance(Context context);
    void onPropsChanged(SharedConcreteProps const &props) override;
    RTNBlurNode &getLocalRootArkUINode() override;
};
} // namespace rnoh