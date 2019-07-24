#import <Foundation/Foundation.h>

#import "MBVFrame.h"
#import "MBVSignClassification.h"

#import "MBV_api.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  All sign classifications for a single frame.
 */
VISION_CORE_NATIVE_API NS_SWIFT_NAME(FrameSignClassifications) @interface MBVFrameSignClassifications : NSObject

/// Original frame
@property (nonatomic, readonly) MBVFrame *frame;

/// Array of classified signs
@property (nonatomic, readonly) NSArray<MBVSignClassification *> *signs;

@end

NS_ASSUME_NONNULL_END
