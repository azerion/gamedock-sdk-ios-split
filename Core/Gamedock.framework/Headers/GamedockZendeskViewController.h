//
//  GamedockZendeskViewController.h
//  Gamedock
//
//  Copyright © 2016 Azerion. All rights reserved.
//

#import <UIKit/UIKit.h>

@import WebKit;

@interface GamedockZendeskViewController : UIViewController<WKNavigationDelegate>

@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (retain, nonatomic) NSString *url;

@end
