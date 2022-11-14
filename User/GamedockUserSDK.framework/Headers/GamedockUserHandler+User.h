//
//  GamedockUserHandler+User.h
//  GamedockUserSDK
//
//  Created by Muhammed Cihan Bülbül on 18.08.2022.
//

#import <Gamedock/Gamedock.h>

NS_ASSUME_NONNULL_BEGIN

@interface GamedockUserHandler (User)

-(void)showUserDataMergeFailedDialog:(NSString*)title withMessage:(NSString*)message retryButtonText:(NSString*)retryButton mergeData:(NSString*)mergeData mergeType:(NSString*)mergeType;

-(void)showOnSyncDialog:(NSString*)title message:(NSString*)message mergeButtonText:(NSString*)mergeButtonText;

-(void)requestUserData;

-(void)mergeUserData:(NSString*)mergedUserData mergeType:(NSString*)mergeType;

@end

NS_ASSUME_NONNULL_END
