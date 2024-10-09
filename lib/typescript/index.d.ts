/// <reference types="react" />
import type { View } from 'react-native';
import type { RTNBlurProps as RTNBlurPropsHarmony } from './components/RTNBlur.harmony';
type RTNBlurProps = RTNBlurPropsHarmony;
declare const RTNBlur: import("react").ForwardRefExoticComponent<import("react-native").ViewProps & {
    blurStyle?: ("thin" | "regular" | "thick" | "backgroundThin" | "backgroundRegular" | "backgroundThick" | "backgroundUltraThick" | "none" | "componentUltraThin" | "componentThin" | "componentRegular" | "componentThick" | "componentUltraThick") | undefined;
    colorMode?: ("system" | "light" | "dark") | undefined;
    blurAmount?: number | undefined;
} & import("react").RefAttributes<View>>;
export { RTNBlur };
export type { RTNBlurProps };
