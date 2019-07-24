#import <Foundation/Foundation.h>

#import "MBVWorldCoordinate.h"

#import "MBV_api.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Type of the lane edge.
 */
typedef NS_ENUM(NSUInteger, MBVLaneEdgeType) {
  MBVLaneEdgeTypeUnknown = 0,
  MBVLaneEdgeTypeCurb,
  MBVLaneEdgeTypeConstruction,
  MBVLaneEdgeTypeMarkupDashed,
  MBVLaneEdgeTypeMarkupDoubleSolid,
  MBVLaneEdgeTypeMarkupSolid,
} NS_SWIFT_NAME(LaneEdgeType);

/**
 *  Lane edge description.
 */
VISION_CORE_NATIVE_API NS_SWIFT_NAME(LaneEdge) @interface MBVLaneEdge : NSObject

/// Type of the lane edge
@property (nonatomic, readonly) MBVLaneEdgeType type;

/// Lane edge geometry in the world space
@property (nonatomic, readonly) NSArray<MBVWorldCoordinate *> *points;

@end

NS_ASSUME_NONNULL_END
