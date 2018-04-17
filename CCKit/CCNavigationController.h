//
//  CCNavigationController.h
//  CCKit
//
//  Created by 胡超 on 2018/3/23.
//  Copyright © 2018年 胡超., ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CCNavigationController : UINavigationController
@end

@interface UIViewController (CCNavigationController)
- (BOOL)shouldPopViewController;
@end
