import RTNBlurUntyped from './components/RTNBlur.harmony';
import type { View } from 'react-native'

import type { RTNBlurProps as RTNBlurPropsHarmony } from './components/RTNBlur.harmony';

type RTNBlurProps = RTNBlurPropsHarmony;

const RTNBlur = RTNBlurUntyped as React.ForwardRefExoticComponent<RTNBlurProps & React.RefAttributes<View>>

export { RTNBlur };
export type { RTNBlurProps };