import React from 'react';
import { ViewProps, View } from 'react-native';
type BlurStyle = 'thin' | 'regular' | 'thick' | 'backgroundThin' | 'backgroundRegular' | 'backgroundThick' | 'backgroundUltraThick' | 'none' | 'componentUltraThin' | 'componentThin' | 'componentRegular' | 'componentThick' | 'componentUltraThick';
type ColorMode = 'system' | 'light' | 'dark';
export type RTNBlurProps = ViewProps & {
    blurStyle?: BlurStyle;
    colorMode?: ColorMode;
    blurAmount?: number;
};
declare const RTNBlur: React.ForwardRefExoticComponent<ViewProps & {
    blurStyle?: BlurStyle | undefined;
    colorMode?: ColorMode | undefined;
    blurAmount?: number | undefined;
} & React.RefAttributes<View>>;
export default RTNBlur;
