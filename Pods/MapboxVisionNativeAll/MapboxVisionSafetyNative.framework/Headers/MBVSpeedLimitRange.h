#import <Foundation/Foundation.h>

#import "MBV_safety_api.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Range describing minimum and maximum speed limits measured in meters per second.
 */
VISION_SAFETY_NATIVE_API NS_SWIFT_NAME(SpeedLimitRange) @interface MBVSpeedLimitRange : NSObject

/// Minimum speed limit
@property (nonatomic, readonly) float min;

/// Maximum speed limit
@property (nonatomic, readonly) float max;

@end

NS_ASSUME_NONNULL_END
