//
//  CCActivityIndicatorView.h
//  CCKit
//
//  Created by 胡超 on 2018/7/4.
//  Copyright © 2018年 胡超., ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CCActivityIndicatorView : UIView

@property(null_resettable, nonatomic, strong) UIColor *tintColor NS_AVAILABLE_IOS(7_0);

- (void)startAnimating;
- (void)stopAnimating;

@end
