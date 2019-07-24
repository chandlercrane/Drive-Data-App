#import <Foundation/Foundation.h>

#import "MBVDetection.h"
#import "MBVWorldObject.h"

#import "MBV_api.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Object aggregating information about objects and their position in the world around a vehicle.
 *  Description includes static and dynamic objects.
 */
VISION_CORE_NATIVE_API NS_SWIFT_NAME(WorldDescription) @interface MBVWorldDescription : NSObject

/// World objects
@property (nonatomic, readonly) NSArray<MBVWorldObject *> *objects;

/**
 Get all MBVWorldObject objects that are currently in specific lane.

 @param lane The lane to collect objects.

 @return Array of MBVWorldObject objects that are currently in lane.
 */
- (NSArray<MBVWorldObject *> *)objectsInLane:(MBVLane *)lane NS_SWIFT_NAME(objects(in:));

/**
 Get MBVWorldObject objects which have specified detection class.

 @param detectionClass The target detection class. We will collect only objects with that detection class.

 @return Array of MBVWorldObject objects with specified.
 */
- (NSArray<MBVWorldObject *> *)objectsWithDetectionClass:(MBVDetectionClass)detectionClass NS_SWIFT_NAME(objects(with:));

@end

NS_ASSUME_NONNULL_END
