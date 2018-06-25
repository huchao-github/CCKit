//
//  CCPageListViewController.h
//  CCKit
//
//  Created by 胡超 on 2017/11/27.
//  Copyright © 2017年 胡超., ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

static const NSInteger CCFirstPage = 1;

typedef NS_ENUM(NSInteger, CCPageViewType) {
    CCPageViewTypeTableViewPlain,
    CCPageViewTypeTableViewGrouped,
    CCPageViewTypeCollectionView,
};

@interface CCPageListViewController : UIViewController <UITableViewDataSource,UITableViewDelegate,UICollectionViewDataSource,UICollectionViewDelegate>

@property (nonatomic,readonly) CCPageViewType viewType;

@property (nonatomic,strong,readonly) UITableView *tableView;
@property (nonatomic,strong,readonly) UICollectionView *collectionView;
@property (nonatomic,strong,readonly) UICollectionViewFlowLayout *collectionViewLayout;
@property (nonatomic,strong,readonly) NSMutableArray *dataSource;

/** 当前加载的页数*/
@property (nonatomic,assign) int currentPage;

/** 自动请求数据 default is NO*/
@property (nonatomic,assign) BOOL disableAutoRequest;

- (instancetype)initWithViewType:(CCPageViewType)viewType;

- (Class)mjRefreshHeaderClass;

- (Class)mjRefreshFooterClass;

- (void)beginRefreshing;

- (void)endRefreshing;

- (void)requestPageList;

- (void)handleSuccessWithPageList:(NSArray *)pageList isLastPage:(BOOL)isLastPage;

- (void)handleFailureWithError:(NSError *)error;

@end
