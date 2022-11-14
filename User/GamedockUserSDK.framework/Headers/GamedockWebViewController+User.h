//
//  Gamedock+GamedockWebViewController_User.h
//  GamedockUserSDK
//
//  Created by Muhammed Cihan Bülbül on 17.08.2022.
//

#import <Gamedock/GamedockWebViewController.h>
#import "GachaContent.h"
NS_ASSUME_NONNULL_BEGIN

@interface GamedockWebViewController (User)

-(void)injectOpenGachaData:(GachaContent*)item;

@end

NS_ASSUME_NONNULL_END
