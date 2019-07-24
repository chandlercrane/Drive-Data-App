#import "MBVVehicleState.h"

#include "Vision/types/vehicle.hpp"

@interface MBVVehicleState (Private)

- (instancetype)initWithVehicleState:(mapbox::vision::VehicleState const &)vehicleState;

@end
