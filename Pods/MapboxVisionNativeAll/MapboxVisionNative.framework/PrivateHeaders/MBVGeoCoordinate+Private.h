#import "MBVGeoCoordinate.h"

#include "Vision/types/geo.hpp"

@interface MBVGeoCoordinate (Private)

- (instancetype)initWithGeoCoordinate:(mapbox::vision::GeoCoordinate const &)geoCoordinate;

@end
