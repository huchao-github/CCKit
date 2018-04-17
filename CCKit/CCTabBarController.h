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

@interface CCTabBarController : UIViewController <CCTabBarDelegate>

@property (nonatomic,readonly) CCTabBar * tabBar;

@property (nonatomic,copy) NSArray <__kindof UIViewController *> *viewControllers;

@property (nonatomic,assign) NSInteger selectedIndex;
@property (nonatomic,assign) __kindof UIViewController *selectedViewController;

@end


@interface UIViewController (CCTabBarController)

@property (nonatomic,readonly) CCTabBarItem *cc_tabBarItem;
@property (nonatomic,readonly) CCTabBarController *cc_tabBarController;

- (void)refreshNavigationItem;

@end
