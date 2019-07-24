#import "MBVSpeedLimits.h"

#include "VisionSafety/types/road_restrictions.hpp"

@interface MBVSpeedLimits (Private)

- (instancetype)initWithSpeedLimits:(mapbox::vision::SpeedLimits const &)speedLimits;

@end
