//
//  CCQRScanner.h
//  CCKit
//
//  Created by 胡超 on 2018/6/24.
//  Copyright © 2018年 胡超., ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CCQRScanner;

typedef NS_ENUM(NSInteger, CCQRScannerErrorCode) {
    /** 没有摄像头设备*/
    CCQRScannerErrorNoDevice,
    /** 没有摄像头访问权限*/
    CCQRScannerErrorNoPermission,
};

@protocol CCQRScannerDelegate <NSObject>
/** 启动失败：原因可能是没有摄像头权限，或者摄像头设备损坏*/
- (void)scanner:(CCQRScanner *)scanner didRunningFailWithError:(NSError *)error;
/** 扫描到二维码信息*/
- (void)scanner:(CCQRScanner *)scanner didDetectedString:(NSString *)string;
/** 从相册中选取的图片未识别到二维码*/
- (void)scannerUndetectedQRCodeFromAlbumPicture:(CCQRScanner *)scanner;
@end

@interface CCQRScanner : NSObject

@property (nonatomic,weak) id<CCQRScannerDelegate> delegate;
/** 摄像头渲染视图*/
@property (nonatomic,readonly)  UIView *displayView;
/** 自定义扫描覆盖层*/
@property (nonatomic,readwrite) UIView *customScanningView;
/** 扫描边角颜色，默认微信颜色 */
@property (nonatomic,strong) UIColor *tintColor;

- (void)startRunning;
- (void(^)(void))_startRunning;

- (void)stopRunning;
- (void(^)(void))_stopRunning;

/** 从相册中读取二维码*/
- (void)readQRCodeFromAlbumWithPresentedViewController:(UIViewController *)viewController;

@end
