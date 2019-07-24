#import <CoreVideo/CVPixelBuffer.h>
#import <Foundation/Foundation.h>
#import "MBV_api.h"

NS_ASSUME_NONNULL_BEGIN

VISION_CORE_NATIVE_API NS_SWIFT_NAME(ReplaySensors) @interface MBVReplaySensors : NSObject

- (instancetype)init NS_UNAVAILABLE;

- (void)setFrame:(CVPixelBufferRef)image timestamp:(NSUInteger)timestamp;

@end

NS_ASSUME_NONNULL_END
