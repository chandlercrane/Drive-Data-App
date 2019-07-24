#import <Foundation/Foundation.h>

#import "MBVDetection.h"
#import "MBVSign.h"

#import "MBV_api.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Single result of sign instance classification.
 */
VISION_CORE_NATIVE_API NS_SWIFT_NAME(SignClassification) @interface MBVSignClassification : NSObject

/// Classified sign
@property (nonatomic, readonly) MBVSign *sign;

/// Confidence of the sign type, returned by classificator
@property (nonatomic, readonly) float confidType;

/// Confidence of the number on the sign (if applicable), returned by classificator
@property (nonatomic, readonly) float confidNumber;

/// Detection on which the classification is based
@property (nonatomic, readonly) MBVDetection *detection;

@end

NS_ASSUME_NONNULL_END
