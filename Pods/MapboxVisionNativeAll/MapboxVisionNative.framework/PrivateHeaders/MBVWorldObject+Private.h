#import "MBVWorldObject.h"

#include "Vision/types/world.hpp"

@interface MBVWorldObject (Private)

- (instancetype)initWithWorldObject:(mapbox::vision::WorldObject const &)worldObject;

@end
