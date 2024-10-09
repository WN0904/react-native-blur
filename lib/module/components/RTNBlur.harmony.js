function _extends() { return _extends = Object.assign ? Object.assign.bind() : function (n) { for (var e = 1; e < arguments.length; e++) { var t = arguments[e]; for (var r in t) ({}).hasOwnProperty.call(t, r) && (n[r] = t[r]); } return n; }, _extends.apply(null, arguments); }
import React, { forwardRef } from 'react';
import { StyleSheet } from 'react-native';
import NativeRTNBlur from '../fabric/RTNBlurNativeComponent';
const RTNBlur = /*#__PURE__*/forwardRef(({
  blurStyle = 'dark',
  colorMode = 'system',
  blurAmount = 10,
  style,
  ...rest
}, ref) => /*#__PURE__*/React.createElement(NativeRTNBlur, _extends({
  ref: ref,
  style: StyleSheet.compose(styles.transparent, style),
  blurStyle: blurStyle,
  colorMode: colorMode,
  blurAmount: blurAmount
}, rest)));
const styles = StyleSheet.create({
  transparent: {
    backgroundColor: 'transparent'
  }
});
export default RTNBlur;
//# sourceMappingURL=RTNBlur.harmony.js.map