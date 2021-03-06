//  SDLGetVehicleDataResponse.h
//  SyncProxy
//  Copyright (c) 2014 Ford Motor Company. All rights reserved.

#import <Foundation/Foundation.h>
#import <AppLink/SDLRPCResponse.h>

#import <AppLink/SDLGPSData.h>
#import <AppLink/SDLComponentVolumeStatus.h>
#import <AppLink/SDLPRNDL.h>
#import <AppLink/SDLTireStatus.h>
#import <AppLink/SDLBeltStatus.h>
#import <AppLink/SDLBodyInformation.h>
#import <AppLink/SDLDeviceStatus.h>
#import <AppLink/SDLVehicleDataEventStatus.h>
#import <AppLink/SDLWiperStatus.h>
#import <AppLink/SDLHeadLampStatus.h>
#import <AppLink/SDLECallInfo.h>
#import <AppLink/SDLAirbagStatus.h>
#import <AppLink/SDLEmergencyEvent.h>
#import <AppLink/SDLClusterModeStatus.h>
#import <AppLink/SDLMyKey.h>

@interface SDLGetVehicleDataResponse : SDLRPCResponse {}

-(id) init;
-(id) initWithDictionary:(NSMutableDictionary*) dict;

@property(strong) SDLGPSData* gps;
@property(strong) NSNumber* speed;
@property(strong) NSNumber* rpm;
@property(strong) NSNumber* fuelLevel;
@property(strong) SDLComponentVolumeStatus* fuelLevel_State;
@property(strong) NSNumber* instantFuelConsumption;
@property(strong) NSNumber* externalTemperature;
@property(strong) NSString* vin;
@property(strong) SDLPRNDL* prndl;
@property(strong) SDLTireStatus* tirePressure;
@property(strong) NSNumber* odometer;
@property(strong) SDLBeltStatus* beltStatus;
@property(strong) SDLBodyInformation* bodyInformation;
@property(strong) SDLDeviceStatus* deviceStatus;
@property(strong) SDLVehicleDataEventStatus* driverBraking;
@property(strong) SDLWiperStatus* wiperStatus;
@property(strong) SDLHeadLampStatus* headLampStatus;
@property(strong) NSNumber* engineTorque;
@property(strong) NSNumber* accPedalPosition;
@property(strong) NSNumber* steeringWheelAngle;
@property(strong) SDLECallInfo* eCallInfo;
@property(strong) SDLAirbagStatus* airbagStatus;
@property(strong) SDLEmergencyEvent* emergencyEvent;
@property(strong) SDLClusterModeStatus* clusterModeStatus;
@property(strong) SDLMyKey* myKey;

@end
