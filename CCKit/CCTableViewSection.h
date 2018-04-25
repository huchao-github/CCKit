//
//  CCTableViewSection.h
//  CCKit
//
//  Created by 胡超 on 2018/4/19.
//  Copyright © 2018年 胡超., ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CCTableViewCell.h"

@interface CCTableViewSection : NSObject

@property (nonatomic,readonly) NSInteger rowCount;

@property (nonatomic,readonly) NSString *sectionTitle;
@property (nonatomic,readonly,strong) UIView *sectionHeaderView;
@property (nonatomic,readonly,strong) UIView *sectionFooterView;


@property (nonatomic,assign) CGFloat heightForHeader;
@property (nonatomic,assign) CGFloat heightForFooter;

- (instancetype)initWithSectionTitle:(NSString *)sectionTitle;
- (instancetype)initWithSectionHeaderView:(UIView *)sectionHeaderView;
- (instancetype)initWithSectionHeaderView:(UIView *)sectionHeaderView sectionFooterView:(UIView *)sectionFooterView;
- (instancetype)initWithHeightForHeader:(CGFloat)heightForHeader;
- (instancetype)initWithHeightForFooter:(CGFloat)heightForFooter;
- (instancetype)initWithHeightForHeader:(CGFloat)heightForHeader heightForFooter:(CGFloat)heightForFooter;

- (void)addCell:(CCTableViewCell *)cell;
- (CCTableViewCell *)cellForRow:(NSInteger)row;

@end
