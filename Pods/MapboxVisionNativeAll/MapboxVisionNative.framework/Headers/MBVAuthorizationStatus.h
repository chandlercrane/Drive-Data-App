#import <Foundation/Foundation.h>

/**
 *  Current authorization status.
 */
typedef NS_ENUM(NSUInteger, MBVAuthorizationStatus) {

  /// This application is authorized to receive events from SDK
  MBVAuthorizationStatusNotAuthorized,

  /// Authorization hasn't yet succeeded.
  /// This application may be restricted from receiving events from SDK
  MBVAuthorizationStatusAuthorized,
} NS_SWIFT_NAME(AuthorizationStatus);
