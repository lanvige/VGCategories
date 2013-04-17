//
//  NSURL+MD5.h
//  MobileCampus
//
//  Created by Lanvige Jiang on 10/8/12.
//  Copyright (c) 2013 Lanvige Jiang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (MD5)

// calculates the MD5 hash of a key
- (NSString *)md5String;

@end
