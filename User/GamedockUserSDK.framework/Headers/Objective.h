//
//  Objective.h
//  Gamedock
//
//  Copyright © 2019 Azerion. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Objective : NSObject

@property(nonatomic, strong) NSString* type;
@property(nonatomic, strong) NSMutableDictionary* data;

-(id)initWithDictionary:(NSDictionary*)dict;

-(NSMutableDictionary*)toJSONObject;

@end
