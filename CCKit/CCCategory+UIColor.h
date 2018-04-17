//
//  CCCategory+UIColor.h
//  CCKit
//
//  Created by 胡超 on 2018/1/29.
//  Copyright © 2018年 胡超., ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (CCKit)

@property (class,readonly) UIColor *(^RGB)(int r,int g, int b);
@property (class,readonly) UIColor *(^RGBA)(int r,int g, int b, float a);
@property (class,readonly) UIColor *(^Hex)(uint hex);
@property (class,readonly) UIColor *(^HexStr)(NSString *hexstr);

@end
