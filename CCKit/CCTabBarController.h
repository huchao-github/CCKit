//
//  CCTabBarController.h
//  CCKit
//
//  Created by 胡超 on 2017/12/5.
//  Copyright © 2017年 胡超., ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CCTabBar.h"
#import "CCTabBarItem.h"

typedef NS_ENUM(NSInteger, CCTabBarPosition) {
    CCTabBarPositionLeft,
    CCTabBarPositionRight,
    CCTabBarPositionTop,
    CCTabBarPositionBottom,
    CCTabBarPositionDefault = CCTabBarPositionBottom,
};

@interface CCTabBarController : UIViewController <CCTabBarDelegate>

@property (nonatomic,readonly) CCTabBar * tabBar;
@property (nonatomic,readonly) CCTabBarPosition tabBarPosition;
@property (nonatomic,readonly) UIView *containerView;

@property (nonatomic,copy) NSArray <__kindof UIViewController *> *viewControllers;

@property (nonatomic,assign) NSInteger selectedIndex;
@property (nonatomic,assign) __kindof UIViewController *selectedViewController;

- (instancetype)init; //tabBarPosition = CCTabBarPositionDefault;
- (instancetype)initWithTabBarPosition:(CCTabBarPosition)tabBarPosition;

/** 如需自定义tabBarItems布局，重写该方法*/
- (void)updateTabBarItemsFrame;

@end


@interface UIViewController (CCTabBarController)

@property (nonatomic,readonly) CCTabBarItem *cc_tabBarItem;
@property (nonatomic,readonly) CCTabBarController *cc_tabBarController;

- (void)refreshNavigationItem;

@end
