//
//  CCTabBarItem.h
//  CCKit
//
//  Created by 胡超 on 17/10/23.
//  Copyright © 2016年 胡超., All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, CCTabBarItemBadgeStyle) {
    CCTabBarItemBadgeStyleDefault,
    CCTabBarItemBadgeStyleDot,
};

@interface CCTabBarItem : UIButton

@property (nonatomic,copy)  NSString *itemTitle;
@property (nonatomic,strong) UIImage *itemImage;
@property (nonatomic,strong) UIImage *itemSelectedImage;

@property (nonatomic,assign) NSInteger index;

/** 是否显示badge*/
@property (nonatomic,assign) BOOL showBadge;
/** badge类型, 默认为:CCTabBarItemBadgeStyleDefault当badgeStyle == CCTabBarItemBadgeStyleDefault时，设置badgeValue有效*/
@property (nonatomic,assign) CCTabBarItemBadgeStyle badgeStyle;
/** badge内容*/
@property (nonatomic,strong) NSString *badgeValue;
/** badge颜色，默认为:redColor */
@property (nonatomic,strong) UIColor *badgeColor;

@end
