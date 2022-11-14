//
//  PerformanceHandler.h
//  Gamedock
//
//  Copyright © 2019 Azerion. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PerformanceHandler : NSObject

+(PerformanceHandler*)sharedInstance;

-(void)startUpdating;

-(NSArray*)getHeartbeatPerformanceData;

-(void)clearCache;
-(void)clearNetworkCache;

-(void)recordFPSValue:(double)fpsValue;

@end
