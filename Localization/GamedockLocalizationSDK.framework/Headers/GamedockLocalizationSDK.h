//
//  GamedockLocalizationSDK.h
//  GamedockLocalizationSDK
//
//  Created by Muhammed Cihan Bülbül on 6.12.2022.
//

#import <Foundation/Foundation.h>
#import <GamedockLocalizationSDK/GamedockLocalizationHandler.h>

//! Project version number for GamedockLocalizationSDK.
FOUNDATION_EXPORT double GamedockLocalizationSDKVersionNumber;

//! Project version string for GamedockLocalizationSDK.
FOUNDATION_EXPORT const unsigned char GamedockLocalizationSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <GamedockLocalizationSDK/PublicHeader.h>

@interface GamedockLocalizationSDK : NSObject {
    
}

+(nonnull GamedockLocalizationSDK*)sharedInstance;

@end

@protocol GamedockDelegate

@optional

//Localization
///Callback if localization is available (contains also the locale in case the default locale is returned)
-(void)onLocalizationAvailable:(NSString*)locale isDefaultLocale:(BOOL)isDefaultLocale;
-(void)onLocalizationNotAvailable;
-(void)onLocalizationError:(NSString*)error;

@end

