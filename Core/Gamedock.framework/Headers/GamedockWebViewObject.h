//
//  GamedockWebViewObject.h
//  Gamedock
//
//  Copyright © 2019 Azerion. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GamedockWebViewObject : NSObject

@property (nonatomic, retain) NSDictionary *data;
@property (nonatomic, retain) NSString *name;

-(id)initWithData:(NSDictionary*)data withActionName:(NSString*)name;

@end
