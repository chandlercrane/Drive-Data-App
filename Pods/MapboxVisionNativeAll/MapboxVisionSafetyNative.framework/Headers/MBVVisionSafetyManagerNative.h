#import <Foundation/Foundation.h>
#import <MapboxVisionNative/MapboxVisionNative.h>

#import "MBVVisionSafetyDelegate.h"
#import "MBV_safety_api.h"

NS_ASSUME_NONNULL_BEGIN

VISION_SAFETY_NATIVE_API NS_SWIFT_NAME(VisionSafetyManagerNative) @interface MBVVisionSafetyManagerNative : NSObject

+ (instancetype)createWithVisionManager:(MBVVisionManagerBaseNative *)visionManager delegate:(id<MBVVisionSafetyDelegate>)delegate
    NS_SWIFT_NAME(create(visionManager:delegate:));
- (void)destroy;

- (void)setTimeToCollisionWithVehicle:(float)warningTime criticalTime:(float)criticalTime;
- (void)setCollisionMinSpeed:(float)minSpeed;

@end

NS_ASSUME_NONNULL_END
