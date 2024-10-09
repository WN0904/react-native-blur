import React, { forwardRef } from 'react';
import {StyleSheet, ViewProps, ViewStyle, View } from 'react-native';
import NativeRTNBlur from '../fabric/RTNBlurNativeComponent';

  type BlurStyle  =
    | 'thin'
    | 'regular'
    | 'thick'
    | 'backgroundThin'
    | 'backgroundRegular'
    | 'backgroundThick'
    | 'backgroundUltraThick'
    | 'none'
    | 'componentUltraThin'
    | 'componentThin'
    | 'componentRegular'
    | 'componentThick'
    | 'componentUltraThick';

  type ColorMode =
    | 'system'
    | 'light'
    | 'dark';

export type RTNBlurProps = ViewProps & {
    blurStyle?:BlurStyle;
    colorMode?:ColorMode;
    blurAmount?: number;
}

const RTNBlur = forwardRef<View, RTNBlurProps>(
    ({ blurStyle = 'dark', colorMode = 'system', blurAmount=10, style, ...rest }, ref) => (
      <NativeRTNBlur
        ref={ref}
        style={StyleSheet.compose(styles.transparent, style)}
        blurStyle={blurStyle as BlurStyle}
        colorMode={colorMode}
        blurAmount={blurAmount}
        {...rest}
      />
    )
  );

  const styles = StyleSheet.create<{ transparent: ViewStyle }>({
    transparent: {  backgroundColor: 'transparent'  },
  });
  
  export default RTNBlur;