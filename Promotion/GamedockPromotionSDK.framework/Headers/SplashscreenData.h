//
//  SplashscreenData.h
//  Gamedock
//
//  Copyright © 2019 Azerion. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SplashscreenData : NSObject

@property (nonatomic, retain) NSString *url;
@property (nonatomic, retain) NSString *type;
@property (nonatomic, assign) int priority;
@property (nonatomic, assign) BOOL isDelayable;
@property (nonatomic, assign) int campaignId;

@property (nonatomic, retain) NSDictionary *rawData;
@property (nonatomic, retain) NSString *actionName;

-(id)initWithData:(NSDictionary*)data withActionName:(NSString*)actionName;

@end
