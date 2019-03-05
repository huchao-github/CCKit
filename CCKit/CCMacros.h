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

#define iOSver                  UIDevice.currentDevice.systemVersion.floatValue
#define iOSver_andEarlier(ver)  (iOSver < ((int)ver + 1))
#define iOSver_andLater(ver)    (iOSver >= (int)ver)
#define iOSver_x(ver)           (iOSver_andLater(ver) && iOSver_andEarlier(ver))

#define UIScreenBounds          UIScreen.mainScreen.bounds
#define UIScreenSize            UIScreen.mainScreen.bounds.size
#define UIScreenWidth           UIScreen.mainScreen.bounds.size.width
#define UIScreenHeight          UIScreen.mainScreen.bounds.size.height
#define UIScreenModeSize        UIScreen.mainScreen.currentMode.size
#define UIScreenModeWidth       UIScreen.mainScreen.currentMode.size.width
#define UIScreenModeHeight      UIScreen.mainScreen.currentMode.size.height
#define WeakSelf                __weak __typeof(&*self)WSelf = self
#define WeakObjc(objc,WObjc)    __weak __typeof(&*objc)WObjc = objc
#define RotateAngle(angle)      ((angle) * M_PI / 180)
#define ScreenScale(w)          ((w)/UIScreen.mainScreen.scale)
#define L(key)                  NSLocalizedString(key, nil)
#define IMG(imageName)          [UIImage imageNamed:imageName]

/** 屏幕尺寸宏定义*/
/** 3.5英寸屏幕: 640x960 iPhone4、iPhone4s */
#define IPHONE_3_5_inch (CGSizeEqualToSize(UIScreenModeSize, CGSizeMake( 640,  960)))

/** 4.0英寸屏幕: 640x1136 iPhone5、iPhone5s、iPhone5c、iPhoneSE*/
#define IPHONE_4_0_inch (CGSizeEqualToSize(UIScreenModeSize, CGSizeMake( 640, 1136)))

/** 4.7英寸屏幕: 750x1334 640x1136(放大模式) iPhone6、iPhone7、iPhone8*/
#define IPHONE_4_7_inch (CGSizeEqualToSize(UIScreenModeSize, CGSizeMake( 750, 1334)))

/** 5.5英寸屏幕: 1242x2208 1125x2001(放大模式) iPhone6Plus、iPhone7Plus、iPhone8Plus*/
#define IPHONE_5_5_inch (CGSizeEqualToSize(UIScreenModeSize, CGSizeMake(1242, 2208))||CGSizeEqualToSize(UIScreenModeSize, CGSizeMake(1125, 2001)))

/** 5.8英寸屏幕: 1125x2436 iPhoneX、iPhoneXs*/
#define IPHONE_5_8_inch (CGSizeEqualToSize(UIScreenModeSize, CGSizeMake(1125, 2436)))

/** 6.1英寸屏幕: 828x1792  iPhoneXR*/
#define IPHONE_6_1_inch (CGSizeEqualToSize(UIScreenModeSize, CGSizeMake( 828, 1792)))

/** 6.5英寸屏幕: 1242x2688 iPhoneXs Max*/
#define IPHONE_6_5_inch (CGSizeEqualToSize(UIScreenModeSize, CGSizeMake(1242, 2688)))


#endif /* CCMacros_h */
