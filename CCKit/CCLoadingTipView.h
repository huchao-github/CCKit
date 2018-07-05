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

@interface CCLoadingTipView : UIView

/** 自定义Loading状态指示器*/
+ (void)setCustomIndicatorView:(UIView *)customIndicatorView;

+ (void)setImageName:(NSString *)imageName tipMsg:(NSString *)tipMsg forTipType:(CCLoadingTipType)tipType;

+ (void)setButtonBackgroundColor:(UIColor *)color;

+ (void)setButtonDefaultTitle:(NSString *)title;

#pragma mark ----

+ (void)setBackgroundColor:(UIColor *)backgroundColor;

+ (void)startLoadingInView:(UIView *)inView;

+ (void)showTipWithType:(CCLoadingTipType)tipType inView:(UIView *)inView;

+ (void)showTipWithType:(CCLoadingTipType)tipType inView:(UIView *)inView buttonAction:(void(^)(void))buttonAction;

+ (void)showTipWithType:(CCLoadingTipType)tipType inView:(UIView *)inView buttonTitle:(NSString *)buttonTitle buttonAction:(void(^)(void))buttonAction;

+ (void)showTipWithImage:(UIImage *)image tipMsg:(NSString *)tipMsg inView:(UIView *)inView;

+ (void)showTipWithImage:(UIImage *)image tipMsg:(NSString *)tipMsg inView:(UIView *)inView buttonAction:(void(^)(void))buttonAction;

+ (void)showTipWithImage:(UIImage *)image tipMsg:(NSString *)tipMsg inView:(UIView *)inView buttonTitle:(NSString *)buttonTitle buttonAction:(void(^)(void))buttonAction;

+ (void)showTipWithError:(NSError *)error inView:(UIView *)inView;

+ (void)showTipWithError:(NSError *)error inView:(UIView *)inView buttonAction:(void(^)(void))buttonAction;

+ (void)showTipWithError:(NSError *)error inView:(UIView *)inView buttonTitle:(NSString *)buttonTitle buttonAction:(void(^)(void))buttonAction;

+ (void)hideTipViewForView:(UIView *)forView;

@end
