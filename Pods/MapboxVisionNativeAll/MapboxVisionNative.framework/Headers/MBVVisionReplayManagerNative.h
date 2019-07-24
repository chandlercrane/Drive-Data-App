#import "MBVVisionManagerBaseNative.h"

#import "MBVPlatformInterface.h"
#import "MBVReplaySensors.h"

#import "MBV_api.h"

NS_ASSUME_NONNULL_BEGIN

VISION_CORE_NATIVE_API NS_SWIFT_NAME(VisionReplayManagerNative) @interface MBVVisionReplayManagerNative : MBVVisionManagerBaseNative

+ (instancetype)createWithPlatform:(id<MBVPlatformInterface>)platform recordPath:(NSString *)path;

@property (nonatomic, readonly) MBVReplaySensors *sensors;

- (instancetype)init NS_UNAVAILABLE;

- (void)start:(id<MBVVisionDelegate>)delegate;
- (void)stop;

- (void)destroy;

@end

NS_ASSUME_NONNULL_END
