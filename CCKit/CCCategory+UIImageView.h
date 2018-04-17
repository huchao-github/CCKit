//
//  CCCategory+UIImageView.h
//  CCKit
//
//  Created by 胡超 on 2018/1/29.
//  Copyright © 2018年 胡超., ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImageView (CCKit)

@property (nonatomic,readonly) void (^setSDImage)(NSURL *url, UIImage *placeholder);

@end
