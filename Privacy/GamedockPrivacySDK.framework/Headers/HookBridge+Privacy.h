//
//  HookBridge+Privacy.h
//  GamedockPrivacySDK
//
//  Created by Cihan on 13.12.2022.
//


#import <Gamedock/HookBridge.h>



@interface HookBridge (Privacy)

#ifdef __cplusplus
extern "C" {
    
    // --- GDPR ---

    void checkPrivacyPolicyNative(bool coppaEnabled, const char* externalIds);

    void showPrivacyPolicySettings();

    void checkAgeGateNative(bool shouldBlock, int requiredAge);

    void savePrivValueNative(int priv);

    int getPrivValueNative();
    
    void initializePrivacySDKNative();
    
    // --- ATTracking ---
    
    void requestATTPermissionNative();
    
    void showAppSettingsNative();
    
}
#endif


@end

