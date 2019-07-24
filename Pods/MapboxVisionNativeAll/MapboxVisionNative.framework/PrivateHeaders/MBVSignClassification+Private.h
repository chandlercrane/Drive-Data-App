#import "MBVSignClassification.h"

#include "Vision/types/sign.hpp"

@interface MBVSignClassification (Private)

- (instancetype)initWithSignClassification:(mapbox::vision::SignClassification const &)signClassification;

@end
