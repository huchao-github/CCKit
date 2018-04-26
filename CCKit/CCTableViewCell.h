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

//@property (nonatomic,strong) UIImageView *iconView;
//@property (nonatomic,strong) UILabel *titleLabel;

@property (nonatomic,assign) CGFloat cellHeight;

//@property (nonatomic,weak) id   actionTarget;
//@property (nonatomic) SEL       actionSelector;
@property (nonatomic,copy) CCTableViewCellSelectedHandler selectedHandler;

+ (instancetype)customCell;
+ (instancetype)normalCellWithTitle:(NSString *)title;
+ (instancetype)normalCellWithTitle:(NSString *)title accessoryType:(int)accessoryType;
+ (instancetype)normalCellWithTitle:(NSString *)title selectionStyle:(BOOL)selectionStyle accessoryType:(int)accessoryType;
+ (instancetype)normalCellWithTitle:(NSString *)title selectedHandler:(CCTableViewCellSelectedHandler)selectedHandler;
+ (instancetype)normalCellWithTitle:(NSString *)title detailText:(NSString *)detailText selectedHandler:(CCTableViewCellSelectedHandler)selectedHandler;
+ (instancetype)normalCellWithTitle:(NSString *)title imageName:(NSString *)imageName;
+ (instancetype)normalCellWithTitle:(NSString *)title imageName:(NSString *)imageName selectedHandler:(CCTableViewCellSelectedHandler)selectedHandler;
+ (instancetype)normalCellWithTitle:(NSString *)title imageName:(NSString *)imageName detailText:(NSString *)detailText selectedHandler:(CCTableViewCellSelectedHandler)selectedHandler;
+ (instancetype)normalCellWithTitle:(NSString *)title imageName:(NSString *)imageName detailText:(NSString *)detailText selectionStyle:(BOOL)selectionStyle accessoryType:(int)accessoryType selectedHandler:(CCTableViewCellSelectedHandler)selectedHandler;

@end
