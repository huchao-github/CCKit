//
//  CCCategory+NSBundle.h
//  CCKit
//
//  Created by 胡超 on 2019/1/2.
//  Copyright © 2019年 胡超., ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSBundle (CCKit)
/** Version */
@property (nonatomic,readonly) NSString *CFBundleShortVersionString;
/** Build */
@property (nonatomic,readonly) NSString *CFBundleVersion;

@end
