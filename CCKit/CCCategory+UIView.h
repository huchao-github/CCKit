//
//  CCCategory+UIView.h
//  CCKit
//
//  Created by 胡超 on 2017/11/11.
//  Copyright © 2017年 胡超., ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MASConstraintMaker;

typedef NS_ENUM(NSInteger,CCBorderMask) {
    CCBorderMaskTop         = 1 << 0,
    CCBorderMaskBottom      = 1 << 1,
    CCBorderMaskLeft        = 1 << 2,
    CCBorderMaskRight       = 1 << 3,
    CCBorderMaskTopBottom   = (CCBorderMaskTop | CCBorderMaskBottom),
    CCBorderMaskLeftRight   = (CCBorderMaskLeft | CCBorderMaskRight),
    CCBorderMaskAll         = (CCBorderMaskTop | CCBorderMaskBottom | CCBorderMaskLeft | CCBorderMaskRight),
};

@interface UIView (CCKit)

@property (nonatomic,assign) CGPoint origin;
@property (nonatomic,assign) CGSize  size;
@property (nonatomic,assign) CGFloat width;
@property (nonatomic,assign) CGFloat height;
@property (nonatomic,assign) CGFloat top;
@property (nonatomic,assign) CGFloat left;
@property (nonatomic,assign) CGFloat bottom;
@property (nonatomic,assign) CGFloat right;
@property (nonatomic,assign) CGFloat centerX;
@property (nonatomic,assign) CGFloat centerY;

/** 背景图片，拉伸平铺*/
@property (nonatomic,strong) UIImage *backgroundImage;

@property (nonatomic,readonly) void(^addSubview)(UIView *view);
@property (nonatomic,readonly) void(^insertSubviewAtIndex)(UIView *view, NSInteger atIndex);
@property (nonatomic,readonly) void(^insertSubviewAboveSubview)(UIView *view, UIView *aboveView);
@property (nonatomic,readonly) void(^insertSubviewBelowSubview)(UIView *view, UIView *belowView);
@property (nonatomic,readonly) void(^mas_makeConstraints)(void(^)(MASConstraintMaker *make));
@property (nonatomic,readonly) void(^mas_remakeConstraints)(void(^)(MASConstraintMaker *make));
@property (nonatomic,readonly) void(^mas_updateConstraints)(void(^)(MASConstraintMaker *make));
@property (nonatomic,readonly) void(^addSubviewMaker)(UIView *view, void(^)(MASConstraintMaker *make));
@property (nonatomic,readonly) void(^insertSubviewAtIndexMaker)(UIView *view, NSInteger atIndex, void(^)(MASConstraintMaker *make));
@property (nonatomic,readonly) void(^insertSubviewAboveSubviewMaker)(UIView *view, UIView *aboveView, void(^)(MASConstraintMaker *make));
@property (nonatomic,readonly) void(^insertSubviewBelowSubviewMaker)(UIView *view, UIView *belowView, void(^)(MASConstraintMaker *make));
@property (nonatomic,readonly) void(^removeAllSubviews)(void);

#pragma mark - Border
@property (nonatomic,readonly) void(^setBorder)(CGFloat borderWidth, UIColor *borderColor, CCBorderMask borderMask);
@property (nonatomic,readonly) void(^setBorderHidden)(BOOL hidden);

@end
