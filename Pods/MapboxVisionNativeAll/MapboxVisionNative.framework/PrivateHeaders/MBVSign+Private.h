#import "MBVSign.h"

#include "Vision/types/sign.hpp"

@interface MBVSign (Private)

- (instancetype)initWithSign:(mapbox::vision::Sign const &)sign;

@end
