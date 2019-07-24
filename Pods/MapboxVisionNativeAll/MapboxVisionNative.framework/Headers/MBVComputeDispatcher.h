#import <Foundation/Foundation.h>
#import <Metal/Metal.h>

#import "MBV_api.h"

typedef NSArray<NSArray<NSNumber *> *> MBVMLShapes;

VISION_CORE_NATIVE_API NS_SWIFT_NAME(ComputeDispatcher) @interface MBVComputeDispatcher : NSObject

+ (void)dispathPipeline:(id<MTLComputePipelineState>)pipeline
                encoder:(id<MTLComputeCommandEncoder>)encoder
                texture:(id<MTLTexture>)texture;

@end
