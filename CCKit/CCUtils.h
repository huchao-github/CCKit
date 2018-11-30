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

CCKIT_EXTERN void CCNotifyAddObserver(id observer, SEL selector, NSNotificationName name);
CCKIT_EXTERN void CCNotifyRemoveObserver(id observer, NSNotificationName name);
CCKIT_EXTERN void CCNotifyPOST(NSNotificationName name);
CCKIT_EXTERN void CCNotifyPOSTWithObject(NSNotificationName name, id object);

CCKIT_EXTERN NSString * CCFileSizeStr(NSUInteger fileSize);

CCKIT_EXTERN UIWindow * CCGetAppWindowExceptRootViewControllerClass(Class className);
CCKIT_EXTERN UIWindow * CCGetAppWindow(void);
