//
//  TLYShyNavBarController.h
//  TLYShyNavBarDemo
//
//  Created by Mazyad Alabduljaleel on 6/13/14.
//  Copyright (c) 2014 Telly, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

/*  CLASS DESCRIPTION:
 *  ==================
 *      Manages the relationship between a scrollView and a navigation
 *  controller.
 */

@interface TLYShyNavBarController : NSObject

@property (nonatomic, readonly) UIViewController *viewController;

@property (nonatomic, weak) UIScrollView *scrollView;
@property (nonatomic, strong) UIView *extensionView;

- (void)scrollViewDidEndScrolling;

@end

@interface UIViewController (ShyNavBar)

@property (nonatomic, strong) TLYShyNavBarController *shyNavBarController;

@end