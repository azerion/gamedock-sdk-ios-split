//
//  AssetBundlesHandler.h
//  Gamedock
//
//  Copyright © 2018 Azerion. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AssetBundle.h"

static NSString* const FEATURE_NAME_AB = @"assetBundles";

@interface AssetBundlesHandler : NSObject

@property (strong, nonatomic) NSMutableArray *loadedAssetBundles;

+(AssetBundlesHandler*)sharedInstance;

-(void)requestAssetBundles;
-(NSArray*)getAssetBundles;

@end
