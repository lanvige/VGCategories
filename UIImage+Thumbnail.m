//
//  UIImage+Thumbnail.m
//  Explorer
//
//  Created by Lanvige Jiang on 3/19/13.
//  Copyright (c) 2013 Lanvige Jiang. All rights reserved.
//

#import "UIImage+Thumbnail.h"

@implementation UIImage (Thumbnail)

- (CGRect)thumbnailRect
{
    CGFloat originHeight = self.size.height;
    CGFloat originWidth = self.size.width;
    CGFloat x, y, width, height;
    
    if (originHeight > originWidth) {
        // 长度
        // 得到图片居中的高度
        x = 0.0f;
        y = (originHeight - originWidth) / 2;
        width = originWidth;
        height = originWidth;
    } else {
        // 宽图
        x = (originWidth - originHeight) / 2;
        y = 0.0f;
        width = originHeight;
        height = originHeight;
    }
    
    return CGRectMake(x, y, width, height);
}

@end
