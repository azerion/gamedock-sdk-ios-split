//
//  SplashscreenHandler.h
//  Gamedock
//
//  Copyright © 2019 Azerion. All rights reserved.
//

#import <Foundation/Foundation.h>

static NSString* const FEATURE_NAME_SS = @"splashScreens";

@interface SplashscreenHandler : NSObject

+ (SplashscreenHandler*)sharedInstance;

-(void)requestSplashscreen:(NSString*)type;
-(void)showSplashscreen;

-(void)onSplashscreenDataReceived:(NSDictionary*)data withActionName:(NSString*)actionName;

@end
