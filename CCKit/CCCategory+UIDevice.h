//
//  CCCategory+UIDevice.h
//  CCKit
//
//  Created by 胡超 on 2018/1/29.
//  Copyright © 2018年 胡超., ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIDevice (CCKit)

/** eg: iPhone4,1*/
@property (readonly) NSString *machineCode;

/** ip*/
@property (readonly) NSString *ipAddress;

@end
