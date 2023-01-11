//
//  GamedockUserSDK.h
//  GamedockUserSDK
//
//  Created by Muhammed Cihan Bülbül on 16.08.2022.
//

#import <Foundation/Foundation.h>

#import <GamedockVirtualGoodsSDK/Bundle.h>
#import <GamedockVirtualGoodsSDK/BundleItem.h>
#import <GamedockVirtualGoodsSDK/BundlePrice.h>
#import <GamedockVirtualGoodsSDK/Currency.h>
#import <GamedockVirtualGoodsSDK/GachaContent.h>
#import <GamedockVirtualGoodsSDK/GameAsset.h>
#import <GamedockVirtualGoodsSDK/GameData.h>
#import <GamedockVirtualGoodsSDK/GameDataController.h>
#import <GamedockVirtualGoodsSDK/ImageEntry.h>
#import <GamedockVirtualGoodsSDK/Inventory.h>
#import <GamedockVirtualGoodsSDK/Item.h>
#import <GamedockVirtualGoodsSDK/Package.h>
#import <GamedockVirtualGoodsSDK/PackageItem.h>
#import <GamedockVirtualGoodsSDK/PerkItem.h>
#import <GamedockVirtualGoodsSDK/PlayerCurrency.h>
#import <GamedockVirtualGoodsSDK/PlayerDataController.h>
#import <GamedockVirtualGoodsSDK/PlayerItem.h>
#import <GamedockVirtualGoodsSDK/Promotion.h>
#import <GamedockVirtualGoodsSDK/PromotionEntity.h>
#import <GamedockVirtualGoodsSDK/ShopEntry.h>
#import <GamedockVirtualGoodsSDK/ShopTab.h>
#import <GamedockVirtualGoodsSDK/GamedockPackageHandler.h>
//#import <GamedockVirtualGoodsSDK/GamedockMissionsHandler.h>
#import <GamedockVirtualGoodsSDK/UniquePlayerItem.h>
#import <GamedockVirtualGoodsSDK/UserProfile.h>
#import <GamedockVirtualGoodsSDK/UserDataCustomCallback.h>
#import <GamedockVirtualGoodsSDK/Wallet.h>
//#import <GamedockVirtualGoodsSDK/Container.h>
//#import <GamedockVirtualGoodsSDK/Mission.h>
//#import <GamedockVirtualGoodsSDK/UpdatedMissionData.h>
#import <GamedockVirtualGoodsSDK/UserDataTransaction.h>
#import "GamedockVirtualGoodsSDKDelegate.h"

//! Project version number for GamedockUserSDK.
FOUNDATION_EXPORT double GamedockUserSDKVersionNumber;

//! Project version string for GamedockUserSDK.
FOUNDATION_EXPORT const unsigned char GamedockUserSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <GamedockVirtualGoodsSDK/PublicHeader.h>


@interface GamedockVirtualGoodsSDK : NSObject {
    
}

@property (nonatomic, assign, nullable) id  delegate;

+(nonnull GamedockVirtualGoodsSDK*)sharedInstance;

@end
