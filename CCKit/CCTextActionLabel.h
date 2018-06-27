//
//  CCTextActionLabel.h
//  CCKit
//
//  Created by 胡超 on 2018/6/28.
//  Copyright © 2018年 胡超., ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CCTextActionLabel : UIView

@property(nonatomic,strong) UIFont *        font;
@property(nonatomic,assign) NSTextAlignment textAlignment;

/** 添加普通文字*/
@property (nonatomic,readonly) void (^appendNormalText)(NSString *text, UIColor *textColor);
/** 添加点击文字*/
@property (nonatomic,readonly) void (^appendActionText)(NSString *text, UIColor *textColor, void(^tapAction)(void));
@end
