#import <Foundation/Foundation.h>
#import <MapboxVisionNative/MapboxVisionNative.h>

#import "MBV_safety_api.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Detected danger level of collision.
 */
typedef NS_ENUM(NSUInteger, MBVCollisionDangerLevel) {
  MBVCollisionDangerLevelNone,
  MBVCollisionDangerLevelWarning,
  MBVCollisionDangerLevelCritical,
} NS_SWIFT_NAME(CollisionDangerLevel);

/**
 *  Object describing detected collision with a specified `WorldObject`.
 */
VISION_SAFETY_NATIVE_API NS_SWIFT_NAME(CollisionObject) @interface MBVCollisionObject : NSObject

/// Reference to a world object contained in `WorldDescription`
@property (nonatomic, readonly) MBVWorldObject *object;

/// Last detection associated with the object
@property (nonatomic, readonly) MBVDetection *lastDetection;

/// Last frame where the object was seen
@property (nonatomic, readonly) MBVFrame *lastFrame;

/// Predicted time before impact with the object expressed in seconds
@property (nonatomic, readonly) float timeToImpact;

/// Danger level of collision
@property (nonatomic, readonly) MBVCollisionDangerLevel dangerLevel;

@end

NS_ASSUME_NONNULL_END
