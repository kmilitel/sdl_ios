//  SDLAudioType.h
//  SyncProxy
//  Copyright (c) 2014 Ford Motor Company. All rights reserved.

#import <Foundation/Foundation.h>
#import <AppLink/SDLEnum.h>

@interface SDLAudioType : SDLEnum {}

+(SDLAudioType*) valueOf:(NSString*) value;
+(NSMutableArray*) values;

+(SDLAudioType*) PCM;

@end
