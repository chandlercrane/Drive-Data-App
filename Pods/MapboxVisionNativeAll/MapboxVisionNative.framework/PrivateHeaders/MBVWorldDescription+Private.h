#import "MBVLane.h"
#import "MBVWorldDescription.h"

#include "Vision/types/world.hpp"

@interface MBVWorldDescription (Private)

/**
 Initializes MBVWorldDescription object with the specified instance of mapbox::vision::WorldDescription.

 @param lane The instance of mapbox::vision::WorldDescription that will be used to create MBVWorldDescription.

 @return The newly-created MBVWorldDescription instance.
 */
- (instancetype)initWithWorldDescription:(mapbox::vision::WorldDescription const &)worldDescription;

@end
