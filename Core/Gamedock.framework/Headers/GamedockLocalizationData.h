//
//  LocalizationData.h
//  Gamedock
//
//  Created by Andrey Ildyakov on 24/11/2020.
//  Copyright © 2020 Spil Games. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface GamedockLocalizationData : NSObject

@property NSDictionary* data;
@property BOOL isDefault;
@property NSString* locale;
@property NSString* url;

-(NSString*)getLocale;
-(NSString*)getUrl;
-(NSDictionary*)getData;
-(NSMutableDictionary*)toJSONObject;
+(GamedockLocalizationData*)fromJSONObject:(NSDictionary*)dict;

@end

NS_ASSUME_NONNULL_END
