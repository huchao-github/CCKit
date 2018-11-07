//
//  CCCategory+NSDate.h
//  CCKit
//
//  Created by 胡超 on 2018/11/8.
//  Copyright © 2018年 胡超., ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (CCKit)
/** 格式化日期 */
@property (readonly) NSString *(^formatToStr)(NSString *dateFormat);

@end
