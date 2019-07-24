#import <Foundation/Foundation.h>

/**
 *  Determined country of operation.
 */
typedef NS_ENUM(NSUInteger, MBVCountry) {
  MBVCountryUnknown,
  MBVCountryUK,
  MBVCountryUSA,
  MBVCountryChina,
  MBVCountryOther
} NS_SWIFT_NAME(Country);
