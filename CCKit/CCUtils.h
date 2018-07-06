//
//  CCUtils.h
//  CCKit
//
//  Created by 胡超 on 2018/7/6.
//  Copyright © 2018年 胡超., ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CCMacros.h"

CCKIT_EXTERN void CCAddNotifyObserver(id observer, SEL selector, NSNotificationName name);
CCKIT_EXTERN void CCPOSTNotify(NSNotificationName name);
CCKIT_EXTERN void CCPOSTNotifyWithObject(NSNotificationName name, id object);
