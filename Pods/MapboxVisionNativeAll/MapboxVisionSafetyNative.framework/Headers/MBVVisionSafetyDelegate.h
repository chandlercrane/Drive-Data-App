#import <Foundation/Foundation.h>

#import "MBV_safety_api.h"

NS_ASSUME_NONNULL_BEGIN

@class MBVRoadRestrictions;
@class MBVCollisionObject;

VISION_SAFETY_NATIVE_API NS_SWIFT_NAME(VisionSafetyDelegate) @protocol MBVVisionSafetyDelegate

- (void)onRoadRestrictionsUpdated:(MBVRoadRestrictions *)roadRestrictions;
- (void)onCollisionsUpdated:(NSArray<MBVCollisionObject *> *)collisions;

@end

NS_ASSUME_NONNULL_END
