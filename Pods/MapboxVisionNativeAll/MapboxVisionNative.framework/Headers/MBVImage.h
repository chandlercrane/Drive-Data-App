#import <Foundation/Foundation.h>
#import <Metal/MTLTexture.h>
#import <UIKit/UIKit.h>

#import "MBVImageSize.h"
#import "MBV_api.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Pixel format of an image.
 */
typedef NS_ENUM(NSUInteger, MBVImageFormat) {
  MBVImageFormatUnknown = 0,
  MBVImageFormatRGBA,
  MBVImageFormatBGRA,
  MBVImageFormatRGB,
  MBVImageFormatBGR,
  MBVImageFormatGrayscale8,
} NS_SWIFT_NAME(MBVImage.Format);

/**
 *  Image object with attributes.
 */
VISION_CORE_NATIVE_API NS_SWIFT_NAME(Image) @interface MBVImage : NSObject

/// Image format
@property (nonatomic, readonly) MBVImageFormat format;

/// Image size
@property (nonatomic, readonly) MBVImageSize *size;

- (nullable id<MTLTexture>)getTexture;
- (nullable CVPixelBufferRef)createCVPixelBuffer;
- (nullable UIImage *)getUIImage;
- (nullable CGImageRef)createCGImage;

@end

NS_ASSUME_NONNULL_END
