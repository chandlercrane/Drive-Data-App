#import "MBVBezierCubic3D.h"

#include "Vision/types/geometry.hpp"

@interface MBVBezierCubic3D (Private)

- (instancetype)initWithBezierCubic3D:(mapbox::vision::BezierCubic3D const &)bezierCubic3D;

@end
