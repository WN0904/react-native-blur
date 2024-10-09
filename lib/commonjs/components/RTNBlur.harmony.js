"use strict";

Object.defineProperty(exports, "__esModule", {
  value: true
});
exports.default = void 0;
var _react = _interopRequireWildcard(require("react"));
var _reactNative = require("react-native");
var _RTNBlurNativeComponent = _interopRequireDefault(require("../fabric/RTNBlurNativeComponent"));
function _interopRequireDefault(e) { return e && e.__esModule ? e : { default: e }; }
function _getRequireWildcardCache(e) { if ("function" != typeof WeakMap) return null; var r = new WeakMap(), t = new WeakMap(); return (_getRequireWildcardCache = function (e) { return e ? t : r; })(e); }
function _interopRequireWildcard(e, r) { if (!r && e && e.__esModule) return e; if (null === e || "object" != typeof e && "function" != typeof e) return { default: e }; var t = _getRequireWildcardCache(r); if (t && t.has(e)) return t.get(e); var n = { __proto__: null }, a = Object.defineProperty && Object.getOwnPropertyDescriptor; for (var u in e) if ("default" !== u && {}.hasOwnProperty.call(e, u)) { var i = a ? Object.getOwnPropertyDescriptor(e, u) : null; i && (i.get || i.set) ? Object.defineProperty(n, u, i) : n[u] = e[u]; } return n.default = e, t && t.set(e, n), n; }
function _extends() { return _extends = Object.assign ? Object.assign.bind() : function (n) { for (var e = 1; e < arguments.length; e++) { var t = arguments[e]; for (var r in t) ({}).hasOwnProperty.call(t, r) && (n[r] = t[r]); } return n; }, _extends.apply(null, arguments); }
const RTNBlur = /*#__PURE__*/(0, _react.forwardRef)(({
  blurStyle = 'dark',
  colorMode = 'system',
  blurAmount = 10,
  style,
  ...rest
}, ref) => /*#__PURE__*/_react.default.createElement(_RTNBlurNativeComponent.default, _extends({
  ref: ref,
  style: _reactNative.StyleSheet.compose(styles.transparent, style),
  blurStyle: blurStyle,
  colorMode: colorMode,
  blurAmount: blurAmount
}, rest)));
const styles = _reactNative.StyleSheet.create({
  transparent: {
    backgroundColor: 'transparent'
  }
});
var _default = exports.default = RTNBlur;
//# sourceMappingURL=RTNBlur.harmony.js.map