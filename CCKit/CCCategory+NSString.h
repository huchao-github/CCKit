//
//  CCCategory+NSString.h
//  CCKit
//
//  Created by 胡超 on 2017/12/25.
//  Copyright © 2017年 胡超., ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(uint32_t, CCDESOptions) {
    kCCDESOptionPKCS7Padding    = 0x0001,
    kCCDESOptionECBMode         = 0x0002,
};

@interface NSString (CCKit)

@property (readonly) NSString *md5Str;
@property (readonly) NSString *urlEncodedStr;
@property (readonly) NSString *(^addURLParameters)(NSDictionary *parameters);
/** DES加解密 padding手动填充0*/
@property (readonly) NSString *(^desEncrypt)(CCDESOptions options, BOOL padding, void *key, void *iv);
@property (readonly) NSString *(^desDecrypt)(CCDESOptions options, BOOL padding, void *key, void *iv);

@end
