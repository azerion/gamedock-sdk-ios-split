//
//  HookBridge.h
//  Gamedock
//
//  Copyright (c) 2015 Azerion. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HookBridge : NSObject

// --- Native ObjC ---

+ (void)sendMessageToUnity:(NSString*)messageName withParameter:(NSString*)parameterString;
+ (NSString*)getLocalSecret;
+ (NSString*)getPhSecret;
+ (NSString*)getSphSecret;

+(NSString*)NSStringForCString:(const char*)string;

// --- C Hookbridge ---

#ifdef __cplusplus
extern "C" {
    char* gdStringCopy(const char* string);
    
    // --- External ---
    
    // NOTE: Not defined in GamedockiOSUnityImplementation.cs & HookBridge.mm, implemented by unity
    void UnitySendMessage(const char* obj, const char* method, const char* msg);
    
    // NOTE: Not defined in GamedockiOSUnityImplementation.cs & HookBridge.mm, implemented in libGamedockSDKiOSAuth.a
    char* getLocalSecretEx();
    
    char* getPhSecretEx();
    
    char* getSphSecretEx();
    
    
    
    // --- Util ---
    
    void setCustomBundleIdNative(const char* bundleId);
    
    char* getGamedockUserIdNative();
    
    void setPluginInformationNative(const char* pluginName, const char* pluginVersion);
    
    void recordFPSValueNative(double fpsValue);
    
    void addExternalIdNative(const char* externalPartner, const char* externalPartnerId);
    
    void removeExternalPartnerNative(const char* externalPartner);
    
    void requestServerTimeNative();
    
    void showDialogNative(char* title, char* message, char* okButtonText);
    
    // --- Event tracking ---
    
    void initEventTrackerWithOptions(const char* options, const char* externalIds);
    
    void trackEventNative(const char* eventName);
    
    void trackEventWithParamsNative(const char* eventName, const char* jsonStringParams);
    
    // --- Default events (Not used by the unity plugin, it uses the generic track event methods) ---
    
    void trackMilestoneAchievedEvent(const char* name);
    
    void trackLevelStartEvent(const char* level, bool customCreated, const char* creatorId);
    
    void trackLevelCompleteEvent(const char* level, int score, int stars, int turns, bool customCreated, const char* creatorId);
    
    void trackLevelFailed(const char* level, int score, int stars, int turns, bool customCreated, const char* creatorId);

    void trackLevelUpEvent(const char* level, const char* objectId, const char* skillId);

    void trackEquipEvent(const char* equippedItem, const char* equippedTo);
    
    void trackUpgradeEvent(const char* upgradeId, const char* level, const char* reason, int iteration);
    
    void trackLevelCreateEvent(const char* levelId, const char* creatorId);
    
    void trackLevelDownloadEvent(const char* levelId, const char* creatorId, int rating);
    
    void trackLevelRateEvent(const char* levelId, const char* creatorId, int rating);

    void trackEndlessModeStartEvent();
    
    void trackEndlessModeEndEvent(int distance);

    void trackPlayerDiesEvent(const char* level);
    
    void trackWalletInventoryEvent(const char* currencyList, const char* itemsList, const char* reason, const char* location);
    
    void trackIAPPurchasedEvent(const char* skuId, const char* transactionId, const char* purchaseDate, const char* reasonDetailsData);

    void trackIAPRestoredEvent(const char* skuId, const char* originalTransactionId, const char* originalPurchaseDate);

    void trackIAPFailedEvent(const char* skuId, const char* error);

    void trackTutorialCompleteEvent();
    
    void trackTutorialSkippedEvent();
    
    void trackRegisterEvent(const char* platform);

    void trackShareEvent(const char* platform);

    void trackInviteEvent(const char* platform);
    
    // --- Push messages ---
    
    //void disableAutomaticRegisterForPushNotificationsNative();
    
    //void registerForPushNotifications();
    
    // --- ATTracking ---
        
    void requestATTPermissionNative();
    
    void showAppSettingsNative();
    
    // --- Environemnt Changing ---
    
    void setProductionEnvironmentNative();
    
    void setStagingEnvironmentNative();
    

    
    // --- Token claiming ---
    
    void claimTokenNative(const char* token, const char* rewardType);
    
    // --- Config ---
    
    
    // --- Subscription Validation ---
    
    void validateSubscriptionNative(const char* skuId, const char* transactionId, const char* token);
    
    // --- Packages & Promotions ---
    
    
    // --- ADS ---
    

    
//    void requestRewardVideoNative(const char* location, const char* rewardType);
//
//    void playRewardVideoNative(const char* location, const char* rewardType);
//
//    void showToastOnVideoReward(const bool enabled);
    

    
//    void requestBannerAdNative(const char* position, const char* format);
//
//    void requestInterstitialNative();
//
//    void showInterstitialAdNative(const char* adProvider);
    
//    void showBannerAdNative();
//
//    void hideBannerAdNative();
    
//    bool isAdAvailableNative(char* adTypeName);
    
//    void setAdTestDeviceNative(char* deviceId);
    
//    void devRequestAdNative(const char* providerName, const char* adTypeName, const bool parentalGate);
    
   
    
    // --- Customer support ---
    
    void showHelpCenterWebviewNative(char* url, char* tags);
    

    
    
    
    // --- User data ---
    
    char* getExternalUserIdNative();
    
    char* getExternalUserProviderNative();
    
    void setExternalUserIdNative(const char* providerId, const char* userId);

    void setPrivateGameStateNative(const char* privateData);

    char* getPrivateGameStateNative();

    void setPublicGameStateNative(const char* publicData);
    
    char* getPublicGameStateNative();

    void getOtherUsersGameStateNative(const char* provider, const char* userIdsJsonArray);
    
    // --- Image cache ---
    
    char* getImagePathNative(char* url);
        
    void requestImageNative(char* url, int idx, char* imageType);
    
    void clearDiskCacheNative();
    

    
    
    // --- Data syncing ---
    
    char* getDeviceIdNative();
    
    
    // --- Asset bundles ---
    
    //void requestAssetBundlesNative();
    
    //char* getAssetBundlesNative();
    
   
    
    // --- Store ---
    
    void showAppRatePopupNative();
    
    // --- Features ---
    
    long getFeaturesVersionIdNative(char* featureName);
    
    
    
    char* getConsentStatus();
}

#endif

@end
