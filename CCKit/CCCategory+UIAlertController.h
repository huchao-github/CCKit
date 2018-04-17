//
//  CCCategory+UIAlertController.h
//  CCKit
//
//  Created by 胡超 on 2018/1/29.
//  Copyright © 2018年 胡超., ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIAlertController (CCKit)

@property (class,readonly) void(^alert)(NSString *title, NSString *message, NSArray *buttons, void(^actions)(NSInteger buttonIndex));

@end
