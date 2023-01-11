//
//  GamedockAnalyticsHandler.h
//  Gamedock
//
//  Copyright © 2016 Azerion. All rights reserved.
//

#import <Foundation/Foundation.h>

static NSString* const ANALYTICSPROVIDER_GOOGLE = @"Google";

@interface GamedockAnalyticsHandler : NSObject

+(GamedockAnalyticsHandler*)sharedInstance;

-(void)initializeAnalyticsProviders;

-(NSString*)getIDFA;

@end
