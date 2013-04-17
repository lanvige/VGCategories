//
//  UITabBarController+Autorotate.m
//  Explorer
//
//  Created by Lanvige Jiang on 3/15/13.
//  Copyright (c) 2013 Lanvige Jiang. All rights reserved.
//

#import "UITabBarController+Autorotate.h"

@implementation UITabBarController (Autorotate)

#pragma mark -
#pragma mark View Roate for iOS 6 support

- (NSInteger)supportedInterfaceOrientations
{
    return UIInterfaceOrientationMaskAllButUpsideDown;
}

- (BOOL)shouldAutorotate
{
    return NO;
}

@end
