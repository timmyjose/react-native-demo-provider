#import "DemoProvider.h"

@implementation DemoProvider
RCT_EXPORT_MODULE()

// Don't compile this code when we build for the old architecture.
#ifdef RCT_NEW_ARCH_ENABLED
- (NSNumber *)multiply:(double)a b:(double)b {
    NSNumber *result = @(demoprovider::multiply(a, b));

    return result;
}

- (NSNumber *)add:(double)a b:(double)b {
    NSNumber *result = @(demoprovider::add(a, b));

    return result;
}

- (std::shared_ptr<facebook::react::TurboModule>)getTurboModule:
    (const facebook::react::ObjCTurboModule::InitParams &)params
{
    return std::make_shared<facebook::react::NativeDemoProviderSpecJSI>(params);
}
#endif

@end
