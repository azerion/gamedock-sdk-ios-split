//
//  ClassUtil.h
//  Gamedock
//
//  Copyright © 2016 Azerion. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ClassUtil : NSObject

+ (void)copyParent:(id)parent intoChild:(id) child;

NSString *lookupStringConstant(NSString *constantName);

@end
