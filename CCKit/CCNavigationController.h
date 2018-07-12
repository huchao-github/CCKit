//
//  CCNavigationController.h
//  CCKit
//
//  Created by 胡超 on 2018/3/23.
//  Copyright © 2018年 胡超., ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CCNavigationController : UINavigationController
/** 自定义返回按钮标题*/
@property (nonatomic,copy) NSString *customBackItemTitle;
@end

@interface UIViewController (CCNavigationController)

/** for fake navigation bar*/
@property (nonatomic,assign) BOOL translucentNavBar;
@property (nonatomic,strong) UIColor *navigationBarBgColor;

- (BOOL)shouldPopViewController;

@end
