#import <Foundation/Foundation.h>
#import <MapboxVisionNative/MapboxVisionNative.h>

#import "MBVRoute.h"
#import "MBVVisionARDelegate.h"
#import "MBV_ar_api.h"

NS_ASSUME_NONNULL_BEGIN

VISION_AR_NATIVE_API NS_SWIFT_NAME(VisionARManagerNative) @interface MBVVisionARManagerNative : NSObject

+ (instancetype)createWithVisionManager:(MBVVisionManagerBaseNative *)visionManager delegate:(id<MBVVisionARDelegate>)delegate
    NS_SWIFT_NAME(create(visionManager:delegate:));

- (void)setRoute:(MBVRoute *)route;
- (void)setLaneLength:(double)laneLength;
- (void)destroy;

@end

NS_ASSUME_NONNULL_END
