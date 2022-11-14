//
//  CustomerSupportHandler.h
//  Gamedock
//
//  Copyright © 2016 Azerion. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CustomerSupportHandler : NSObject

+(CustomerSupportHandler*)sharedInstance;

-(void)showHelpCenterWebview:(NSString*)url withTags:(NSArray*)tags;

@end
