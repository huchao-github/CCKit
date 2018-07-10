//
//  CCTableViewController.h
//  CCKit
//
//  Created by 胡超 on 2018/4/25.
//  Copyright © 2018年 胡超., ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CCTableViewSection.h"
#import "CCTableViewFixedHeader.h"

@interface CCTableViewController : UIViewController <UITableViewDataSource,UITableViewDelegate>

/** 给automaticallyAdjustsScrollViewInsets赋值时会同时判断iOS11，并且设置tableView的contentInsetAdjustmentBehavior
 * automaticallyAdjustsScrollViewInsets = YES, contentInsetAdjustmentBehavior = UIScrollViewContentInsetAdjustmentAutomatic
 * automaticallyAdjustsScrollViewInsets = NO,  contentInsetAdjustmentBehavior = UIScrollViewContentInsetAdjustmentNever
 *
 * @property(nonatomic,assign) BOOL automaticallyAdjustsScrollViewInsets
 */

@property (nonatomic,readonly) UITableView *tableView;
/** 顶部固定View, default is nil*/
@property (nonatomic,strong) CCTableViewFixedHeader *fixedHeaderView;

- (instancetype)initWithStyle:(UITableViewStyle)style;
/** 在该方法内创建静态单元格*/
- (void)loadStaticTableView;
/** 如果要额外设置tableView的contentInset，需要在该方法内设置*/
- (void)loadFixedHeaderViewIfNeed;

- (void)addSection:(CCTableViewSection *)section;
- (void)insertSection:(CCTableViewSection *)section atIndex:(NSInteger)atIndex;

@end
