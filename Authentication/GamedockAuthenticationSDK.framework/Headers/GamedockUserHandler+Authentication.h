//
//  GamedockUserHandler+Authentication.h
//  GamedockAuthenticationSDK
//
//  Created by Cihan on 13.12.2022.
//

#import <Gamedock/Gamedock.h>

NS_ASSUME_NONNULL_BEGIN

@interface GamedockUserHandler (Authentication)

// --- Login ---

-(void)loginWithExternalUserId:(NSString*)externalUserId externalProviderId:(NSString*)externalProviderId externalToken:(NSString*)externalToken socialValidationData:(NSDictionary*)socialValidationData;

-(void)logout:(BOOL)global;
-(void)userPlayAsGuest;

-(void)showOnAuthorizedDialog:(NSString*)title message:(NSString*)message loginButtonText:(NSString*)loginButtonText guestButtonText:(NSString*)guestButtonText;
//-(void)showOnMergeDialog:(NSString*)title message:(NSString*)message localButtonText:(NSString*)localButtonText remoteButtonText:(NSString*)remoteButtonText mergeButtonText:(NSString*)mergeButtonText;

@end

NS_ASSUME_NONNULL_END
