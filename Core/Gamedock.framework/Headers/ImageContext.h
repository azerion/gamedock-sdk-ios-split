//
//  ImageContext.h
//  Gamedock
//
//  Copyright © 2017 Azerion. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ImageContext : NSObject

@property (nonatomic, assign) int id;
@property (nonatomic, retain) NSString *imageType;
@property (nonatomic, retain) NSString *imageUrl;

-(id)initWithIdx:(int)idx imageType:(NSString*)imageTypeId url:(NSString*)url;

-(NSMutableDictionary*)toJSONObject;

@end
