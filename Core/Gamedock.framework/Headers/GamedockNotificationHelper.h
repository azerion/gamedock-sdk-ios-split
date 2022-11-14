//
//  GamedockNotificationHelper.h
//  Gamedock
//
//  Copyright (c) 2015 Azerion. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <UserNotifications/UserNotifications.h>

@interface GamedockNotificationHelper : NSObject <UNUserNotificationCenterDelegate>

@property (nonatomic, retain) NSDictionary *pushNotificationToHandleAfterInit;
@property (nonatomic, assign) BOOL pushNotificationToHandleAfterInitLaunchedApp;

+(GamedockNotificationHelper*)sharedInstance;

+(void)registerPushNotifications;
+(void)didRegisterForRemoteNotificationsWithDeviceToken:(NSData*)deviceToken;
+(void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo didLaunchApp:(BOOL)didLaunchApp;
+(void)application:(nullable UIApplication *)application didReceiveRemoteNotification:(nullable NSDictionary *)userInfo didLaunchApp:(BOOL)didLaunchApp fetchCompletionHandler:(void(^)(UIBackgroundFetchResult))completionHandler;
@end
