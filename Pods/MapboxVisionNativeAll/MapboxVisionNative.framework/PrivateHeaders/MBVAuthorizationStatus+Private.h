#import "MBVAuthorizationStatus.h"

#include "Vision/types/auth.hpp"

MBVAuthorizationStatus convert(mapbox::vision::AuthorizationStatus status) {
  switch (status) {
    case mapbox::vision::AuthorizationStatus::Unknown:
      [NSException raise:@"InvalidMBVAuthorizationStatus" format:@"AuthUnknown case should not be passed into converter"];
      exit(-1);
    case mapbox::vision::AuthorizationStatus::NotAuthorized:
      return MBVAuthorizationStatusNotAuthorized;
    case mapbox::vision::AuthorizationStatus::Authorized:
      return MBVAuthorizationStatusAuthorized;
  }
}
