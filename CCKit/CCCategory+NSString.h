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

/** md5值*/
@property (readonly) NSString *md5Str;
/** 文件md5值, 注意: self必须是一个文件路径*/
@property (readonly) NSString *fileMd5Str;
/** URL编码*/
@property (readonly) NSString *URLEncodedStr;
/** URL解码*/
@property (readonly) NSString *URLDecodedStr;
@property (readonly) NSString *(^addURLParameters)(NSDictionary *parameters);
/** DES加解密 padding手动填充0*/
@property (readonly) NSString *(^desEncrypt)(CCDESOptions options, BOOL padding, void *key, void *iv);
@property (readonly) NSString *(^desDecrypt)(CCDESOptions options, BOOL padding, void *key, void *iv);
/** 格式化日期*/
@property (readonly) NSDate *(^formatToDate)(NSString *dateFormat);

/** 是否包含中文*/
@property (readonly) BOOL chinese;
/** 拼音*/
@property (readonly) NSString *pinyinStr;
/** 拼音首字母*/
@property (readonly) NSString *pinyinFirstWord;

@end
