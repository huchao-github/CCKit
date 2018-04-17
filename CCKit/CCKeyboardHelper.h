//
//  CCKeyboardHelper.h
//  CCKit
//
//  Created by 胡超 on 2018/3/31.
//  Copyright © 2018年 胡超., All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface CCKeyboardHelper : NSObject

@property (nonatomic,assign) BOOL isShowKeyboard;
@property (nonatomic,assign) CGFloat keyboardHeight;

+ (CCKeyboardHelper *)helper;

@end
