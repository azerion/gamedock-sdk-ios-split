//
//  GamedockUserSDKDelegate.h
//  GamedockUserSDK
//
//  Created by Muhammed Cihan Bülbül on 16.08.2022.
//

//#import "UpdatedMissionData.h"
#import "UniquePlayerItem.h"

@protocol GamedockVirtualGoodsSDKDelegate

/*
// Missions events
-(void)missionConfigurationAvailable:(nonnull NSString*)containers withMissions:(nonnull NSString*)missions;
-(void)missionConfigurationNotAvailable;
-(void)missionConfigurationError:(nonnull NSString*)error;
-(void)missionDataUpdated:(nullable NSString*)reason withUpdatedMissionData:(nonnull UpdatedMissionData*)updatedMissionData withContainers:(nonnull NSString*)containers withMissions:(nonnull NSString*)missions;
*/
// Package & promotion events
-(void)packagesAvailable:(nonnull NSString*)packagesJSON;
-(void)packagesNotAvailable;
-(void)promotionsAvailable:(nonnull NSString*)promotionsJSON;
-(void)promotionsNotAvailable;
-(void)onBoughtPromotion:(int)id amount:(int)amountPurchased maxPurchase:(int)maxPurchase;

// Player data events
-(void)playerDataUpdated:(nonnull NSString*)reason updatedData:(nonnull NSString*)updatedData wallet:(nonnull NSString*)wallet inventory:(nonnull NSString*)inventory;
-(void)playerDataEmptyGacha;
-(void)playerDataNewUniqueItem:(nonnull UniquePlayerItem*)newUniquePlayerItem bundleId:(int)bundleId gachaId:(int)gachaId gachaPosition:(int)gachaPosition tierId:(int)tierId reason:(nonnull NSString*)reason;

@end
