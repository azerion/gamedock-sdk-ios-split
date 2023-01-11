//
//  GamedockUserHandler.h
//  Gamedock
//
//  Copyright © 2016 Azerion. All rights reserved.
//

#import <Foundation/Foundation.h>

static NSString* const FEATURE_NAME_UD_U = @"userData";
static NSString* const FEATURE_NAME_SOCIAL = @"socialLogin";

@interface GamedockUserHandler : NSObject 

+(GamedockUserHandler*)sharedInstance;

// --- Properties ---

@property (nonatomic, assign) BOOL authConflicted;
@property (nonatomic, assign) int authErrorCode;
@property (nonatomic, retain) NSMutableDictionary *deviceVersions;
@property (nonatomic, retain) NSMutableDictionary *metadata;

@property (nonatomic, retain) NSString *externalUserProvider;
@property (nonatomic, retain) NSString *externalUserId;
@property (nonatomic, retain) NSString *gamedockUserId;
@property (nonatomic, retain) NSString *gamedockUserToken;
@property (nonatomic, retain) NSMutableDictionary *receivedMergeConflictDeviceVersions;
@property (nonatomic, retain) NSMutableDictionary *externalIds;

@property (nonatomic, retain) NSString *receivedChangedUidFromGamedock;

// --- Gamedock user id ---

-(NSString*)getUidFromGamedock;
-(void)setUidFromGamedock:(NSString*)uid;
-(void)syncGamedockUserId;
-(NSString*)getGamedockUserId;
-(void)confirmUserIdChange;

// --- Device id ---

-(NSString*)getDeviceId;

// --- Gamedock user token ---

-(NSString*)getGamedockUserToken;

// --- Reset ---

-(void)resetUID:(NSString*)uid;
-(void)resetGamedockUserToken:(NSString*)token;
-(void)resetProfile;

// --- Login ---
-(BOOL)isLoggedIn;
-(void)resetData;
// --- Userdata ---

-(void)setPrivateGameState:(NSString*)privateData sendUpdate:(Boolean)sendUpdate;
-(NSString*)getPrivateGameState;
-(void)setPublicGameState:(NSString*)publicData sendUpdate:(Boolean)sendUpdate;
-(NSString*)getPublicGameState;
-(void)getOtherUsersGameState:(NSString*)provider userIds:(NSArray*)userIds;

// --- Userdata syncing ---

//-(void)requestUserData;
//-(void)mergeUserData:(NSString*)mergedUserData mergeType:(NSString*)mergeType;
-(void)increaseDeviceVersion;

// --- Auth errors ---

-(void)onAuthError:(int)pAuthErrorCode;

// --- External user id ---

-(void)setInitialExternalIds:(NSDictionary*)externalIds;
-(void)addId:(NSString*)userId forProviderId:(NSString*)providerId;
-(void)removeId:(NSString*)providerId;

-(void)setExternalUserId:(NSString*)userId forProviderId:(NSString*)providerId;
-(NSString*)getExternalUserId;
-(NSString*)getExternalUserProvider;

-(NSDictionary*)getExternalUserRequestData;
-(NSArray*)getExternalIdsRequestData;

// --- Updates ---

-(void)friendsGameStateLoaded:(NSDictionary*)gameStates provider:(NSString*)provider;

-(void)saveDeviceVersions;
-(void)saveMetadata;

-(void)resetDeviceVersions;

@end

