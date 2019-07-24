#import "MBVARLane.h"

#include "VisionAR/types/vision_ar_lane.hpp"

@interface MBVARLane (Private)

- (instancetype)initWithLane:(mapbox::vision::ARLane const &)lane;

@end
