#import <Foundation/Foundation.h>

#import "MBVLaneEdge.h"

#import "MBV_api.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Direction of a lane.
 */
typedef NS_ENUM(NSUInteger, MBVLaneDirection) {
  MBVLaneDirectionUnkwnown = 0,
  MBVLaneDirectionBackward,
  MBVLaneDirectionForward,
  MBVLaneDirectionReverse
} NS_SWIFT_NAME(LaneDirection);

/**
 *  Single lane object.
 */
VISION_CORE_NATIVE_API NS_SWIFT_NAME(Lane) @interface MBVLane : NSObject

/// Direction of the lane
@property (nonatomic, readonly) MBVLaneDirection direction;

/// Left edge of the lane
@property (nonatomic, readonly) MBVLaneEdge *leftEdge;

/// Right edge of the lane
@property (nonatomic, readonly) MBVLaneEdge *rightEdge;

/**
 Checks if the lane contains specific world coordinate.

 @param worldCoordinate The world coordinate to check.

 @return Returns true if MBVLane contains `worldCoordinate`, otherwise returns false.
 */
- (bool)containsWorldCoordinate:(MBVWorldCoordinate *)worldCoordinate NS_SWIFT_NAME(contains(worldCoordinate:));

@end

NS_ASSUME_NONNULL_END
