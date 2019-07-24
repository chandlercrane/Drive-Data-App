#import <Foundation/Foundation.h>

#import "MBVSignType.h"

#import "MBV_api.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Object representing available sign information.
 */
VISION_CORE_NATIVE_API NS_SWIFT_NAME(Sign) @interface MBVSign : NSObject

/// Type of the sign
@property (nonatomic, readonly) MBVSignType type;

/// Numeric value of the sign, where available (eg. speed, mass, height etc.)
@property (nonatomic, readonly) float number;

- (instancetype)initWithType:(MBVSignType)type number:(float)number;

@end

NS_ASSUME_NONNULL_END
