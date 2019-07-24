#import <Foundation/Foundation.h>

#import "MBV_api.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Point in the ISO coordinate system (unit is a meter).
 *
 *  This coordinate system is used to represent the position of an object relative to the device camera’s position in physical space.
 *  The origin of this coordinate system is a point projected from a camera position to a road plane.
 */
VISION_CORE_NATIVE_API NS_SWIFT_NAME(WorldCoordinate) @interface MBVWorldCoordinate : NSObject

/// Distance in front of the camera
@property (nonatomic, readonly) double x;

/// Distance on the left of the camera
@property (nonatomic, readonly) double y;

/// Distance above the camera
@property (nonatomic, readonly) double z;

- (instancetype)initWithX:(double)x y:(double)y z:(double)z;

@end

NS_ASSUME_NONNULL_END
