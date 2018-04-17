//
//  CCCategory+NSString.h
//  CCKit
//
//  Created by 胡超 on 2017/12/25.
//  Copyright © 2017年 胡超., ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (CCKit)

@property (readonly) NSString *md5Str;
@property (readonly) NSString *urlEncodedStr;
@property (readonly) NSString *(^addURLParameters)(NSDictionary *parameters);

@end
