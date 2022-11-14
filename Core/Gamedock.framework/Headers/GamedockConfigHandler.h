//
//  GamedockConfigHandler.h
//  Gamedock
//
//  Copyright © 2015 Azerion. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

static NSString* const FEATURE_NAME_CONFIG = @"config";

@interface GamedockConfigHandler : NSObject

+(GamedockConfigHandler*)sharedInstance;

-(NSDictionary*)getConfig:(BOOL)withSdkConfig;
-(id)getSdkConfig;
-(id)getConfigValue:(NSString*)keyString;
-(void)storeConfig:(NSString*)jsonString;
-(NSString*)getConfigKey;

-(NSDictionary*)getDiskConfig;
-(id)getDiskConfigValue:(NSString*)keyString;

@end
