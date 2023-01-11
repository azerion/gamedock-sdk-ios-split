//
//  HookBridge.h
//  Gamedock
//
//  Copyright (c) 2015 Azerion. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Gamedock/HookBridge.h>

@interface HookBridge (User)


// --- C Hookbridge ---

#ifdef __cplusplus
extern "C" {
    
    // --- Game & Player data ---
    
    void updatePlayerDataNative();

    char* getWalletNative();
    
    char* getGamedockGameDataNative();
    
    char* getInventoryNative();
    
    void processUserDataTransactionsNative(char* transactionsValue, char* reasonName, char* locationName, char* reasonDetails, char* transactionId, char* customCallbackId);
    
    void addCurrencyToWalletNative(int currencyId, int amount, char* reasonName, char* location, char* reasonDetails, char* transactionId, char* customCallbackId);
    
    void subtractCurrencyFromWalletNative(int currencyId, int amount, char* reasonName, char* location, char* reasonDetails, char* transactionId, char* customCallbackId);
    
    void addItemToInventoryNative(int itemId, int amount, char* reasonName, char* location, char* reasonDetails, char* transactionId, char* customCallbackId);
    
    void subtractItemFromInventoryNative(int itemId, int amount, char* reasonName, char* location, char* reasonDetails, char* transactionId, char* customCallbackId);
    
    void buyBundleNative(int itemId, char* reasonName, char* location, char* reasonDetails, char* transactionId, char* perkItemJson, char* customCallbackId);
    
    void openGachaNative(int itemId, char* reasonName, char* reasonDetails, char* location, char* perkItemJson, char* customCallbackId);
    
    void resetPlayerDataNative();
    
    //void resetMissionDataNative();
    
    void resetInventoryNative();
    
    void resetWalletNative();
    
    void setCurrencyLimitNative(int currencyId, int limit);
    
    void setItemLimitNative(int itemId, int limit);
    
    //char* getUserAllContainerProgressNative();
    
    //char* getUserAllMissionProgressNative();
    
    //void updateContainerProgressNative(char* containerProgressList, char* reason, char* reasonDetails, char* location, char* transactionId);
    
    //void updateContainerAndMissionProgressNative(char* containerProgressList, char* missionProgressList, char* reason, char* reasonDetails, char* location, char* transactionId);
    
    //void updateMissionProgressNative(char* missionProgressList, char* reason, char* reasonDetails, char* location, char* transactionId);
    
   //void claimContainersRewardNative(char* containerProgressList, char* reason, char* reasonDetails, char* location, char* transactionId);
    
    //void claimMissionsRewardNative(char* missionProgressList, char* reason, char* reasonDetails, char* location, char* transactionId);
    
    char* createUniqueItemNative(int itemId, char* uniqueId);
    
    void addUniqueItemToInventoryNative(char* uniquePlayerItemJSON, char* reason, char* reasonDetails, char* location, char* transactionId, char* customCallbackId);
    
    void updateUniqueItemFromInventoryNative(char* uniquePlayerItemJSON, char* reason, char* reasonDetails, char* location, char* transactionId, char* customCallbackId);
    
    void removeUniqueItemFromInventoryNative(char* uniquePlayerItemJSON, char* reason, char* reasonDetails, char* location, char* transactionId, char* customCallbackId);
    
    void preloadItemAndBundleImagesNative();
    
    // --- Packages & Promotions ---
    
     char* getAllPackagesNative();
    
     char* getAllPromotionsNative();
    
     char* getPackageNative(const char* packageId); // NOTE: Changed param name
    
     char* getPackageByIDNative(int packageId); // NOTE: New method
    
     char* getBundlePromotionNative(int bundleId); // NOTE: Method name change
    
     char* getPackagePromotionNative(const char* packageId); // NOTE: New method
    
     void requestPromotionsNative();
    
     //char* getContainersConfigurationNative();
    
     //char* getMissionsConfigurationNative(const char* containerId);
    
     void showPromotionScreenNative(int promotionId);
    
    // --- Daily bonus ---
    
     void requestDailyBonusNative();
    
     void showDailyBonusNative();
    
     char* getDailyBonusConfigNative();
    
     void collectDailyBonusNative();
    
    // --- Data syncing ---
    
    
     void requestUserDataNative();
    
     void mergeUserDataNative(char* mergedUserData, char* mergeType);
    
     void showMergeConflictDialogNative(char* title, char* message, char* localButtonText, char* remoteButtonText, char* mergeButtonText);
    
     void showSyncErrorDialogNative(char* title, char* message, char* mergeButtonText);
    
     void showMergeFailedDialogNative(char* title, char* message, char* retryButtonText, char* mergeData, char* mergeType);
    
    // --- Config ---
    
    void requestGameConfigNative();
    
    char* getConfigNative(bool withSdkConfig);
    
    char* getConfigValueNative(const char* keyName);
    
    
    void initializeUserComponentsNative();
    
}

#endif

@end
