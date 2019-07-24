#import <Foundation/Foundation.h>

#import "MBVImage.h"

#import "MBV_api.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Single frame with meta information.
 */
VISION_CORE_NATIVE_API NS_SWIFT_NAME(Frame) @interface MBVFrame : NSObject

/// Image representing the frame
@property (nonatomic, readonly) MBVImage *image;

/// Internal time of frame receipt. Expressed in seconds
@property (nonatomic, readonly) float time;

@end

NS_ASSUME_NONNULL_END
