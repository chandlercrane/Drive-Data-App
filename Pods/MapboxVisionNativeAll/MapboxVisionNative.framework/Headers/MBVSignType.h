#import <Foundation/Foundation.h>

/**
 *  Type of a sign.
 */
typedef NS_ENUM(NSUInteger, MBVSignType) {
  MBVSignTypeUnknown = 0,
  MBVSignTypeSpeedLimit,
  MBVSignTypeSpeedLimitEnd,
  MBVSignTypeSpeedLimitMin,
  MBVSignTypeSpeedLimitNight,
  MBVSignTypeSpeedLimitTrucks,
  MBVSignTypeMass,
  MBVSignTypeSpeedLimitComplementary,
  MBVSignTypeSpeedLimitExit,
  MBVSignTypeSpeedLimitRamp,
  MBVSignTypeWarningTurnLeft,
  MBVSignTypeWarningTurnRight,
  MBVSignTypeWarningHairpinCurveLeft,
  MBVSignTypeWarningRoundabout,
  MBVSignTypeWarningSpeedBump,
  MBVSignTypeWarningWindingRoad,
  MBVSignTypeInformationBikeRoute,
  MBVSignTypeInformationParking,
  MBVSignTypeRegulatoryAllDirectionsPermitted,
  MBVSignTypeRegulatoryBicyclesOnly,
  MBVSignTypeRegulatoryDoNotPass,
  MBVSignTypeRegulatoryDoNotDriveOnShoulder,
  MBVSignTypeRegulatoryDualLanesAllDirectionsOnRight,
  MBVSignTypeRegulatoryDualLanesGoLeftOrRight,
  MBVSignTypeRegulatoryDualLanesGoStraightOnLeft,
  MBVSignTypeRegulatoryDualLanesGoStraightOnRight,
  MBVSignTypeRegulatoryDualLanesTurnLeft,
  MBVSignTypeRegulatoryDualLanesTurnLeftOrStraight,
  MBVSignTypeRegulatoryDualLanesTurnRightOrStraight,
  MBVSignTypeRegulatoryEndOfSchoolZone,
  MBVSignTypeRegulatoryGoStraight,
  MBVSignTypeRegulatoryGoStraightOrTurnLeft,
  MBVSignTypeRegulatoryGoStraightOrTurnRight,
  MBVSignTypeRegulatoryHeightLimit,
  MBVSignTypeRegulatoryLeftTurnYieldOnGreen,
  MBVSignTypeRegulatoryNoBicycles,
  MBVSignTypeRegulatoryNoEntry,
  MBVSignTypeRegulatoryNoLeftOrUTurn,
  MBVSignTypeRegulatoryNoLeftTurn,
  MBVSignTypeRegulatoryNoMotorVehicles,
  MBVSignTypeRegulatoryNoParking,
  MBVSignTypeRegulatoryNoParkingOrNoStopping,
  MBVSignTypeRegulatoryNoPedestrians,
  MBVSignTypeRegulatoryNoRightTurn,
  MBVSignTypeRegulatoryNoStopping,
  MBVSignTypeRegulatoryNoStraightThrough,
  MBVSignTypeRegulatoryNoUTurn,
  MBVSignTypeRegulatoryOneWayStraight,
  MBVSignTypeRegulatoryReversibleLanes,
  MBVSignTypeRegulatoryRoadClosedToVehicles,
  MBVSignTypeRegulatoryStop,
  MBVSignTypeRegulatoryTrafficSignalPhotoEnforced,
  MBVSignTypeRegulatoryTripleLanesGoStraightCenterLane,
  MBVSignTypeWarningBicyclesCrossing,
  MBVSignTypeWarningHeightRestriction,
  MBVSignTypeWarningPassLeftOrRight,
  MBVSignTypeWarningPedestriansCrossing,
  MBVSignTypeWarningRoadNarrowsLeft,
  MBVSignTypeWarningRoadNarrowsRight,
  MBVSignTypeWarningSchoolZone,
  MBVSignTypeWarningStopAhead,
  MBVSignTypeWarningTrafficSignals,
  MBVSignTypeWarningTwoWayTraffic,
  MBVSignTypeWarningYieldAhead,
  MBVSignTypeInformationHighway,
  MBVSignTypeRegulatoryDoNotBlockIntersection,
  MBVSignTypeRegulatoryKeepRightPicture,
  MBVSignTypeRegulatoryKeepRightText,
  MBVSignTypeRegulatoryNoHeavyGoodsVehiclesPicture,
  MBVSignTypeRegulatoryNoLeftTurnText,
  MBVSignTypeRegulatoryOneWayLeftArrow,
  MBVSignTypeRegulatoryOneWayLeftArrowText,
  MBVSignTypeRegulatoryOneWayLeftText,
  MBVSignTypeRegulatoryOneWayRightArrow,
  MBVSignTypeRegulatoryOneWayRightArrowText,
  MBVSignTypeRegulatoryOneWayRightText,
  MBVSignTypeRegulatoryTurnLeftAhead,
  MBVSignTypeRegulatoryTurnLeft,
  MBVSignTypeRegulatoryTurnLeftOrRight,
  MBVSignTypeRegulatoryTurnRightAhead,
  MBVSignTypeRegulatoryYield,
  MBVSignTypeWarningRailwayCrossing,
  MBVSignTypeWarningHairpinCurveRight,
  MBVSignTypeComplementaryOneDirectionLeft,
  MBVSignTypeComplementaryOneDirectionRight,
  MBVSignTypeWarningCurveLeft,
  MBVSignTypeWarningCurveRight,
  MBVSignTypeWarningHorizontalAlignmentLeft,
  MBVSignTypeWarningHorizontalAlignmentRight,
  MBVSignTypeRegulatoryTurnRight,
  MBVSignTypeWhiteTablesText,
  MBVSignTypeLanes,
  MBVSignTypeGreenPlates,
  MBVSignTypeWarningText,
  MBVSignTypeWarningCrossroads,
  MBVSignTypeWarningPicture,
  MBVSignTypeComplementaryKeepLeft,
  MBVSignTypeComplementaryKeepRight,
  MBVSignTypeRegulatoryExceptBicycle,
  MBVSignTypeWarningAddedLaneRight,
  MBVSignTypeWarningDeadEndText,
  MBVSignTypeWarningDipText,
  MBVSignTypeWarningEmergencyVehicles,
  MBVSignTypeWarningEndText,
  MBVSignTypeWarningFallingRocksOrDebrisRight,
  MBVSignTypeWarningLowGroundClearance,
  MBVSignTypeWarningObstructionMarker,
  MBVSignTypeWarningPlayground,
  MBVSignTypeWarningSecondRoadRight,
  MBVSignTypeWarningTurnLeftOnlyArrow,
  MBVSignTypeWarningTurnLeftOrRightOnlyArrow,
  MBVSignTypeWarningTramsCrossing,
  MBVSignTypeWarningUnevenRoad,
  MBVSignTypeWarningWildAnimals,
  MBVSignTypeRegulatoryParkingRestrictions,
  MBVSignTypeRegulatoryYieldOrStopForPedestrians,
  MBVSignTypeRegulatoryNoBuses,
  MBVSignTypeRegulatoryNoMotorcyclesOrMopeds,
  MBVSignTypeRegulatoryNoTurnLeftOrTurnRight,
  MBVSignTypeRegulatoryNoOvertaking,
  MBVSignTypeRegulatoryNoHonking,
  MBVSignTypeRegulatoryWidthLimit,
  MBVSignTypeRegulatoryAxleWeightLimit,
  MBVSignTypeRegulatoryNoVehiclesCarryingExplosives,
  MBVSignTypeRegulatoryRoundabout,
  MBVSignTypeRegulatoryHonking,
  MBVSignTypeRegulatoryPedestriansCrossing,
  MBVSignTypeRegulatoryMotorVehicles,
  MBVSignTypeRegulatoryUTurn,
  MBVSignTypeRegulatoryNoSmallPassengerCar,
  MBVSignTypeWarningSteepAscent,
  MBVSignTypeWarningSteepDescent,
  MBVSignTypeWarningVillage,
  MBVSignTypeWarningKeepSlowdown,
  MBVSignTypeWarningDangerousTraffic,
  MBVSignTypeWarningRoadworks,
  MBVSignTypeWarningSecondRoadLeft,
  MBVSignTypeRegulatoryNoTurnOnRedText,
  MBVSignTypeWarningAddedLaneLeft,
  MBVSignTypeWarningFlaggersInRoad,
  MBVSignTypeWarningLoop270Degree,
  MBVSignTypeWarningRoadNarrows,
  MBVSignTypeWarningSlipperyRoadSurface,
  MBVSignTypeRegulatoryBusLane,
  MBVSignTypeRegulatoryEndNoOvertaking,
  MBVSignTypeRegulatoryNoHumanCargoTricycleEntry,
  MBVSignTypeRegulatoryNoHumanPassengerTricycleEntry,
  MBVSignTypeRegulatoryNoRickshaws,
  MBVSignTypeRegulatoryNoStraightThroughOrTurnLeft,
  MBVSignTypeRegulatoryNoStraightThroughOrTurnRight,
  MBVSignTypeRegulatoryNoTractors,
  MBVSignTypeRegulatoryNoTricycles,
  MBVSignTypeRegulatoryUTurnOrTurnLeft,
  MBVSignTypeRegulatoryWalk,
  MBVSignTypeWarningDangerousMountainRoadLeft,
  MBVSignTypeWarningDangerousMountainRoadRight,
  MBVSignTypeWarningDomesticAnimals,
  MBVSignTypeWarningFallingRocksOrDebrisLeft,
  MBVSignTypeWarningHazardLane,
  MBVSignTypeWarningRailroadCrossingWithoutBarriers,
  MBVSignTypeWarningReverseCurveLeft,
  MBVSignTypeWarningReverseCurveRight,
  MBVSignTypeWarningSoftShoulderLeft,
  MBVSignTypeWarningSoftShoulderRight,
  MBVSignTypeWarningTunnel,
  MBVSignTypeWarningWaterPavement,
  MBVSignTypeSpeedLimitAdvMax,
  MBVSignTypeSpeedLimitEndAdv,
  MBVSignTypeRegulatoryEndLimitedAccessRoad,
  MBVSignTypeRegulatoryEndMotorway,
  MBVSignTypeRegulatoryEquestriansOnly,
  MBVSignTypeRegulatoryGasStation,
  MBVSignTypeInformationHospital,
  MBVSignTypeInformationLivingStreet,
  MBVSignTypeRegulatoryMotorway,
  MBVSignTypeRegulatorySharedLaneBicyclesPedestrians,
  MBVSignTypeRegulatoryEndPriorityRoad,
  MBVSignTypeRegulatoryEndProhibition,
  MBVSignTypeRegulatoryGiveWayToOncomingTraffic,
  MBVSignTypeRegulatoryMinSafeDist,
  MBVSignTypeRegulatoryNoDangerGoods,
  MBVSignTypeRegulatoryNoOverHeavy,
  MBVSignTypeRegulatoryPriorityOverOncomingTraffic,
  MBVSignTypeRegulatoryPriorityRoad,
  MBVSignTypeRegulatoryWeightLimit,
  MBVSignTypeWarningDangerousCrosswinds,
  MBVSignTypeWarningIcyRoad,
  MBVSignTypeWarningLowFlyingAircraft,
  MBVSignTypeWarningOpeningOrSwingBridge,
  MBVSignTypeWarningRailwayCrossingWithBarriers,
  MBVSignTypeWarningTrafficQueues,
} NS_SWIFT_NAME(SignType);