//
//  CCCategory+NSError.h
//  CCKit
//
//  Created by 胡超 on 2020/2/26.
//  Copyright © 2020年 胡超., ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSError (CCKit)
/** -[NSError errorWithDomain:code:userInfo:] */
@property (class,readonly) NSError *(^error)(NSErrorDomain domain, NSInteger code, NSString * _Nullable msg);

@end

NS_ASSUME_NONNULL_END
