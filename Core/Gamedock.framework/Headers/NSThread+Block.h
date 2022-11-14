#import <Foundation/Foundation.h>

@interface NSThread (Block)

+ (void)performOnThread:(NSThread *)thread block:(void (^)())block;

@end
