#import <Foundation/Foundation.h>
#import "MBV_ar_api.h"

NS_ASSUME_NONNULL_BEGIN

@class MBVARCamera;
@class MBVARLane;

VISION_AR_NATIVE_API NS_SWIFT_NAME(VisionARDelegate) @protocol MBVVisionARDelegate

- (void)onARCameraUpdated:(MBVARCamera *)camera;
- (void)onARLaneUpdated:(nullable MBVARLane *)lane;

@end

NS_ASSUME_NONNULL_END
