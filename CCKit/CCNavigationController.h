//
//  CCNavigationController.h
//  CCKit
//
//  Created by 胡超 on 2018/3/23.
//  Copyright © 2018年 胡超., ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CCNavigationController : UINavigationController
/** 是否显示自定义返回按钮*/
@property (nonatomic,readonly) BOOL prefersCustomBackBarItem;
/** 自定义返回按钮标题*/
@property (nonatomic,readonly) NSString *prefersCustomBackBarItemTitle;

@end

@interface UIViewController (CCNavigationController)
- (BOOL)shouldPopViewController;
@end
