#ifdef __cplusplus
#import "react-native-demo-provider.h"
#endif

#ifdef RCT_NEW_ARCH_ENABLED
#import "RNDemoProviderSpec.h"

@interface DemoProvider : NSObject <NativeDemoProviderSpec>
#else
#import <React/RCTBridgeModule.h>

@interface DemoProvider : NSObject <RCTBridgeModule>
#endif

@end
