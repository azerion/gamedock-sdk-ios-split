//
//  HookBridge+Promotion.h
//  GamedockPromotionSDK
//
//  Created by Muhammed Cihan Bülbül on 7.12.2022.
//

#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>
#include <mach-o/loader.h>
#include <dlfcn.h>
#import <stdlib.h>
#import <stdio.h>
#import <mach-o/dyld.h>
#import <mach-o/ldsyms.h>

#import <Gamedock/HookBridge.h>

NS_ASSUME_NONNULL_BEGIN

@interface HookBridge (Promotion)

#ifdef __cplusplus
extern "C" {
    
    void requestMoreAppsNative();

    void showMoreAppsNative();

    void closedParentalGateNative(const bool pass);

    // --- Splashscreens ---

    void requestSplashScreenNative(const char* type);

    void showSplashScreenNative();
    
    
    void initializePromotionSDKNative();
}
#endif



@end

NS_ASSUME_NONNULL_END
