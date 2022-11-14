#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonDigest.h>

@interface NSString (MD5)

// The string's MD5 hash
- (NSString *) MD5Hash;

@end
