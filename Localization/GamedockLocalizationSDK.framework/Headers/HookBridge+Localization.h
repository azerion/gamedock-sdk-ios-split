//
//  HookBridge+Localization.h
//  GamedockLocalizationSDK
//
//  Created by Muhammed Cihan Bülbül on 6.12.2022.
//

#import <Gamedock/Gamedock.h>
#import <Gamedock/HookBridge.h>

NS_ASSUME_NONNULL_BEGIN

@interface HookBridge (Localization)


#ifdef __cplusplus
extern "C" {
    
    // --- Localization ---

    void requestLocalizationNative(char* locale, bool fallbackToDefaultLocale);

    char* getLocalizationNative(char* key, char* defaultValue);

    char* getLocalizationArgsNative(char* key, char* defaultValue, const char* args);

    char* getLocalizationDictNative(char* key, char* defaultValue, const char* args);

    void initializeLocalizationSDKNative();
}

#endif

@end

NS_ASSUME_NONNULL_END
