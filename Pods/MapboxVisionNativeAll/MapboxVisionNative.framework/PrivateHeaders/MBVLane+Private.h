#import "MBVLane.h"

#include "Vision/types/lanes.hpp"

@interface MBVLane ()

/**
 The underlying Core instance of `mapbox::vision::Lane`.
 */
@property (nonatomic, assign, readonly) mapbox::vision::Lane impl;

/**
 Initializes MBVLane object with the specified instance of mapbox::vision::Lane.

 @param lane The instance of mapbox::vision::Lane that will be used to create MBVLane.

 @return The newly-created MBVLane instance.
 */
- (instancetype)initWithLane:(mapbox::vision::Lane const &)lane;

@end
