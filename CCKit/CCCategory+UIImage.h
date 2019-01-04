//
//  CCCategory+UIImage.h
//  CCKit
//
//  Created by 胡超 on 2018/1/29.
//  Copyright © 2018年 胡超., ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (CCKit)

@property (class,readonly) UIImage *clearImage;
/** 根据颜色创建一个1x1大小的纯色图片*/
@property (class,readonly) UIImage *(^fromColor)(UIColor *color);
/** 根据颜色创建一个指定size大小的纯色图片，并根据cornerRadius裁剪圆角*/
@property (class,readonly) UIImage *(^fromColorEx)(UIColor *color, CGSize size, CGFloat cornerRadius);

@property (nonatomic,readonly) UIImage *(^tintColor)(UIColor *color);

@property (nonatomic,readonly) UIImage *(^scaleToSize)(CGSize size);

@end
