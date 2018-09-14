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

//#define CCIgnoreWarning(wFlags)
//#pragma clang diagnostic push
//#pragma clang diagnostic ignored "-Warc-performSelector-leaks"
//#define CCIgnoreWarningEnd
//#pragma clang diagnostic pop

#define CCTimestamp             [NSNumber numberWithInt:[NSDate.date timeIntervalSince1970]].stringValue
#define CCAppVersion            [NSBundle mainBundle].infoDictionary[@"CFBundleShortVersionString"]
#define CCAppVersionBuild       [NSBundle mainBundle].infoDictionary[@"CFBundleVersion"]
#define iOSVersion              UIDevice.currentDevice.systemVersion.floatValue
#define UIAppWindow             UIApplication.sharedApplication.delegate.window
#define UIScreenBounds          UIScreen.mainScreen.bounds
#define UIScreenSize            UIScreen.mainScreen.bounds.size
#define UIScreenWidth           UIScreen.mainScreen.bounds.size.width
#define UIScreenHeight          UIScreen.mainScreen.bounds.size.height
#define IPHONE_4                (CGSizeEqualToSize(UIScreenSize, CGSizeMake(320, 480))||CGSizeEqualToSize(UIScreenSize, CGSizeMake(480, 320)))
#define IPHONE_5                (CGSizeEqualToSize(UIScreenSize, CGSizeMake(320, 568))||CGSizeEqualToSize(UIScreenSize, CGSizeMake(568, 320)))
#define IPHONE_6                (CGSizeEqualToSize(UIScreenSize, CGSizeMake(375, 667))||CGSizeEqualToSize(UIScreenSize, CGSizeMake(667, 375)))
#define IPHONE_P                (CGSizeEqualToSize(UIScreenSize, CGSizeMake(414, 736))||CGSizeEqualToSize(UIScreenSize, CGSizeMake(736, 414)))
#define IPHONE_X                (CGSizeEqualToSize(UIScreenSize, CGSizeMake(375, 812))||CGSizeEqualToSize(UIScreenSize, CGSizeMake(812, 375)))
#define WeakSelf                __weak __typeof(&*self)WSelf = self
#define WeakObjc(objc,WObjc)    __weak __typeof(&*objc)WObjc = objc
#define RotateAngle(angle)      ((angle) * M_PI / 180)
#define ScreenScale(w)          ((w)/UIScreen.mainScreen.scale)
#define L(key)                  NSLocalizedString(key, nil)
#define IMG(imageName)          [UIImage imageNamed:imageName]

#endif /* CCMacros_h */
