//
//  GamedockAppStoreHandler.h
//  Gamedock
//
//  Copyright © 2016 Azerion. All rights reserved.
//

#import <Foundation/Foundation.h>
@import StoreKit;

@interface GamedockAppStoreHandler : NSObject<SKProductsRequestDelegate> {
    
}
@property (strong, nonatomic) NSMutableDictionary *validatedSubscriptions;

+(GamedockAppStoreHandler*)sharedInstance;

-(void)requestAppStoreItemForEvent:(NSString*)name withParams:(NSDictionary*)params;

-(void)requestAppStoreItemsForSplashscreen:(NSArray*)itemIds;

@end
