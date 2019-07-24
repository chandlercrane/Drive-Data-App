#import <Foundation/Foundation.h>

#import "MBVDetection.h"
#import "MBVFrame.h"

#import "MBV_api.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  All detections for a single frame.
 */
VISION_CORE_NATIVE_API NS_SWIFT_NAME(FrameDetections) @interface MBVFrameDetections : NSObject

/// Original frame
@property (nonatomic, readonly) MBVFrame *frame;

/// Array of detected objects
@property (nonatomic, readonly) NSArray<MBVDetection *> *detections;

@end

NS_ASSUME_NONNULL_END
