#import <CoreGraphics/CGGeometry.h>
#import <Foundation/Foundation.h>

#import "MBV_api.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Size of an image.
 */
VISION_CORE_NATIVE_API NS_SWIFT_NAME(ImageSize) @interface MBVImageSize : NSObject

/// Width of the image
@property (nonatomic, readonly) NSInteger width;

/// Height of the image
@property (nonatomic, readonly) NSInteger height;

@property (nonatomic, readonly) CGSize cgSize;

@end

NS_ASSUME_NONNULL_END
