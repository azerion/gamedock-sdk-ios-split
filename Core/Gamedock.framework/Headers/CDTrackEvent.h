//
//  CDTrackEvent.h
//  Gamedock
//
//  Copyright © 2015 Azerion. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@interface CDTrackEvent : NSObject

@property (retain, nonatomic) NSString *customData;
@property (assign, nonatomic) int eventId;
@property (retain, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSString *sessionDuration;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *timestamp;
@property (assign, nonatomic) double tto;
@property (assign, nonatomic) BOOL debugMode;
@property (assign, nonatomic) BOOL uc;
@property (retain, nonatomic) NSString *apiVersion;
@property (retain, nonatomic) NSString *uid;
@property (retain, nonatomic) NSString *gamedockUserToken;
@property (retain, nonatomic) NSString *locale;
@property (retain, nonatomic) NSString *osVersion;
@property (retain, nonatomic) NSString *bundleId;
@property (retain, nonatomic) NSString *appVersion;
@property (retain, nonatomic) NSString *deviceModel;
@property (retain, nonatomic) NSString *timezoneOffset;
@property (retain, nonatomic) NSString *pushKey;
@property (retain, nonatomic) NSString *os;
@property (retain, nonatomic) NSString *idfv;
@property (retain, nonatomic) NSString *idfa;
@property (retain, nonatomic) NSString *pluginName;
@property (retain, nonatomic) NSString *pluginVersion;
@property (retain, nonatomic) NSString *priv;
@property (retain, nonatomic) NSString *externalUserData;
@property (retain, nonatomic) NSString *externalIds;
@property (retain, nonatomic) NSString *buildType;
@property (assign, nonatomic) double cdVersion;

@property (assign, nonatomic) BOOL fromQueue;

// From CoreData
-(id)initWithManagedObject:(NSManagedObject*)managedObject;

// From event tracker
-(id)initWithName:(NSString*)pEventName
        timestamp:(NSString*)pTimestamp
          eventId:(int)pEventId
        sessionId:(NSString*)pSessionId
              tto:(double)pTto
  sessionDuration:(NSString*)pSessionDuration
       customData:(NSDictionary*)pCustomData
        debugMode:(BOOL)pDebugMode
               uc:(BOOL)pUc
       apiVersion:(NSString*)pApiVersion
              uid:(NSString*)pUid
gamedockUserToken:(NSString*)pGamedockUserToken
           locale:(NSString*)pLocale
        osVersion:(NSString*)pOsVersion
         bundleId:(NSString*)pBundleId
       appVersion:(NSString*)pAppVersion
      deviceModel:(NSString*)pDeviceModel
   timezoneOffset:(NSString*)pTimezoneOffset
          pushKey:(NSString*)pPushKey
               os:(NSString*)pOs
             idfv:(NSString*)pIdfv
             idfa:(NSString*)pIdfa
       pluginName:(NSString*)pPluginName
    pluginVersion:(NSString*)pPluginVersion
             priv:(NSString*)pPriv
 externalUserData:(NSString*)pExternalUserData
      externalIds:(NSString*)pExternalIds
        buildType:(NSString*)pBuildType;

// To CoreData
-(void)addToCoreData:(NSManagedObjectContext*)managedContext;

@end
