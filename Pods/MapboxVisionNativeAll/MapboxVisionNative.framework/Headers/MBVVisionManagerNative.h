#import "MBVVisionManagerBaseNative.h"

#import "MBVPlatformInterface.h"
#import "MBVSensors.h"

#import "MBV_api.h"

NS_ASSUME_NONNULL_BEGIN

VISION_CORE_NATIVE_API NS_SWIFT_NAME(VisionManagerNative) @interface MBVVisionManagerNative : MBVVisionManagerBaseNative

+ (instancetype)createWithPlatform:(id<MBVPlatformInterface>)platform;

@property (nonatomic, readonly) MBVSensors *sensors;

- (instancetype)init NS_UNAVAILABLE;

- (void)start:(id<MBVVisionDelegate>)delegate;
- (void)stop;

- (void)destroy;

- (float)getSeconds;
- (void)startSavingSession:(NSString *)path;
- (void)stopSavingSession;

@end

NS_ASSUME_NONNULL_END
