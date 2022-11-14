//
//  FirebaseHandler.h
//  Gamedock
//
//  Copyright © 2018 Azerion. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <FirebaseRemoteConfig/FirebaseRemoteConfig.h>


@interface FirebaseHandler : NSObject

@property (nonatomic,assign) bool isInitialized;

+(FirebaseHandler*)sharedInstance;

-(void)initFirebase;

-(void)trackEvent:(NSString*)name params:(NSDictionary*)params;

-(void)requestFirebaseRemoteConfig:(long)cacheExpirationTime;
-(void)setFirebaseRemoteConfigDefaults:(NSDictionary*)defaultValues;
-(BOOL)getBooleanFirebaseRemoteConfig:(NSString*)key namespaceValue:(NSString*)namespaceValue;
-(double)getDoubleFirebaseRemoteConfig:(NSString*)key namespaceValue:(NSString*)namespaceValue;
-(long)getLongFirebaseRemoteConfig:(NSString*)key namespaceValue:(NSString*)namespaceValue;
-(NSString*)getStringFirebaseRemoteConfig:(NSString*)key namespaceValue:(NSString*)namespaceValue;
-(void)recordFirebaseCustomeException:(nonnull NSString*)name withReason:(nonnull NSString*)reason withStackTrace:(nonnull NSString*)stackTrace;

@property(nonatomic, strong) NSString *firebaseInstanceId;
-(void)getFirebaseInstanceIdAsync;
-(NSString*)getFirebaseInstanceId;

-(BOOL)handleUniversalDeeplink:(NSString*)inUrl;
-(BOOL)handleUrlSchemeDeeplink:(NSURL*)url;
-(void)setFirebaseMessagingToken:(NSData *)deviceToken;

@end
