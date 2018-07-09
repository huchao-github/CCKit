//
//  CCCategory+UITextField.h
//  CCKit
//
//  Created by 胡超 on 2018/6/27.
//  Copyright © 2018年 胡超., ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITextField (CCKit)
@property (nonatomic,strong) UIColor *placeholderColor;
/** @important!!! 设置该属性需要先设置placeholderColor*/
@property (nonatomic,copy) NSString *_placeholder;

@end
