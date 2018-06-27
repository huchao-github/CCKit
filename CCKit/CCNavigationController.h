//
//  CCNavigationController.h
//  CCKit
//
//  Created by 胡超 on 2018/3/23.
//  Copyright © 2018年 胡超., ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CCNavigationController : UINavigationController
/** 是否自定义返回按钮 default is NO*/
@property (nonatomic,readonly) BOOL prefersCustomBackItem;
/**
 * 自定义返回按钮
 * 需要注意的是customBackItem和customBackItemTitle不能同时选择，只能选择其中一个
 * 如果同时重写，则优先customBackItem
 */
@property (nonatomic,readonly) UIBarButtonItem  *customBackItem;
/** 自定义返回按钮标题*/
@property (nonatomic,readonly) NSString *customBackItemTitle;

@end

@interface UIViewController (CCNavigationController)
- (BOOL)shouldPopViewController;
@end
