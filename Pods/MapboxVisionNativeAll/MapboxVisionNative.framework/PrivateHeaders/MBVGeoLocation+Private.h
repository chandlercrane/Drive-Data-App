#import "MBVGeoLocation.h"

#include "Vision/types/geo.hpp"

@interface MBVGeoLocation (Private)

- (instancetype)initWithGeoLocation:(const mapbox::vision::GeoLocation &)geoLocation;

@end
