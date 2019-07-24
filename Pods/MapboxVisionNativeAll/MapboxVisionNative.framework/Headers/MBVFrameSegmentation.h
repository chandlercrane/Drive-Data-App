#import <Foundation/Foundation.h>

#import "MBVFrame.h"
#import "MBVImage.h"

#import "MBV_api.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Segmentation result for a single frame.
 */
VISION_CORE_NATIVE_API NS_SWIFT_NAME(FrameSegmentation) @interface MBVFrameSegmentation : NSObject

/// Original frame
@property (nonatomic, readonly) MBVFrame *frame;

/// Image representing segmentation mask.
/// Format: 1 byte per pixel, each pixel has value from `SegmentationClass` enum
@property (nonatomic, readonly) MBVImage *mask;

@end

NS_ASSUME_NONNULL_END
