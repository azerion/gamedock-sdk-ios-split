//
//  NotificationUtil.h
//  Gamedock
//
//  Copyright © 2016 Azerion. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GamedockError.h"

@interface NotificationUtil : NSObject

+(void)send:(NSString *)name;
+(void)send:(NSString *)name message:(NSString*)message;
+(void)send:(NSString *)name data:(id)data;
+(void)sendWithName:(NSString *)name data:(id)data;
@end
