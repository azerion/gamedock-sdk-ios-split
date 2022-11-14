//
//  GamedockAppTrackingTransparencyHelper.h
//  Gamedock
//
//  Created by Andrey Ildyakov on 07/09/2020.
//  Copyright © 2020 Spil Games. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <AppTrackingTransparency/AppTrackingTransparency.h>
#import <AdSupport/AdSupport.h>

@interface GamedockATTHelper : NSObject

+(ATTrackingManagerAuthorizationStatus)currentAuthorizationStatus API_AVAILABLE(ios(14));

+(void)requestATTPermission:(void(^)(ATTrackingManagerAuthorizationStatus status))completion  API_AVAILABLE(ios(14));
+(void)checkATTPermissionStatus;
+(void)showSettings;

@end
