//
//  NSObject+NSString_Pinyin.h
//  Explorer
//
//  Created by Lanvige Jiang on 3/13/13.
//  Copyright (c) 2013 Lanvige Jiang. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum _PYUnitAttribute {
    ATOM_TYPE = 0,  // atom type
    MAJOR_TYPE = 1 << 0,  // first position at pinyin
        MINOR_TYPE = 1 << 1, // second positon at pinyin
        MAJIN_TYPE = MAJOR_TYPE | MINOR_TYPE,
        SEPERATOR_TYPE = 1 << 2
}PYUnitAttribute;

typedef struct _PYUnitParts
{
    const char *data;
    PYUnitAttribute type;
}PYUnitParts;

typedef struct _CharsProxy
{
    NSInteger major_index_;
    NSInteger minor_index_;
}CharsProxy;


@interface NSString (Pinyin)

- (NSString *)stringByPinyinParser;
- (NSString *)stringByPinyinEncoder;

@end

