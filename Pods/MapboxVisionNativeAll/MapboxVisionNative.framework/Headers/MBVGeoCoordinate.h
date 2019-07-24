#import <Foundation/Foundation.h>

#import "MBV_api.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Coordinate in Mercator.
 *
 *  This coordinate system is used to locate an object's geographic location as it would appear on a map.
 *  Examples include the GPS position of the ego-vehicle or the position of landmarks, which can be used for localization
 *  or position of the detected objects.
 *
 *  Currently we use Spherical Earth Model for geodesic calculations. Each point is specified using `longitude, latitude`.
 *
 *  Longitude ranges from `-180` to `180` degrees, where `0` is Greenwich meridian, the positive direction (`+`) is to
 *  the `East`, and the negative direction (`-`) is to the `West`.
 *
 *  Latitude ranges from `-90` to `+90` degrees, where `0` is Equator, the positive direction (`+`) is to the `North`,
 *  and the negative direction (`-`) is to the `South`.
 */
VISION_CORE_NATIVE_API NS_SWIFT_NAME(GeoCoordinate) @interface MBVGeoCoordinate : NSObject

/// The longitude in degrees
@property (nonatomic, readonly) double lon;

/// The latitude in degrees
@property (nonatomic, readonly) double lat;

- (instancetype)initWithLon:(double)lon lat:(double)lat;

@end

NS_ASSUME_NONNULL_END
