//
//  CCCategory+NSDictionary.h
//  CCKit
//
//  Created by 胡超 on 2017/12/25.
//  Copyright © 2017年 胡超., ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (CCKit)

@property (readonly) NSString *urlQuery;

+ (NSDictionary *)dictionaryWithContentsOfJsonFile:(NSString *)path encoding:(NSStringEncoding)encoding;

/** 清理Null对象*/
- (NSDictionary *)dictionaryWithClearNullObjects;
/** 合并字典*/
- (NSDictionary *)dictionaryByAppendingDictionary:(NSDictionary *)aDictionary;

@end
