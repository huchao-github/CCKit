//
//  CCTableViewFixedHeader.h
//  CCKit
//
//  Created by 胡超 on 2018/7/1.
//  Copyright © 2018年 胡超. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CCTableViewFixedHeader : UIView
/** 初始固定高度*/
@property (nonatomic,readonly) CGFloat fixedHeaderHeight;
/** 顶部安全距离*/
@property (nonatomic,readonly) CGFloat safeAreaTop;
/** 是否滑动到顶部导航栏位置停留*/
@property (nonatomic,assign) BOOL scrollTopNavBarPosition;
@end
