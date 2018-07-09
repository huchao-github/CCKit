//
//  CCCategory+UINavigationBar.h
//  CCKit
//
//  Created by 胡超 on 2018/7/9.
//  Copyright © 2018年 胡超., ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UINavigationBar (CCKit)
@property (nonatomic,readonly) void(^setBackgroundImage)(UIImage *backgroundImage, UIBarMetrics barMetrics);

@end
