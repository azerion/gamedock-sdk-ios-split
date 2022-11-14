//
//  MoreAppsProvider.h
//  Gamedock
//
//  Created by Nagib Bin Azad on 10/13/21.
//  Copyright © 2021 Azerion. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MoreAppsProvider : NSObject

-(void)requestMoreApps;
-(void)showMoreApps;
-(void)didDismissMoreApps;

@end

NS_ASSUME_NONNULL_END
