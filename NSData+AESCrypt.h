//
//  NSData+AESCrypt.h
//  Efekta12NavigationTest
//
//  AES Encrypt/Decrypt
//  Created by Jim Dovey and 'Jean'
//  See http://iphonedevelopment.blogspot.com/2009/02/strong-encryption-for-cocoa-cocoa-touch.html
//  Created by Forrest Shi on 10/8/12.
//  Copyright (c) 2012 EF Englishtown. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (AESCrypt)

- (NSData *)AES256EncryptWithKey:(NSString *)key;
- (NSData *)AES256DecryptWithKey:(NSString *)key;

+ (NSData *)dataWithBase64EncodedString:(NSString *)string;
- (id)initWithBase64EncodedString:(NSString *)string;

- (NSString *)base64Encoding;
- (NSString *)base64EncodingWithLineLength:(NSUInteger)lineLength;

- (BOOL)hasPrefixBytes:(const void *)prefix length:(NSUInteger)length;
- (BOOL)hasSuffixBytes:(const void *)suffix length:(NSUInteger)length;

@end