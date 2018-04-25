//
//  CCInAppPurchaseHelper.h
//  CCKit
//
//  Created by 胡超 on 2018/3/21.
//  Copyright © 2018年 胡超., ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^CCIAPSuccess)(NSString *receiptData);
typedef void(^CCIAPFailure)(BOOL isCanceled, NSError *error);

@interface CCInAppPurchaseHelper : NSObject

@property (nonatomic,copy) CCIAPSuccess successHandler;
@property (nonatomic,copy) CCIAPFailure failureHandler;

/** 内购订单验证参数 {"receipt-data":"xxxxx"}*/
//@property (nonatomic,readonly) NSString *receiptData;

+ (CCInAppPurchaseHelper *)helper;

- (void)payForProductIdentifier:(NSString *)identifier success:(CCIAPSuccess)success failure:(CCIAPFailure)failure;

//- (void)pay:(CCPayment *)payment unprocessed:(void(^)(NSError *error))unprocessed success:(void(^)(void))success failure:(void(^)(NSError *error))failure;

@end
