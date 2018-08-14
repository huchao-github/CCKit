//
//  CCTabBarItem.h
//  CCKit
//
//  Created by 胡超 on 17/10/23.
//  Copyright © 2016年 胡超., All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, CCTabBarItemBadgeStyle) {
    CCTabBarItemBadgeStyleDefault,
    CCTabBarItemBadgeStyleDot,
};

@interface CCTabBarItem : UIButton

@property (nonatomic,nullable,copy)  NSString *itemTitle;
@property (nonatomic,nullable,strong) UIImage *itemImage;
@property (nonatomic,nullable,strong) UIImage *itemSelectedImage;

/** 普通状态颜色*/
@property(null_resettable, nonatomic, strong) UIColor *normalColor;
/** 选中状态颜色*/
@property(null_resettable, nonatomic, strong) UIColor *selectedColor;

/** 是否显示badge*/
@property (nonatomic,assign) BOOL showBadge;
/** badge类型, 默认为:CCTabBarItemBadgeStyleDefault当badgeStyle == CCTabBarItemBadgeStyleDefault时，设置badgeValue有效*/
@property (nonatomic,assign) CCTabBarItemBadgeStyle badgeStyle;
/** badge内容*/
@property (nonatomic,nullable,strong) NSString *badgeValue;
/** badge颜色，默认为:redColor */
@property (nonatomic,nullable,strong) UIColor *badgeColor;

@end

NS_ASSUME_NONNULL_END
