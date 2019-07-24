#import <Foundation/Foundation.h>

#import "MBVDetection.h"
#import "MBVWorldCoordinate.h"

#import "MBV_api.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Description of the object in the world.
 */
VISION_CORE_NATIVE_API NS_SWIFT_NAME(WorldObject) @interface MBVWorldObject : NSObject

/// Unique identifier of the object.
/// All the objects are tracked, so the identifier determines the object across frames
@property (nonatomic, readonly) NSUInteger identifier;

/// Coordinate of the object relative to the camera
@property (nonatomic, readonly) MBVWorldCoordinate *position;

/// Type of the object
@property (nonatomic, readonly) MBVDetectionClass detectionClass;

@end

NS_ASSUME_NONNULL_END
