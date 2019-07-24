#import <Foundation/Foundation.h>

#import "MBVGeoCoordinate.h"

#import "MBV_api.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Direction of movement in terms of cardinal directions.
 */
typedef NS_ENUM(NSUInteger, MBVCardinalDirection) {
  MBVCardinalDirectionUnknown = 0,
  MBVCardinalDirectionNorth,
  MBVCardinalDirectionNorthEast,
  MBVCardinalDirectionEast,
  MBVCardinalDirectionSouthEast,
  MBVCardinalDirectionSouth,
  MBVCardinalDirectionSouthWest,
  MBVCardinalDirectionWest,
  MBVCardinalDirectionNorthWest
} NS_SWIFT_NAME(CardinalDirection);

/**
 *  Object representing geographical coordinates.
 */
VISION_CORE_NATIVE_API NS_SWIFT_NAME(GeoPosition) @interface MBVGeoLocation : NSObject

/// Coordinate of the location
@property (nonatomic, strong) MBVGeoCoordinate *coordinate;

/// Azimuth of the location.
/// Expressed in degrees in range [0; 360). Negative if the azimuth is invalid
@property (nonatomic, assign) double azimuth;

/// Cardinal direction based on azimuth
@property (nonatomic, readonly) MBVCardinalDirection direction;

@end

NS_ASSUME_NONNULL_END
