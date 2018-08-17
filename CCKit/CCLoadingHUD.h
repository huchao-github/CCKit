//
//  CCLoadingHUD.h
//  CCKit
//
//  Created by 胡超 on 2018/3/21.
//  Copyright © 2018年 胡超. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CCLoadingHUD : UIView

@property (nonatomic,readwrite) UIView *contentView;

+ (void)startLoadingForView:(UIView *)view;

+ (void)stopLoadingForView:(UIView *)view;

@end
