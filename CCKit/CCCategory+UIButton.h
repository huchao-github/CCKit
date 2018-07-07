//
//  CCCategory+UIButton.h
//  CCKit
//
//  Created by 胡超 on 2018/1/29.
//  Copyright © 2018年 胡超., ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (CCKit)

@property (nonatomic,readonly) void (^setTitle)(NSString *title, UIControlState forState);
@property (nonatomic,readonly) void (^setTitleColor)(UIColor *color, UIControlState forState);
@property (nonatomic,readonly) void (^setImage)(UIImage *image, UIControlState forState);
@property (nonatomic,readonly) void (^setBackgroundImage)(UIImage *image, UIControlState forState);

/** for SDWebImage*/
@property (nonatomic,readonly) void (^setSDImage)(NSURL *url, UIImage *placeholder);
@property (nonatomic,readonly) void (^setSDBackgroundImage)(NSURL *url, UIImage *placeholder);

@end
