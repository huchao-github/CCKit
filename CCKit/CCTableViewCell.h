//
//  CCTableViewCell.h
//  CCKit
//
//  Created by 胡超 on 2018/4/19.
//  Copyright © 2018年 胡超., ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^CCTableViewCellSelectedHandler)(void);

@interface CCTableViewCell : UITableViewCell

@property (nonatomic,assign) CGFloat cellHeight;
@property (nonatomic,copy) CCTableViewCellSelectedHandler selectedHandler;

+ (instancetype)customCell;
+ (instancetype)normalCellWithTitle:(NSString *)title;
+ (instancetype)normalCellWithTitle:(NSString *)title accessoryType:(UITableViewCellAccessoryType)accessoryType;
+ (instancetype)normalCellWithTitle:(NSString *)title selectionStyle:(UITableViewCellSelectionStyle)selectionStyle accessoryType:(UITableViewCellAccessoryType)accessoryType;
+ (instancetype)normalCellWithTitle:(NSString *)title selectedHandler:(CCTableViewCellSelectedHandler)selectedHandler;
+ (instancetype)normalCellWithTitle:(NSString *)title detailText:(NSString *)detailText selectedHandler:(CCTableViewCellSelectedHandler)selectedHandler;
+ (instancetype)normalCellWithTitle:(NSString *)title imageName:(NSString *)imageName;
+ (instancetype)normalCellWithTitle:(NSString *)title imageName:(NSString *)imageName accessoryType:(UITableViewCellAccessoryType)accessoryType;
+ (instancetype)normalCellWithTitle:(NSString *)title imageName:(NSString *)imageName selectionStyle:(UITableViewCellSelectionStyle)selectionStyle accessoryType:(UITableViewCellAccessoryType)accessoryType;
+ (instancetype)normalCellWithTitle:(NSString *)title imageName:(NSString *)imageName selectedHandler:(CCTableViewCellSelectedHandler)selectedHandler;
+ (instancetype)normalCellWithTitle:(NSString *)title imageName:(NSString *)imageName detailText:(NSString *)detailText selectedHandler:(CCTableViewCellSelectedHandler)selectedHandler;
+ (instancetype)normalCellWithTitle:(NSString *)title imageName:(NSString *)imageName detailText:(NSString *)detailText selectionStyle:(UITableViewCellSelectionStyle)selectionStyle accessoryType:(int)accessoryType selectedHandler:(CCTableViewCellSelectedHandler)selectedHandler;

@end
