//
//  MissionContainer.h
//  Spil
//
//  Created by Rik on 26/02/2019.
//  Copyright © 2019 Spil Games. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Container : NSObject

@property (nonatomic) bool active;
@property(nonatomic, strong) NSString* containerGroup;
@property(nonatomic, strong) NSString* containerId;
@property(nonatomic, strong) NSMutableArray* containerPrerequisites;
@property(nonatomic, strong) NSMutableArray* containerUnlocks;
@property(nonatomic, strong) NSMutableArray* rewards;
@property(nonatomic, strong) NSMutableDictionary* properties;

-(id)initWithDictionary:(NSDictionary*)dict;

-(NSMutableDictionary*)toJSONObject;

@end
