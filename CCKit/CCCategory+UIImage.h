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

@property (class,readonly) UIImage *(^fromColor)(UIColor *color);

@property (nonatomic,readonly) UIImage *(^tintColor)(UIColor *color);

@property (nonatomic,readonly) UIImage *(^scaleToSize)(CGSize size);

@end
