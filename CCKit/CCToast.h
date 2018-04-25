//
//  CCToast.h
//  CCKit
//
//  Created by 胡超 on 2018/3/31.
//  Copyright © 2018年 胡超., All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CCToast : UIView

+ (void)toast:(NSString *)message;

+ (void)toastWithStopLoadingHUD:(NSString *)message;

@end
