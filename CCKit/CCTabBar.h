//
//  CCTabBar.h
//  CCKit
//
//  Created by 胡超 on 2017/12/3.
//  Copyright © 2017年 胡超., ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CCTabBarItem.h"

NS_ASSUME_NONNULL_BEGIN

@class CCTabBar;

extern const CGFloat CCTabBarDefaultHeight; // value is 50.0f

@protocol CCTabBarDelegate <NSObject>
@optional
- (void)tabBarShouldUpdateBarItemsFrame:(CCTabBar *)tabBar;
- (void)tabBar:(CCTabBar *)tabBar didSelectItem:(CCTabBarItem *)item atIndex:(NSInteger)atIndex;
- (BOOL)tabBar:(CCTabBar *)tabBar shouldSelectItemAtIndex:(NSInteger)atIndex;
@end


@interface CCTabBar : UIView

@property (nonatomic,readonly) UIView *contentView;

@property (nonatomic,strong) NSArray <CCTabBarItem *> *barItems;

@property (nonatomic,assign) id<CCTabBarDelegate> delegate;

@property (nonatomic,assign) NSInteger selectedIndex;
@property (nonatomic,assign) CCTabBarItem *selectedItem;
@property (nonatomic,assign) BOOL borderHidden;

/** 普通状态颜色*/
@property(null_resettable, nonatomic, strong) UIColor *normalColor;
/** 选中状态颜色*/
@property(null_resettable, nonatomic, strong) UIColor *selectedColor;

/** 中间附加Item*/
@property (nonatomic,retain,readonly) UIButton *extraItem;
@property (nonatomic,readonly) CGPoint extraItemOffset;
- (void)addExtraItem:(UIButton *)extraItem offset:(CGPoint)offset;
- (void)removeExtraItem;

@end

NS_ASSUME_NONNULL_END
