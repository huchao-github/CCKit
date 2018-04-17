//
//  CCTabBar.h
//  CCKit
//
//  Created by 胡超 on 2017/12/3.
//  Copyright © 2017年 胡超., ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CCTabBarItem.h"

@class CCTabBar;

static CGFloat CCTabBarHeight = 50.0f;

@protocol CCTabBarDelegate <NSObject>
@optional
- (void)tabBar:(CCTabBar *)tabBar didSelectItem:(CCTabBarItem *)item atIndex:(NSInteger)atIndex;
- (BOOL)tabBar:(CCTabBar *)tabBar shouldSelectItemAtIndex:(NSInteger)atIndex;
@end


@interface CCTabBar : UIView

@property (nonatomic,strong) NSArray <CCTabBarItem *> *barItems;

@property (nonatomic,assign) id<CCTabBarDelegate> delegate;

@property (nonatomic,assign) NSInteger selectedIndex;
@property (nonatomic,assign) CCTabBarItem *selectedItem;
@property (nonatomic,assign) BOOL borderHidden;

/** 中间附加Item*/
- (void)addExtraItem:(UIButton *)extraItem offsetY:(CGFloat)offsetY;
- (void)removeExtraItem;

@end
