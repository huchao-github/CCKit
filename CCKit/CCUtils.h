//
//  CCUtils.h
//  CCKit
//
//  Created by 胡超 on 2018/7/6.
//  Copyright © 2018年 胡超., ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "CCMacros.h"

CCKIT_EXTERN NSString * CCFileSizeStr(uint64_t fileSize);

CCKIT_EXTERN UIWindow * CCGetAppWindowExceptRootViewControllerClass(Class className);
CCKIT_EXTERN UIWindow * CCGetAppWindow(void);

CCKIT_EXTERN void CCHookMessageEx(Class _class, SEL sel, IMP imp, IMP *result);
