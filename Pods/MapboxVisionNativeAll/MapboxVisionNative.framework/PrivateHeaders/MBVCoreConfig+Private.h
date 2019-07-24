#import "MBVCoreConfig.h"
#include "VisionCore/config.hpp"

NS_ASSUME_NONNULL_BEGIN

@interface MBVCoreConfig (Private)

@property (nonatomic, unsafe_unretained) cva::ConfigPtr impl;

- (instancetype)initWithConfig:(cva::ConfigPtr)config;

@end

NS_ASSUME_NONNULL_END
