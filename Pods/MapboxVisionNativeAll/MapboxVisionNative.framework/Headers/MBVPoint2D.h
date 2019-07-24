#import <CoreGraphics/CoreGraphics.h>
#import <Foundation/Foundation.h>

#import "MBV_api.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Represents pixel coordinates on image. Top left corner of an image has (x: 0, y: 0) coordinate.
 *
 * This coordinate system is used to represent the position of an object relative to the frame.
 * The origin is the left top corner of the frame. The position of an object is expressed as `x, y`.
 */
VISION_CORE_NATIVE_API NS_SWIFT_NAME(Point2D) @interface MBVPoint2D : NSObject

/// Horizontal distance in pixels from the origin to the object
@property (nonatomic, readonly) NSInteger x;

/// Vertical distance in pixels from the origin to the object
@property (nonatomic, readonly) NSInteger y;

/// `CGPoint` representation of pixel coordinates
@property (nonatomic, readonly) CGPoint cgPoint;

- (instancetype)initWithX:(NSInteger)x y:(NSInteger)y;

@end

NS_ASSUME_NONNULL_END
