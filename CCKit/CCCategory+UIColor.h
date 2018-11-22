//
//  CCCategory+UIColor.h
//  CCKit
//
//  Created by 胡超 on 2018/1/29.
//  Copyright © 2018年 胡超., ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (CCKit)
/** 默认TabBar、NavigationBar背景色*/
@property (class,readonly) UIColor *defaultBarBgColor;
/** 默认TabBar、NavigationBar边框颜色*/
@property (class,readonly) UIColor *defaultBarBorderColor;
/** eg: UIColor.RGB(255,0,0) */
@property (class,readonly) UIColor *(^RGB)(int r,int g, int b);
/** eg: UIColor.RGBA(255,0,0,0.5f) */
@property (class,readonly) UIColor *(^RGBA)(int r,int g, int b, float a);
/** eg: UIColor.Hex(0xff0000) */
@property (class,readonly) UIColor *(^Hex)(uint hex);
/** eg: UIColor.HexStr(@"ff0000") or UIColor.HexStr(@"#ff0000") */
@property (class,readonly) UIColor *(^HexStr)(NSString *hexstr);

@end
