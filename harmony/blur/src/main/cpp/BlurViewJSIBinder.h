#pragma once

#include "RNOHCorePackage/ComponentBinders/ViewComponentJSIBinder.h"
// JSI Binder 的作用是桥接 JS 和 C++，将属性从 JS 端传递到 C++ 端。
namespace rnoh {

class BlurViewJSIBinder : public ViewComponentJSIBinder {
protected:
    facebook::jsi::Object createNativeProps(facebook::jsi::Runtime &rt) override {
        auto object = ViewComponentJSIBinder::createNativeProps(rt);
        object.setProperty(rt, "blurType", "string");
        object.setProperty(rt, "blurAmount", "int");
        return object;
    }
};
} // namespace rnoh