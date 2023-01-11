//
//  GamedockAuthenticationSDK.h
//  GamedockAuthenticationSDK
//
//  Created by Cihan on 13.12.2022.
//

#import <Foundation/Foundation.h>

//! Project version number for GamedockAuthenticationSDK.
FOUNDATION_EXPORT double GamedockAuthenticationSDKVersionNumber;

//! Project version string for GamedockAuthenticationSDK.
FOUNDATION_EXPORT const unsigned char GamedockAuthenticationSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <GamedockAuthenticationSDK/PublicHeader.h>

@interface GamedockAuthenticationSDK : NSObject {
    
}

+(nonnull GamedockAuthenticationSDK*)sharedInstance;

-(void)initObservers;

@end
