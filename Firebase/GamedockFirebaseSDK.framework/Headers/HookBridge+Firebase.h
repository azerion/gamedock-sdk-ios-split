//
//  HookBridge.h
//  Gamedock
//
//  Copyright (c) 2015 Azerion. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Gamedock/HookBridge.h>

@interface HookBridge (Firebase)


// --- C Hookbridge ---

#ifdef __cplusplus
extern "C" {
    
    char* getFirebaseInstanceIdNative();
    
    // --- Firebase ---
    
    void requestFirebaseRemoteConfigNative(long cacheExpirationTime);
    
    void setFirebaseRemoteConfigDefaultsNative(char* defaultValues);
    
    bool getBooleanFirebaseRemoteConfigNative(char* key, char* namespaceValue);
    
    double getDoubleFirebaseRemoteConfigNative(char* key, char* namespaceValue);
    
    long getLongFirebaseRemoteConfigNative(char* key, char* namespaceValue);
    
    char* getStringFirebaseRemoteConfigNative(char* key, char* namespaceValue);
    
    char* getFirebaseInstanceIdNative();
    
    void gdFirebaseRecordCustomExceptionNative(char* name, char* reason, char* stackTrace);
    
    void initializeFirebaseSDKNative();
    
}

#endif

@end
