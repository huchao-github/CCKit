//
//  CCMacros.h
//  CCKit
//
//  Created by 胡超 on 2018/3/18.
//  Copyright © 2018年 胡超. All rights reserved.
//

#ifndef CCMacros_h
#define CCMacros_h

#ifdef __cplusplus
#define CCKIT_EXTERN extern "C" __attribute__((visibility ("default")))
#else
#define CCKIT_EXTERN extern __attribute__((visibility ("default")))
#endif

#define CCIgnorePerformSelectorWarningBegin \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Warc-performSelector-leaks\"")
#define CCIgnorePerformSelectorWarningEnd \
_Pragma("clang diagnostic pop")

#define CCTimestamp             [NSNumber numberWithInt:[NSDate.date timeIntervalSince1970]].stringValue
#define CCAppVersionCode        ((NSNumber *)[NSBundle mainBundle].infoDictionary[@"CFBundleVersion"]).intValue
#define CCAppVersionName        ((NSString *)[NSBundle mainBundle].infoDictionary[@"CFBundleShortVersionString"])
#define iOSVersion              UIDevice.currentDevice.systemVersion.floatValue
#define UIAppWindow             UIApplication.sharedApplication.delegate.window
#define UIScreenBounds          UIScreen.mainScreen.bounds
#define UIScreenSize            UIScreen.mainScreen.bounds.size
#define UIScreenWidth           UIScreen.mainScreen.bounds.size.width
#define UIScreenHeight          UIScreen.mainScreen.bounds.size.height
#define IPHONE_4                CGSizeEqualToSize(UIScreenSize, CGSizeMake(320, 480))
#define IPHONE_5                CGSizeEqualToSize(UIScreenSize, CGSizeMake(320, 568))
#define IPHONE_6                CGSizeEqualToSize(UIScreenSize, CGSizeMake(375, 667))
#define IPHONE_P                CGSizeEqualToSize(UIScreenSize, CGSizeMake(414, 736))
#define IPHONE_X                CGSizeEqualToSize(UIScreenSize, CGSizeMake(375, 812))
#define WeakSelf                __weak __typeof(&*self)WSelf = self
#define WeakObjc(objc,WObjc)    __weak __typeof(&*objc)WObjc = objc
#define RotateAngle(angle)      ((angle) * M_PI / 180)
#define ScreenScale(w)          ((w)/UIScreen.mainScreen.scale)
#define L(key)                  NSLocalizedString(key, nil)
#define IMG(imageName)          [UIImage imageNamed:imageName]

#endif /* CCMacros_h */
