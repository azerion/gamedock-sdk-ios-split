//
//  AssetBundle.h
//  Gamedock
//
//  Copyright © 2018 Azerion. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AssetBundle : NSObject

@property (strong, nonatomic) NSString *name;
@property (strong, nonatomic) NSString *type;
@property (assign, nonatomic) long long endDate;
@property (strong, nonatomic) NSString *url;
@property (assign, nonatomic) int version;
@property (strong, nonatomic) NSString *hash;

-(id)initWithDictionary:(NSDictionary*)dict;

-(NSMutableDictionary*)toJSONObject;

@end
