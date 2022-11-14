//
//  AppStoreRequestData.h
//  Gamedock
//
//  Copyright © 2016 Azerion. All rights reserved.
//

#import <Foundation/Foundation.h>
@import StoreKit;

@interface AppStoreRequestData : NSObject

@property (strong, nonatomic) SKProductsRequest *productRequest;
@property (strong, nonatomic) NSString *eventName;
@property (strong, nonatomic) NSMutableDictionary *eventParams;
@property (strong, nonatomic) NSString *productIdentifier;
@property (strong, nonatomic) NSArray *productIdentifiers;
@property (strong, nonatomic) NSMutableArray *results;

// Used by track events
-(id)initWithRequest:(SKProductsRequest*)request withName:(NSString*)eventName withParams:(NSMutableDictionary*)eventParams withProductIdentifier:(NSString*)productIdentifier;

// Used by generic queries
-(id)initWithRequest:(SKProductsRequest*)request withProductIdentifiers:(NSArray*)productIdentifiers withTag:(NSString*)tag;

@end
