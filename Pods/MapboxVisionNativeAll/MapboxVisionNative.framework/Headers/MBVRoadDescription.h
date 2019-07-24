#import <Foundation/Foundation.h>

#import "MBVLane.h"

#import "MBV_api.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Object aggregating information about road markup and road geometry.
 */
VISION_CORE_NATIVE_API NS_SWIFT_NAME(RoadDescription) @interface MBVRoadDescription : NSObject

/// Lanes on the road
@property (nonatomic, readonly) NSArray<MBVLane *> *lanes;

/// Index of the lane in lanes array where vehicle is located. -1 - lane is not determined
@property (nonatomic, readonly) NSInteger currentLaneIndex;

/// Relative position in the lane. 0 - left markup line, 1 - right markup line
@property (nonatomic, readonly) float currentLanePosition;

@end

NS_ASSUME_NONNULL_END
