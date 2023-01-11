//
//  GamedockPrivacySDK.h
//  GamedockPrivacySDK
//
//  Created by Cihan on 13.12.2022.
//

#import <Foundation/Foundation.h>

//! Project version number for GamedockPrivacySDK.
FOUNDATION_EXPORT double GamedockPrivacySDKVersionNumber;

//! Project version string for GamedockPrivacySDK.
FOUNDATION_EXPORT const unsigned char GamedockPrivacySDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <GamedockPrivacySDK/PublicHeader.h>


@interface GamedockPrivacySDK : NSObject {
    
}

+(nonnull GamedockPrivacySDK*)sharedInstance;

-(void)initObservers;


@end
