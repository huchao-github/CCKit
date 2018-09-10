//
//  CCShareModalView.h
//  CCKit
//
//  Created by 胡超 on 2018/9/10.
//  Copyright © 2018年 胡超. All rights reserved.
//

#import "CCModalView.h"

typedef NS_ENUM(NSInteger, CCShareType) {
    CCShareTypeWXTimeline,  // 微信朋友圈
    CCShareTypeWXSession,   // 微信好友
    CCShareTypeQQ,          // QQ好友
    CCShareTypeQQZone,      // QQ空间
    CCShareTypeWeibo,       // 微博
};

@class CCShareModalView;
@protocol CCShareModalViewDelegate <NSObject>
- (void)shareModalView:(CCShareModalView *)shareModalView didSelectShareType:(CCShareType)shareType;
@end

@interface CCShareModalView : CCModalView
@property (nonatomic,weak) id<CCShareModalViewDelegate> delegate;
/** 间距 默认20.0f*/
@property (nonatomic,assign) CGFloat margin;

/** 需要注意的是图片尺寸必须为54x54*/
- (void)addShareType:(CCShareType)shareType image:(UIImage *)image name:(NSString *)name;

@end
