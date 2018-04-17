//
//  CCLoadingTipView.h
//  CCKit
//
//  Created by 胡超 on 2018/1/30.
//  Copyright © 2018年 胡超., ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

//enum {
//    CCLoadingTipIsLoading,
//    CCLoadingTipError,
//};
//typedef int CCLoadingTipType;

@interface CCLoadingTipView : UIView

@property (nonatomic,assign) BOOL isLoadingState;
/** 自定义Loading状态指示器*/
@property (nonatomic,strong) UIView *customIndicatorView;
//@property (nonatomic,assign) CCLoadingTipType type;
@property (nonatomic,copy) NSString *tipMsg;
//@property (nonatomic,copy) void(^buttonAction)(void);

+ (void)setImage:(UIImage *)image tipMsg:(NSString *)tipMsg forTipType:(int)tipType;

+ (void)startLoadingTipInView:(UIView *)view;

//+ (void)showTip

+ (void)showTipWithError:(NSError *)error inView:(UIView *)inView buttonAction:(void(^)(void))buttonAction;

//+ (void)showTip:(CCLoadingTipType)tipType inView:(UIView *)inView;
//
//+ (void)showTip:(CCLoadingTipType)tipType tipMsg:(NSString *)tipMsg inView:(UIView *)inView;
//
//+ (void)showTip:(CCLoadingTipType)tipType tipMsg:(NSString *)tipMsg inView:(UIView *)inView buttonAction:(void(^)(void))buttonAction;

+ (void)hideTipViewForView:(UIView *)forView;

@end
