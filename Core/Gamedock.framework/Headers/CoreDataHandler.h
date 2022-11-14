//
//  GamedockConfigHandler.h
//  config
//
//  Copyright © 2015 Azerion. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "CDTrackEvent.h"

@interface CoreDataHandler : NSObject

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
//@property (readonly, strong) NSPersistentContainer *persistentContainer;

@property (retain, nonatomic) NSArray *trackEvents;

+ (CoreDataHandler*)sharedInstance;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

-(void)queueEvent:(CDTrackEvent*)trackEventData;
-(CDTrackEvent*)getOldestQueuedEvent;

@end
