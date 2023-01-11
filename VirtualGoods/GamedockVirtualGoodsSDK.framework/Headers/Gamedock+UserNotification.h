//
//  Gamedock+UserNotification.h
//  GamedockUserSDK
//
//  Created by Muhammed Cihan Bülbül on 19.08.2022.
//

#import <Gamedock/Gamedock.h>

NS_ASSUME_NONNULL_BEGIN

@interface Gamedock (UserNotification)

-(void)gamedockNotificationHandler:(NSNotification *)notification;

@end

NS_ASSUME_NONNULL_END
