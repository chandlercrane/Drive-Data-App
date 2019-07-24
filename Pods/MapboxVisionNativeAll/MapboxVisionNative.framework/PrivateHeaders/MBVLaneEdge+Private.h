#import "MBVLaneEdge.h"

#include "Vision/types/lanes.hpp"

@interface MBVLaneEdge (Private)

- (instancetype)initWithLaneEdge:(mapbox::vision::LaneEdge const &)laneEdge;

@end
