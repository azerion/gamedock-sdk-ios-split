//
//  TrackEventRequest.h
//  Gamedock
//
//  Copyright © 2017 Azerion. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CDTrackEvent.h"

@interface TrackEventRequest : NSObject<NSURLSessionDelegate>

-(void)sendTrackEvent:(CDTrackEvent*)data onResponse:(void (^)(id response))block;

@end
