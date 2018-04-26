//
//  CCTableViewController.h
//  CCKit
//
//  Created by 胡超 on 2018/4/25.
//  Copyright © 2018年 胡超., ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CCTableViewSection.h"

@interface CCTableViewController : UIViewController <UITableViewDataSource,UITableViewDelegate>

@property (nonatomic,readonly) UITableView *tableView;

- (instancetype)initWithStyle:(UITableViewStyle)style;

- (void)loadStaticTableView;

- (void)addSection:(CCTableViewSection *)section;
- (void)insertSection:(CCTableViewSection *)section atIndex:(NSInteger)atIndex;

@end
