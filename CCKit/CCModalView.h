//
//  CCModalView.h
//  CCKit
//
//  Created by 胡超 on 2017/11/29.
//  Copyright © 2017年 胡超., ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, CCModalPresentType)
{
    /** 从底部弹出*/
    CCModalPresentTypeMoveFromBottom,
    /** 从中间弹出*/
    CCModalPresentTypeAlertInCenter,
    /** 自定义动画*/
    CCModalPresentTypeCustomAnimation
};

@interface CCModalView : UIView <UIGestureRecognizerDelegate>
/** 阴影*/
@property (nonatomic,strong,readonly) UIView *shadowView;
/** customView容器*/
@property (nonatomic,strong,readonly) UIView *containerView;
/** 自定义视图*/
@property (nonatomic,strong,readonly) UIView *contentView;
/** 弹出类型 default is CCModalPresentTypeMoveFromBottom*/
@property (nonatomic,assign) CCModalPresentType presentType;
/** 背景变暗 */
@property (nonatomic,assign) BOOL darkerBackground;
/** 禁用点击背景dismiss */
@property (nonatomic,assign) BOOL disableTapGesture;
/** 自定义视图大小 */
@property (nonatomic,assign) CGSize contentViewSize;

- (void)present;

- (void)presentInView:(UIView *)inView;

- (void)dismiss;

- (void)viewWillPresent;

/** 该方法仅对CCModalPresentTypeMoveFromBottom有效*/
- (void)updateContainerViewHeight:(CGFloat)height animated:(BOOL)animated;

#pragma mark - 子类实现
/** 自定义present动画*/
- (void)containerCustomPresentAnimation;
/** 自定义dismiss动画*/
- (void)containerCustomDismissAnimation:(void(^)(void))completion;

@end
