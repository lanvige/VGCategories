//
//  UINavigationController+Autorotate.h
//  Explorer
//
//  Created by Lanvige Jiang on 3/23/13.
//  Copyright (c) 2013 Lanvige Jiang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UINavigationController (Autorotate)

- (NSInteger)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;

@end
