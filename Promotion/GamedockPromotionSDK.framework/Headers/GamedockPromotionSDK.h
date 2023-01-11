//
//  GamedockPromotionSDK.h
//  GamedockPromotionSDK
//
//  Created by Muhammed Cihan Bülbül on 7.12.2022.
//

#import <Foundation/Foundation.h>

//! Project version number for GamedockPromotionSDK.
FOUNDATION_EXPORT double GamedockPromotionSDKVersionNumber;

//! Project version string for GamedockPromotionSDK.
FOUNDATION_EXPORT const unsigned char GamedockPromotionSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <GamedockPromotionSDK/PublicHeader.h>


@interface GamedockPromotionSDK : NSObject {
    
}

@property (nonatomic, assign, nullable) id  delegate;

+(nonnull GamedockPromotionSDK*)sharedInstance;

-(void)initObservers;

@end
