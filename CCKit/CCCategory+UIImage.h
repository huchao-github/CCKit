//
//  CCCategory+UIImage.h
//  CCKit
//
//  Created by 胡超 on 2018/1/29.
//  Copyright © 2018年 胡超., ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

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
 * 给UIImage着色
 * 参数color为UIColor类型或者NSString类型，如过传NSString类型，则格式为@"#FF0000"，颜色16进制字符串
 */
@property (nonatomic,readonly) UIImage *(^tintColor)(id color);

@property (nonatomic,readonly) UIImage *(^scaleToSize)(CGSize size);

@end
