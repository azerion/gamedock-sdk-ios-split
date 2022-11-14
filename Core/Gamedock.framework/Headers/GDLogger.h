//
//  GDLogger.h
//  Gamedock
//
//  Created by Andrey Ildyakov on 24/02/2021.
//  Copyright © 2021 Azerion. All rights reserved.
//

#import <Foundation/Foundation.h>

static const int GDLogger_LEVEL_ALL = 0;
static const int GDLogger_LEVEL_LOG = 1;
static const int GDLogger_LEVEL_INFO = 2;
static const int GDLogger_LEVEL_WARN = 3;
static const int GDLogger_LEVEL_ERROR = 4;
static const int GDLogger_LEVEL_FATAL = 5;
static const int GDLogger_LEVEL_NONE = 10;


#ifdef DEBUG

#define GDLogger_Log( s, ... ) [[GDLogger shared] print: [self class] level: GDLogger_LEVEL_LOG func: [NSString stringWithFormat: @"%s", __PRETTY_FUNCTION__] line: __LINE__ str: [NSString stringWithFormat:(s), ##__VA_ARGS__]]
#define GDLogger_Info( s, ... ) [[GDLogger shared] print: [self class] level: GDLogger_LEVEL_INFO func: [NSString stringWithFormat: @"%s", __PRETTY_FUNCTION__] line: __LINE__ str: [NSString stringWithFormat:(s), ##__VA_ARGS__]]
#define GDLogger_Warn( s, ... ) [[GDLogger shared] print: [self class] level: GDLogger_LEVEL_WARN func: [NSString stringWithFormat: @"%s", __PRETTY_FUNCTION__] line: __LINE__ str: [NSString stringWithFormat:(s), ##__VA_ARGS__]]
#define GDLogger_Error( s, ... ) [[GDLogger shared] print: [self class] level: GDLogger_LEVEL_ERROR func: [NSString stringWithFormat: @"%s", __PRETTY_FUNCTION__] line: __LINE__ str: [NSString stringWithFormat:(s), ##__VA_ARGS__]]
#define GDLogger_Fatal( s, ... ) [[GDLogger shared] print: [self class] level: GDLogger_LEVEL_FATAL func: [NSString stringWithFormat: @"%s", __PRETTY_FUNCTION__] line: __LINE__ str: [NSString stringWithFormat:(s), ##__VA_ARGS__]]
#define GDLogger_HBLog( s, ... ) [[GDLogger shared] printForC:@"HookBridge" level: GDLogger_LEVEL_FATAL func: [NSString stringWithFormat: @"%s", __PRETTY_FUNCTION__] line: __LINE__ str: [NSString stringWithFormat:(s), ##__VA_ARGS__]]

#define GDLogger_SetClassLevel( l ) [[GDLogger shared] setLevel: [self class] level: (l)]

#else

#define GDLogger_Log( s, ... )
#define GDLogger_Info( s, ... )
#define GDLogger_Warn( s, ... )
#define GDLogger_Error( s, ... )
#define GDLogger_Fatal( s, ... )

#define GDLogger_SetClassLevel( level )

#endif


@interface GDLogger : NSObject {

    NSMutableDictionary* loggers;
}


- (void) print: (Class) theClass level: (int) level func: (NSString*) str line: (int) line str: (NSString*) str;
- (void) printForC: (NSString*) theClassName level: (int) level func: (NSString*) str line: (int) line str: (NSString*) str;

- (void) setLevel: (Class) theClass level: (int) level;
- (int) getLevel:(Class)theClass;

+ (GDLogger*) shared;

@end
