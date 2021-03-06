//
//  CCCategory+UIControl.h
//  CCKit
//
//  Created by 胡超 on 2018/1/29.
//  Copyright © 2018年 胡超., ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^CCUIControlAction)(id sender);

@interface UIControl (CCKit)

@property (nonatomic,readonly) void (^addTarget)(id target, SEL action, UIControlEvents controlEvents);
@property (nonatomic,readonly) void (^addAction)(UIControlEvents controlEvents, CCUIControlAction action);

@end
