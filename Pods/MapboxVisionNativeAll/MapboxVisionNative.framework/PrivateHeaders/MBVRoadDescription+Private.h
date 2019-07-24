#import "MBVRoadDescription.h"

#include "Vision/types/road.hpp"

@interface MBVRoadDescription (Private)

- (instancetype)initWithRoadDescription:(mapbox::vision::RoadDescription const &)roadDescription;

@end
