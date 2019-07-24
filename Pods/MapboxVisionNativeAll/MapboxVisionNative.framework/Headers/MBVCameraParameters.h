#import <Foundation/Foundation.h>

#import "MBV_api.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Intrinsic camera parameters representing the source of video frames.
 */
VISION_CORE_NATIVE_API NS_SWIFT_NAME(CameraParameters) @interface MBVCameraParameters : NSObject

- (instancetype)initWithWidth:(NSInteger)width height:(NSInteger)height focalXPixels:(float)focalXPixels focalYPixels:(float)focalYPixels;

/// Image sensor width
@property (nonatomic, readonly) NSInteger width;

/// Image sensor height
@property (nonatomic, readonly) NSInteger height;

/// Focal length in pixels by width
@property (nonatomic, readonly) float focalXPixels;

/// Focal length in pixels by height
@property (nonatomic, readonly) float focalYPixels;

@end

NS_ASSUME_NONNULL_END
