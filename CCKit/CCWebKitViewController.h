//
//  CCWebKitViewController.h
//  CCKit
//
//  Created by 胡超 on 2017/11/17.
//  Copyright © 2017年 胡超., ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

@class WKWebViewJavascriptBridge;

@protocol CCJsCallDelegate <NSObject>
@end

@interface CCWebKitViewController : UIViewController <WKUIDelegate,WKNavigationDelegate>
{
@private
    WKWebViewJavascriptBridge *_JsCall;
}
@property (nonatomic,weak) id<CCJsCallDelegate> delegate;

@property (nonatomic,readonly) NSURL *URL;
@property (nonatomic,readonly) NSURLRequest *URLRequest;
@property (nonatomic,readonly) WKWebView *webView;

- (instancetype)initWithURL:(NSURL *)URL;
- (instancetype)initWithURL:(NSURL *)URL title:(NSString *)title;

- (void)loadURL:(NSURL *)URL;
- (void)loadURLRequest:(NSURLRequest *)URLRequest;

/** 该方法只会替换当前页面，不会产生backList*/
- (void)reloadURL:(NSURL *)URL;

#pragma mark - JSBridge

/** 子类重写，统一位置注册JS交互*/
- (void)registerNativeFunctions;
/** 注册原生方法供Js调用*/
- (void)registerNativeFunction:(NSString *)name selector:(SEL)selector returnVoid:(BOOL)returnVoid;
/** 处理参数，如需要对JS传过来的参数做统一处理，则重写该方法*/
- (id)proccessArgsIfNeed:(id)data;
/** 调用Js方法*/
- (void)callJsFunction:(NSString *)name data:(id)data;
- (void)callJsFunction:(NSString *)name data:(id)data callback:(void(^)(id rData))callback;

@end
