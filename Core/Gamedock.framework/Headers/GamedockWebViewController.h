//
//  GamedockWebViewController.h
//  trackerSample
//
//  Copyright (c) 2015 Azerion. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>
// yoo #import "GachaContent.h"
#import "GamedockWebViewHandler.h"

@interface GamedockWebViewController : UIViewController<WKNavigationDelegate, WKScriptMessageHandler, UIScrollViewDelegate>

@property (retain, nonatomic) WKWebView *webview;

-(void)setupWebview:(NSDictionary*)_options withActionName:(NSString*)_actionName withHandler:(GamedockWebViewHandler*)_handler;
-(void)prepareForDestroy;

-(void)injectBundlePromotionData:(int)bundleId;
-(void)injectPackagePromotionData:(NSString*)packageName;
-(void)injectIAPData:(NSMutableArray*)iapsData;
-(void)injectBuyBundleData:(BOOL)success bundleId:(int)bundleId;
// yoo-(void)injectOpenGachaData:(GachaContent*)item;
-(void)injectUserDataError:(NSString*)errorJson;
-(void)injectUpdatedPlayerData;

- (NSMutableString *)closeInjects:(NSMutableString *)js;
- (NSMutableString *)coreInjects;

- (void)userContentCore:(NSDictionary *)data;

@end
