//
//  GamedockFirebaseSDK.h
//  GamedockFirebaseSDK
//
//  Created by Muhammed Cihan Bülbül on 5.12.2022.
//

#import <Foundation/Foundation.h>

//! Project version number for GamedockFirebaseSDK.
FOUNDATION_EXPORT double GamedockFirebaseSDKVersionNumber;

//! Project version string for GamedockFirebaseSDK.
FOUNDATION_EXPORT const unsigned char GamedockFirebaseSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <GamedockFirebaseSDK/PublicHeader.h>

@interface GamedockFirebaseSDK : NSObject {
    
}

@property (nonatomic, assign, nullable) id  delegate;

+(nonnull GamedockFirebaseSDK*)sharedInstance;

-(void)initObservers;

@end
