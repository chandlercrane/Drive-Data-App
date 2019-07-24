#import <Foundation/Foundation.h>

#import "MBVSpeedLimitRange.h"

#import "MBV_safety_api.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Object describing speed restrictions for a current road environment.
 */
VISION_SAFETY_NATIVE_API NS_SWIFT_NAME(SpeedLimits) @interface MBVSpeedLimits : NSObject

/// Current speed restrictions for cars
@property (nonatomic, readonly) MBVSpeedLimitRange *speedLimitRange;

@end

NS_ASSUME_NONNULL_END
