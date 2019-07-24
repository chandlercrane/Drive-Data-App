#import "MBVWorldCoordinate.h"

#include "Vision/types/geometry.hpp"

@interface MBVWorldCoordinate (Private)

- (instancetype)initWithWorldCoordinate:(mapbox::vision::WorldCoordinate const &)worldCoordinate;

@end
