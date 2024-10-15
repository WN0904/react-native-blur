#pragma once

#include "ShadowNodes.h"
#include "RNOH/CppComponentInstance.h"
#include "BlurViewNode.h"

namespace rnoh {
class BlurViewComponentInstance : public CppComponentInstance<facebook::react::BlurViewShadowNode>{
private:
    BlurViewNode m_blurNode;
//     std::optional<std::string> getTintColorFromDynamic(folly::dynamic value,std::string type);

public:
    BlurViewComponentInstance(Context context);
    void onPropsChanged(SharedConcreteProps const &props) override;
    BlurViewNode &getLocalRootArkUINode() override;
};
} // namespace rnoh