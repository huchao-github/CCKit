//
//  CCLoadingTipView.h
//  CCKit
//
//  Created by 胡超 on 2018/1/30.
//  Copyright © 2018年 胡超., ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CCMacros.h"

typedef NSString * CCLoadingTipType;

CCKIT_EXTERN CCLoadingTipType const CCLoadingTipTypeError;
CCKIT_EXTERN CCLoadingTipType const CCLoadingTipTypeNoInternet;

@interface CCLoadingTipConfiguration : NSObject
/** 自定义Loading状态指示器*/
@property (nonatomic,strong) UIView *customIndicatorView;
/** loading指示器颜色 默认值: UIColor.darkGrayColor*/
@property (nonatomic,copy) UIColor *defaultIndicatorColor;
/** 背景颜色 默认值: UIColor.whiteColor*/
@property (nonatomic,copy) UIColor *backgroundColor;
/** 提示文本颜色 默认值: UIColor.darkGrayColor*/
@property (nonatomic,copy) UIColor *messageTextColor;
/** 按钮标题 默认值: @"点击重试"*/
@property (nonatomic,copy) NSString *defaultButtonTitle;
/** 按钮背景颜色 默认值: UIColor.redColor */
@property (nonatomic,copy) UIColor *defaultButtonBackgroundColor;
/** Tip图片尺寸 默认值: CGSizeMake(100,100)*/
@property (nonatomic,assign) CGSize tipImageSize;
/** 设置Tip类型*/
@property (readonly) void(^setTip)(UIImage *image, NSString *message, NSString *buttonTitle, CCLoadingTipType tipType);

/** 全局设置 (单例)*/
+ (CCLoadingTipConfiguration *)defaultConfiguration;
/** 全局设置的拷贝 (非单例)，用于单独给特定view设置使用，需要注意的是:不会拷贝customIndicatorView和setTip内容*/
+ (CCLoadingTipConfiguration *)defaultConfigurationCopy;

@end

@interface CCLoadingTipView : UIView

/** 单独对特定view设置*/
+ (void)setConfiguration:(CCLoadingTipConfiguration *)configuration forView:(UIView *)forView;

+ (void)startLoadingInView:(UIView *)inView;

+ (void)showTipWithError:(NSError *)error inView:(UIView *)inView;

+ (void)showTipWithError:(NSError *)error inView:(UIView *)inView topOffset:(CGFloat)topOffset;

+ (void)showTipWithError:(NSError *)error inView:(UIView *)inView buttonAction:(void(^)(void))buttonAction;

+ (void)showTipWithError:(NSError *)error inView:(UIView *)inView tapAction:(void(^)(void))tapAction;

+ (void)showTipWithType:(CCLoadingTipType)tipType inView:(UIView *)inView;

+ (void)showTipWithType:(CCLoadingTipType)tipType inView:(UIView *)inView topOffset:(CGFloat)topOffset;

+ (void)showTipWithType:(CCLoadingTipType)tipType inView:(UIView *)inView buttonAction:(void(^)(void))buttonAction;

+ (void)showTipWithType:(CCLoadingTipType)tipType inView:(UIView *)inView tapAction:(void(^)(void))tapAction;

+ (void)hideTipViewForView:(UIView *)forView;

@end
