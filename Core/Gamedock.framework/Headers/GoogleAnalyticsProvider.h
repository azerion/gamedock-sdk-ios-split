//
//  GoogleAnalyticsProvider.h
//  Gamedock
//
//  Copyright © 2016 Azerion. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GoogleAnalyticsProvider : NSObject

@property (nonatomic, assign) BOOL initialized;

-(void)initialize;

@end
