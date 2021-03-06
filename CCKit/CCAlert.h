//
//  CCAlert.h
//  CCKit
//
//  Created by 胡超 on 2018/11/30.
//  Copyright © 2018 胡超. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

typedef void(^CCAlertButtonsAction)(NSInteger buttonIndex);
typedef void(^CCAlertInputButtonsAction)(NSInteger buttonIndex, NSArray <UITextField *> *textfields);
typedef void(^CCAlertTextFieldConfiguration)(UITextField *textfield);

typedef void(^CCAlertBlock)(NSString *title, NSString *message, NSArray *buttons, CCAlertButtonsAction btnsAction);
typedef void(^CCAlertInputBlock)(NSString *title, NSString *message, NSArray *buttons, CCAlertInputButtonsAction btnsAction, CCAlertTextFieldConfiguration textfieldConfiguration, ...);

@interface CCAlert : NSObject

/**
 CCAlert.alert(@"title", @"message", @[@"Cancel",@"OK"], ^(NSInteger buttonIndex) {
    // do something...
 });
 */
@property (class,readonly) CCAlertBlock alert;

/**
 CCAlert.alertInput(@"title", @"message", @[@"Cancel",@"OK"], ^(NSInteger buttonIndex, NSArray <UITextField *> *textFields) {
    // do something...
 }, ^(UITextField *textfield) {
    // 配置UITextField
 }, ^(UITextField *textfield) {
    // 配置UITextField
 }, nil);
 
 iOS7 and earlier textfieldConfiguration最多配置两个.
 */
@property (class,readonly) CCAlertInputBlock alertInput;

/**
 CCAlert.actionSheet(@"title", @"message", @[@[@"拍照",@"相册"], @"取消"], ^(NSInteger buttonIndex) {
    // do something...
 });
 iOS7 and earlier message must be nil.
 */
@property (class,readonly) CCAlertBlock actionSheet;

/** 针对某些多个window的情况设置*/
@property (class,readonly) void(^set_presentingViewController)(UIViewController *viewController);

@end
