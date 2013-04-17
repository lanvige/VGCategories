//
//  UINavigationController+Autorotate.m
//  Explorer
//
//  Created by Lanvige Jiang on 3/23/13.
//  Copyright (c) 2013 Lanvige Jiang. All rights reserved.
//

#import "UINavigationController+Autorotate.h"

@implementation UINavigationController (Autorotate)

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
