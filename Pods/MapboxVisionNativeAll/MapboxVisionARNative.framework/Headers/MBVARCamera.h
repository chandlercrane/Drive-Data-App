#import <Foundation/Foundation.h>

#import "MBV_ar_api.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Virtual AR camera parameters.
 */
VISION_AR_NATIVE_API NS_SWIFT_NAME(ARCamera) @interface MBVARCamera : NSObject

/// Vertical field of view expressed in radians
@property (nonatomic, readonly) float fov;

/// Aspect ratio
@property (nonatomic, readonly) float aspectRatio;

/// Roll of the camera in radians
@property (nonatomic, readonly) float roll;

/// Pitch of the camera in radians
@property (nonatomic, readonly) float pitch;

/// Yaw of the camera in radians
@property (nonatomic, readonly) float yaw;

/// Height above the road surface in meters
@property (nonatomic, readonly) float height;

@end

NS_ASSUME_NONNULL_END
