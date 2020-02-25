//
//  CCCategory+UIImage.h
//  CCKit
//
//  Created by 胡超 on 2018/1/29.
//  Copyright © 2018年 胡超., ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (CCKit)

/**
 * 创建一个1x1大小的透明颜色的图片
 */
@property (class,readonly) UIImage *clearImage;

/**
 * 根据颜色创建一个1x1大小的纯色图片
 * 参数color为UIColor类型或者NSString类型，如过传NSString类型，则格式为@"#FF0000"，颜色16进制字符串
 */
@property (class,readonly) UIImage *(^fromColor)(id color);

/**
 * 根据颜色创建一个指定size大小的纯色图片，并根据cornerRadius裁剪圆角
 * 参数color为UIColor类型或者NSString类型，如过传NSString类型，则格式为@"#FF0000"，颜色16进制字符串
 */
@property (class,readonly) UIImage *(^fromColorEx)(id color, CGSize size, CGFloat cornerRadius);

/**
 * 根据颜色创建一个指定size大小的渐变色图片
 * 参数colors为UIColor类型数组
 * startPoint endPoint 左上角{0,0}、左下角{0,1}、右上角{1,0}、右下角{1,1}
 */
@property (class,readonly) UIImage *(^gradientImage)(NSArray<UIColor *> *colors, CGSize size, CGPoint startPoint, CGPoint endPoint);

/**
 * IconFont支持
 * #param unicode   iconfont对应的图标unicode字符串
 * #param size      iconfont对应的fontSize
 * #param color     iconfont对应的fontColor，传nil时，默认为UIColor.darkGrayColor
 * #param fontName  iconfont对应的fontName,传nil时，默认为@"iconfont"
 */
@property (class,readonly) UIImage *(^iconFont)(NSString *unicode, CGFloat size, UIColor *_Nullable color, NSString *_Nullable fontName);

/**
 * 给UIImage着色
 * 参数color为UIColor类型或者NSString类型，如过传NSString类型，则格式为@"#FF0000"，颜色16进制字符串
 */
@property (nonatomic,readonly) UIImage *(^tintColor)(id color);

@property (nonatomic,readonly) UIImage *(^scaleToSize)(CGSize size);

/** -[UIImage imageWithRenderingMode:UIImageRenderingModeAlwaysOriginal]*/
@property (nonatomic,readonly) UIImage *originalRenderingImage;

@end

NS_ASSUME_NONNULL_END
