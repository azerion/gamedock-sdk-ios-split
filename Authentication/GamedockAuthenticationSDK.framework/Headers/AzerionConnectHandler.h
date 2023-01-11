//
//  AzerionConnectHandler.h
//  Gamedock
//
//  Created by Muhammed Cihan Bülbül on 4.11.2021.
//  Copyright © 2021 Azerion. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AppAuth/AppAuth.h>

NS_ASSUME_NONNULL_BEGIN

@protocol OIDExternalUserAgentSession;

@interface AzerionConnectHandler : NSObject

+(AzerionConnectHandler*)sharedInstance;

@property(nonatomic, strong, nullable) id<OIDExternalUserAgentSession> currentAuthorizationFlow;

-(BOOL)handleUrlSchemeDeeplink:(NSURL *)url;

-(void)loginAuth:(NSString *)provider;
-(void)getUserInfo;
-(void)clearAuth;
-(void)openDashboard;

@property(nonatomic, readonly, nullable) OIDAuthState *authState;

@end

NS_ASSUME_NONNULL_END
