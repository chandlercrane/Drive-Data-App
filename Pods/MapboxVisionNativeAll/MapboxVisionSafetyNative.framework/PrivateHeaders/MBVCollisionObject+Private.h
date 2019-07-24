#import "MBVCollisionObject.h"

#include "VisionSafety/types/collision_object.hpp"

@interface MBVCollisionObject (Private)

- (instancetype)initWithCollisionObject:(mapbox::vision::CollisionObject const &)collisionObject;

@end
