//
//  GamedockMoreAppsHandler.h
//  Gamedock
//
//  Created by Nagib Bin Azad on 10/13/21.
//  Copyright © 2021 Azerion. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface GamedockMoreAppsHandler : NSObject

+(GamedockMoreAppsHandler*)sharedInstance;

-(void)requestMoreApps:(NSString*)provider;
-(void)showMoreApps:(NSString*)adProviderId;
-(void)closedParentalGate:(BOOL)pass;

@end

NS_ASSUME_NONNULL_END
