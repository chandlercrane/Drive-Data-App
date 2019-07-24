#import "MBVRoadRestrictions.h"

#include "VisionSafety/types/road_restrictions.hpp"

@interface MBVRoadRestrictions (Private)

- (instancetype)initWithRoadRestrictions:(mapbox::vision::RoadRestrictions const &)roadRestrictions;

@end
