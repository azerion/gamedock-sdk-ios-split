//
//  FileCache.h
//  Gamedock
//
//  Copyright © 2017 Azerion. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FileCache : NSObject

+(FileCache*)sharedInstance;

+(NSString*)getImagePathForUrl:(NSString*)url;

+(void)requestImage:(NSString*)urlString withId:(int)idx withImageType:(NSString*)imageType;

+(void)clearDiskCache;

//yoo2 +(void)preloadItemAndBundleImages;

@end
