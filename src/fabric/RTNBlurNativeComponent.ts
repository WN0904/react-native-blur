import codegenNativeComponent from 'react-native/Libraries/Utilities/codegenNativeComponent';
import type { ViewProps, HostComponent } from 'react-native';
import type { WithDefault, Int32 } from 'react-native/Libraries/Types/CodegenTypes';

 interface NativeProps extends ViewProps {
  blurStyle?: WithDefault<
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
    | 'componentUltraThick',
    'thick'>;
  colorMode?: WithDefault<
    | 'system'
    | 'light'
    | 'dark',
    'dark'>;
  blurAmount?: WithDefault<Int32, 10>;

}

export default codegenNativeComponent<NativeProps>(
  'RTNBlur',
) as HostComponent<NativeProps>;