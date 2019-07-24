#import <Foundation/Foundation.h>

#import "MBVImageSize.h"

#import "MBV_api.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Object representing the state of the camera.
 */
VISION_CORE_NATIVE_API NS_SWIFT_NAME(Camera) @interface MBVCamera : NSObject

/// Progress of camera parameters estimation expressed in range [0..1]
@property (nonatomic, readonly) float calibrationProgress;

/// Size of the frame
@property (nonatomic, readonly) MBVImageSize *frameSize;

/// Field of view
@property (nonatomic, readonly) float fov;

/// Returns if calibration has reached 100%
@property (nonatomic, readonly, getter=isCalibrated) BOOL calibrated;

@end

NS_ASSUME_NONNULL_END
