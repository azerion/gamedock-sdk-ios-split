//
//  GDUnityMessageNames.h
//  GamedockSDK
//
//  Created by Andrey Ildyakov on 19/01/2021.
//  Copyright © 2021 Spil Games. All rights reserved.
//
#import <Foundation/Foundation.h>

extern const struct GDUnityMessageNamesReadable
{
    __unsafe_unretained NSString *LocalizationAvailable;
    __unsafe_unretained NSString *LocalizationError;
    __unsafe_unretained NSString *LocalizationNotAvailable;
    __unsafe_unretained NSString *AgeGateStatus;
    __unsafe_unretained NSString *SplashScreenNotAvailable;
    __unsafe_unretained NSString *PlayerDataNewUniqueItem;
    __unsafe_unretained NSString *NoMoreAppsAvailable;
    __unsafe_unretained NSString *MoreAppsAvailable;
    __unsafe_unretained NSString *MoreAppsDismiss;

//    __unsafe_unretained NSString *AdsInitialized;
//    __unsafe_unretained NSString *AdNotAvailable;
//    __unsafe_unretained NSString *AdAvailable;
//    __unsafe_unretained NSString *AdStart;
//    __unsafe_unretained NSString *AdFinished;
    __unsafe_unretained NSString *ATTPermissionStatus;
    __unsafe_unretained NSString *AssetBundlesNotAvailable;
    __unsafe_unretained NSString *AssetBundlesAvailable;
    __unsafe_unretained NSString *DailyBonusNotAvailable;
    __unsafe_unretained NSString *DailyBonusAvailable;
    __unsafe_unretained NSString *DailyBonusReward;
    __unsafe_unretained NSString *DailyBonusError;
    __unsafe_unretained NSString *ATTForcedChangePrivValue;
    __unsafe_unretained NSString *ImageLoadFailed;
    __unsafe_unretained NSString *ImagePreloadingCompleted;
    __unsafe_unretained NSString *FirebaseRemoteConfigUpdated;
    __unsafe_unretained NSString *GamedockGameDataError;
    __unsafe_unretained NSString *GamedockGameDataAvailable;
    __unsafe_unretained NSString *PackagesAvailable;
    __unsafe_unretained NSString *MissionConfigurationError;
    __unsafe_unretained NSString *MissionConfigurationAvailable;
    __unsafe_unretained NSString *MissionConfigurationServerError;
    __unsafe_unretained NSString *UserDataError;
    __unsafe_unretained NSString *MissionDataUpdated;
    __unsafe_unretained NSString *PromotionAmountBought;
    __unsafe_unretained NSString *PackagesNotAvailable;
    __unsafe_unretained NSString *PromotionsAvailable;
    __unsafe_unretained NSString *UserDatalockError;
    __unsafe_unretained NSString *OnResponseReceived;
    __unsafe_unretained NSString *PrivacyPolicyStatus;
    __unsafe_unretained NSString *UserDataSyncError;
    __unsafe_unretained NSString *UserIdChangeCompleted;
    __unsafe_unretained NSString *LoginSuccessful;
    __unsafe_unretained NSString *LoginFailed;
    __unsafe_unretained NSString *LogoutSuccessful;
    __unsafe_unretained NSString *LogoutFailed;
    __unsafe_unretained NSString *ConfigError;
    __unsafe_unretained NSString *RequestLogin;
    __unsafe_unretained NSString *UserDataHandleMerge;
    __unsafe_unretained NSString *UserDataAvailable;
    __unsafe_unretained NSString *UserDataMergeConflict;
    __unsafe_unretained NSString *UserDataMergeSuccessful;
    __unsafe_unretained NSString *UserDataMergeFailed;
    __unsafe_unretained NSString *AuthenticationError;
    __unsafe_unretained NSString *SplashScreenOpen;
    __unsafe_unretained NSString *DailyBonusOpen;
    __unsafe_unretained NSString *SplashScreenClosed;
    __unsafe_unretained NSString *DailyBonusClosed;
    __unsafe_unretained NSString *SplashScreenOpenShop;
    __unsafe_unretained NSString *SplashScreenData;
    __unsafe_unretained NSString *SplashScreenError;
    __unsafe_unretained NSString *UserIdChangeRequest;
    __unsafe_unretained NSString *GameVersionStatus;
    __unsafe_unretained NSString *InitializationCompleted;
    __unsafe_unretained NSString *ConfigUpdated;
    __unsafe_unretained NSString *PlayerDataUpdated;
    __unsafe_unretained NSString *PlayerDataEmptyGacha;
    __unsafe_unretained NSString *OtherUsersGameStateLoaded;
    __unsafe_unretained NSString *IAPValid;
    __unsafe_unretained NSString *IAPInvalid;
    __unsafe_unretained NSString *IAPRequestPurchase;
    __unsafe_unretained NSString *RewardTokenClaimed;
    __unsafe_unretained NSString *RewardTokenClaimFailed;
    __unsafe_unretained NSString *ServerTimeRequestSuccess;
    __unsafe_unretained NSString *ServerTimeRequestFailed;
    __unsafe_unretained NSString *RewardTokenReceived;
    __unsafe_unretained NSString *DeepLinkReceived;
    __unsafe_unretained NSString *SplashScreenAvailable;
    __unsafe_unretained NSString *PromotionsNotAvailable;
    __unsafe_unretained NSString *ImageLoadSuccess;
    __unsafe_unretained NSString *AzerionLoginSuccessful;
    __unsafe_unretained NSString *AzerionLoginFailed;
    __unsafe_unretained NSString *OnAdTrigger;
} GDUnityEvent;

