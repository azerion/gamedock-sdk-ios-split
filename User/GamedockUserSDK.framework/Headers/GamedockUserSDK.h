//
//  GamedockUserSDK.h
//  GamedockUserSDK
//
//  Created by Muhammed Cihan Bülbül on 16.08.2022.
//

#import <Foundation/Foundation.h>

#import <GamedockUserSDK/Bundle.h>
#import <GamedockUserSDK/BundleItem.h>
#import <GamedockUserSDK/BundlePrice.h>
#import <GamedockUserSDK/Currency.h>
#import <GamedockUserSDK/GachaContent.h>
#import <GamedockUserSDK/GameAsset.h>
#import <GamedockUserSDK/GameData.h>
#import <GamedockUserSDK/GameDataController.h>
#import <GamedockUserSDK/ImageEntry.h>
#import <GamedockUserSDK/Inventory.h>
#import <GamedockUserSDK/Item.h>
#import <GamedockUserSDK/Package.h>
#import <GamedockUserSDK/PackageItem.h>
#import <GamedockUserSDK/PerkItem.h>
#import <GamedockUserSDK/PlayerCurrency.h>
#import <GamedockUserSDK/PlayerDataController.h>
#import <GamedockUserSDK/PlayerItem.h>
#import <GamedockUserSDK/Promotion.h>
#import <GamedockUserSDK/PromotionEntity.h>
#import <GamedockUserSDK/ShopEntry.h>
#import <GamedockUserSDK/ShopTab.h>
#import <GamedockUserSDK/GamedockPackageHandler.h>
#import <GamedockUserSDK/GamedockMissionsHandler.h>
#import <GamedockUserSDK/UniquePlayerItem.h>
#import <GamedockUserSDK/UserProfile.h>
#import <GamedockUserSDK/UserDataCustomCallback.h>
#import <GamedockUserSDK/Wallet.h>
#import <GamedockUserSDK/Container.h>
#import <GamedockUserSDK/Mission.h>
#import <GamedockUserSDK/UpdatedMissionData.h>
#import <GamedockUserSDK/UserDataTransaction.h>
#import "GamedockUserSDKDelegate.h"

//! Project version number for GamedockUserSDK.
FOUNDATION_EXPORT double GamedockUserSDKVersionNumber;

//! Project version string for GamedockUserSDK.
FOUNDATION_EXPORT const unsigned char GamedockUserSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <GamedockUserSDK/PublicHeader.h>


@interface GamedockUserSDK : NSObject {
    
}

@property (nonatomic, assign, nullable) id  delegate;

+(nonnull GamedockUserSDK*)sharedInstance;

@end
