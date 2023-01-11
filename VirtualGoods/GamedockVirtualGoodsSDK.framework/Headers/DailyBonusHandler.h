//
//  DailyBonusHandler.h
//  Gamedock
//
//  Copyright © 2018 Azerion. All rights reserved.
//

#import <Foundation/Foundation.h>

static NSString* const FEATURE_NAME_DBONUS = @"dailyBonus";

@interface DailyBonusHandler : NSObject

+(DailyBonusHandler*)sharedInstance;

-(void)requestDailyBonus;

-(void)showDailyBonus;

-(NSString*)getDailyBonusConfig;

-(void)collectDailyBonus;

@end
