//
//  CCToast.h
//  CCKit
//
//  Created by 胡超 on 2018/3/31.
//  Copyright © 2018年 胡超., All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CCToast : UIView

/**
* 显示toast，注意该方法toast是显示在UIApplication.sharedApplication.delegate.window上
* @param message 需要显示的内容
*/
+ (void)toast:(NSString *)message;

/**
 * 在指定的inView上显示toast
 * @param message 需要显示的内容
 * @param inView  显示在对应的view上
 */
+ (void)toast:(NSString *)message inView:(UIView *)inView;

/**
 * 显示toast，并且停止view上的CCLoadingHUD，注意该方法toast是显示在UIApplication.sharedApplication.delegate.window上
 * @param message 需要显示的内容
 * @param view LoadingHUD显示的view
 */
+ (void)toast:(NSString *)message stopLoadingHUDForView:(UIView *)view;

/**
 * 在指定的inView上显示toast，并且停止view上的CCLoadingHUD
 * @param message 需要显示的内容
 * @param inView  显示在对应的view上
 * @param view    LoadingHUD显示的view
 */
+ (void)toast:(NSString *)message inView:(UIView *)inView stopLoadingHUDForView:(UIView *)view;

@end
