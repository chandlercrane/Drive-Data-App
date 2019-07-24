#import <Foundation/Foundation.h>

#import "MBVGeoLocation.h"

#import "MBV_api.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Location of our vehicle with meta information.
 */
VISION_CORE_NATIVE_API NS_SWIFT_NAME(VehicleState) @interface MBVVehicleState : NSObject

/// Geographical position of the vehicle
@property (nonatomic, readonly) MBVGeoLocation *location;

/// Vehicle speed expressed in meters per second
@property (nonatomic, readonly) float speed;

@end

NS_ASSUME_NONNULL_END
