//
//  GamedockWebViewHandler.h
//  Gamedock
//
//  Copyright © 2019 Azerion. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>
#import "GamedockError.h"
#import "GamedockWebViewObject.h"
@class GamedockWebViewController;

@interface GamedockWebViewHandler : NSObject

@property (retain, nonatomic) GamedockWebViewController *webviewVC;

+(GamedockWebViewHandler*)sharedInstance;

-(void)showWebview:(NSDictionary*)data withActionName:(NSString*)name;
-(void)closeCurrentWebview;

-(void)injectBundlePromotionData:(int)bundleId;
-(void)injectPackagePromotionData:(NSString*)packageName;
-(void)injectIAPData:(NSMutableArray*)iapsData;
-(void)injectBuyBundleData:(BOOL)success bundleId:(int)bundleId;
-(void)injectUserDataError:(NSString*)errorJson;
-(void)injectUpdatedPlayerData;

@end
