//
//  MVYSideMenuController.h
//  MVYSideMenuExample
//
//  Created by Álvaro Murillo del Puerto on 10/07/13.
//  Copyright (c) 2013 Mobivery. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MVYSideMenuOptions.h"

@interface MVYSideMenuController : UIViewController <UIGestureRecognizerDelegate>

@property (nonatomic, strong, readonly) UIViewController *menuViewController;
@property (nonatomic, strong, readonly) UIViewController *contentViewController;
@property (nonatomic, copy) MVYSideMenuOptions *options;
//

@property (strong, nonatomic) UIView *contentContainerView;
@property (strong, nonatomic) UIView *menuContainerView;
@property (strong, nonatomic) UIView *opacityView;
@property (strong, nonatomic) UIPanGestureRecognizer *panGesture;
@property (strong, nonatomic) UITapGestureRecognizer *tapGesture;

- (id)initWithMenuViewController:(UIViewController *)menuViewController contentViewController:(UIViewController *)contentViewController;
- (id)initWithMenuViewController:(UIViewController *)menuViewController contentViewController:(UIViewController *)contentViewController options:(MVYSideMenuOptions *)options;
- (void)closeMenu;
- (void)openMenu;
- (void)disable;
- (void)enable;
- (void)changeContentViewController:(UIViewController *)contentViewController closeMenu:(BOOL)closeMenu;
- (void)changeMenuViewController:(UIViewController *)menuViewController closeMenu:(BOOL)closeMenu;

@end

@interface UIViewController (MVYSideMenuController)
- (MVYSideMenuController *)sideMenuController;
@end
