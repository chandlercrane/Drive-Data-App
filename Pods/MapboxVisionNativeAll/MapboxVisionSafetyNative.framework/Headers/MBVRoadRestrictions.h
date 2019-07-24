#import <Foundation/Foundation.h>

#import "MBVSpeedLimits.h"

#import "MBV_safety_api.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Object describing currently applied road restrictions.
 */
VISION_SAFETY_NATIVE_API NS_SWIFT_NAME(RoadRestrictions) @interface MBVRoadRestrictions : NSObject

/// Speed restrictions
@property (nonatomic, readonly) MBVSpeedLimits *speedLimits;

@end

NS_ASSUME_NONNULL_END
