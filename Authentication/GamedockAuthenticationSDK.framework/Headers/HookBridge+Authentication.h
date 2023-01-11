//
//  HookBridge+Localization.h
//  GamedockLocalizationSDK
//
//  Created by Muhammed Cihan Bülbül on 6.12.2022.
//

#import <Gamedock/Gamedock.h>
#import <Gamedock/HookBridge.h>



@interface HookBridge (Authentication)

#ifdef __cplusplus
extern "C" {
    
    // --- Login ---

    void loginNative(char* externalUserId, char* externalProviderId, char* externalToken, char* socialValidationData);

    bool isLoggedInNative();

    void logoutNative(bool global);

    void userPlayAsGuestNative();

    void showAuthorizedDialogNative(char* title, char* message, char* loginButtonText, char* guestButtonText);

    void resetDataNative();

    void confirmUserIdChangeNative();

    // --- Azerion Connect ---

    void azerionConnectLoginNative(const char* provider);

    void azerionConnectLogoutNative();

    void azerionConnectUserInfoNative();

    void azerionConnectDashboardNative();
    
    void initializeAuthenticationSDKNative();
    
}

#endif

@end

