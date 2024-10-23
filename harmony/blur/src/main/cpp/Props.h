#pragma once

#include <react/renderer/components/view/ViewProps.h>
#include <react/renderer/core/PropsParserContext.h>

namespace facebook::react {

enum class BlurViewBlurType {
    dark,
    light,
    xlight,
    thickMaterial,
    thinMaterial,
    extraDark,
    regular,
    prominent,
    chromeMaterial,
    material,
    ultraThinMaterial,
    chromeMaterialDark,
    materialDark,
    ultraThinMaterialDark,
    chromeMaterialLight,
    materialLight,
    ultraThinMaterialLight,
    thickMaterialDark,
    thinMaterialDark,
    thickMaterialLight,
    thinMaterialLight,
};

static inline void fromRawValue(const PropsParserContext& context, const RawValue &value, BlurViewBlurType &result) {
  auto string = (std::string)value;
  if (string == "dark") { result = BlurViewBlurType::dark; return; }
  if (string == "light") { result = BlurViewBlurType::light; return; }
  if (string == "xlight") { result = BlurViewBlurType::xlight; return; }
  if (string == "thickMaterial") { result = BlurViewBlurType::thickMaterial; return; }
  if (string == "thinMaterial") { result = BlurViewBlurType::thinMaterial; return; }
  if (string == "extraDark") { result = BlurViewBlurType::extraDark; return; }
  if (string == "regular") { result = BlurViewBlurType::regular; return; }
  if (string == "prominent") { result = BlurViewBlurType::prominent; return; }
  if (string == "chromeMaterial") { result = BlurViewBlurType::chromeMaterial; return; }
  if (string == "material") { result = BlurViewBlurType::material; return; }
  if (string == "ultraThinMaterial") { result = BlurViewBlurType::ultraThinMaterial; return; }
  if (string == "chromeMaterialDark") { result = BlurViewBlurType::chromeMaterialDark; return; }
  if (string == "materialDark") { result = BlurViewBlurType::materialDark; return; }
  if (string == "ultraThinMaterialDark") { result = BlurViewBlurType::ultraThinMaterialDark; return; }
  if (string == "chromeMaterialLight") { result = BlurViewBlurType::chromeMaterialLight; return; }
  if (string == "materialLight") { result = BlurViewBlurType::materialLight; return; }
  if (string == "ultraThinMaterialLight") { result = BlurViewBlurType::ultraThinMaterialLight; return; }
  if (string == "thickMaterialDark") { result = BlurViewBlurType::thickMaterialDark; return; }
  if (string == "thinMaterialDark") { result = BlurViewBlurType::thinMaterialDark; return; }
  if (string == "thickMaterialLight") { result = BlurViewBlurType::thickMaterialLight; return; }
  if (string == "thinMaterialLight") { result = BlurViewBlurType::thinMaterialLight; return; }
  abort();
}

static inline std::string toString(const BlurViewBlurType &value) {
  switch (value) {
    case BlurViewBlurType::dark: return "dark";
    case BlurViewBlurType::light: return "light";
    case BlurViewBlurType::xlight: return "xlight";
    case BlurViewBlurType::thickMaterial: return "thickMaterial";
    case BlurViewBlurType::thinMaterial: return "thinMaterial";
    case BlurViewBlurType::extraDark: return "extraDark";
    case BlurViewBlurType::regular: return "regular";
    case BlurViewBlurType::prominent: return "prominent";
    case BlurViewBlurType::chromeMaterial: return "chromeMaterial";
    case BlurViewBlurType::material: return "material";
    case BlurViewBlurType::ultraThinMaterial: return "ultraThinMaterial";
    case BlurViewBlurType::chromeMaterialDark: return "chromeMaterialDark";
    case BlurViewBlurType::materialDark: return "materialDark";
    case BlurViewBlurType::ultraThinMaterialDark: return "ultraThinMaterialDark";
    case BlurViewBlurType::chromeMaterialLight: return "chromeMaterialLight";
    case BlurViewBlurType::materialLight: return "materialLight";
    case BlurViewBlurType::ultraThinMaterialLight: return "ultraThinMaterialLight";
    case BlurViewBlurType::thickMaterialDark: return "thickMaterialDark";
    case BlurViewBlurType::thinMaterialDark: return "thinMaterialDark";
    case BlurViewBlurType::thickMaterialLight: return "thickMaterialLight";
    case BlurViewBlurType::thinMaterialLight: return "thinMaterialLight";
   
  }
}

class BlurViewProps final : public ViewProps {
 public:
  BlurViewProps() = default;
  BlurViewProps(const PropsParserContext& context, const BlurViewProps &sourceProps, const RawProps &rawProps);

#pragma mark - Props

  int blurAmount{};
  BlurViewBlurType blurType{BlurViewBlurType::dark};
};
} // namespace facebook::react