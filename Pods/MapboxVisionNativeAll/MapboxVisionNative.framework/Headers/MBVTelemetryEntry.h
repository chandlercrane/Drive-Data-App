#import <Foundation/Foundation.h>

#import "MBV_api.h"

NS_ASSUME_NONNULL_BEGIN

VISION_CORE_NATIVE_API NS_SWIFT_NAME(TelemetryEntry) @interface MBVTelemetryEntry : NSObject

@property (nonnull, readonly) NSString *key;
@property (nonnull, readonly) id value;

- (instancetype)initWithKey:(NSString *)key value:(id)value;

@end

NS_ASSUME_NONNULL_END
