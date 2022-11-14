//
//  MissionRewards.h
//  Gamedock
//
//  Copyright © 2019 Azerion. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MissionRewards : NSObject

@property(assign, nonatomic) int id;
@property(nonatomic, strong) NSString* type;
@property(assign, nonatomic) int amount;

-(id)initWithDictionary:(NSDictionary*)dict;

-(NSMutableDictionary*)toJSONObject;

@end
