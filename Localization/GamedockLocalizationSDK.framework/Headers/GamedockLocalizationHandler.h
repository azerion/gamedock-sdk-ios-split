//
//  LocalizationHandler.h
//  Gamedock
//
//  Created by Andrey Ildyakov on 23/11/2020.
//  Copyright © 2020 Spil Games. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GamedockLocalizationData.h"

static NSString* const FEATURE_NAME_LOCALIZATION = @"localization";

NS_ASSUME_NONNULL_BEGIN

@interface GamedockLocalizationHandler : NSObject

@property BOOL fallbackToDefaultLocale;
@property NSString *requestedLocale;
@property GamedockLocalizationData *localizationData;
@property GamedockLocalizationData *defaultLocalizationData;

+(GamedockLocalizationHandler*)sharedInstance;
-(void)requestLocalization:(NSString*) locale fallbackToDefaultLocale:(BOOL) fallbackToDefaultLocale;
-(NSString*)getLocalization:(NSString*)localizationKey defaultValue:(NSString*)defaultValue;
-(NSString*)getLocalization:(NSString*)localizationKey defaultValue:(NSString*)defaultValue args:(NSArray<NSString*>*)args;
-(NSString*)getLocalization:(NSString*)localizationKey defaultValue:(NSString*)defaultValue argumentsDictionary:(NSDictionary*)argumentsDictionary;
-(nullable NSString*)loadLocalizationDataFromAssets;
@end

NS_ASSUME_NONNULL_END
