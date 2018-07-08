//
//  CCPageListViewController.h
//  CCKit
//
//  Created by 胡超 on 2017/11/27.
//  Copyright © 2017年 胡超., ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CCLoadingTipView.h"

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

/** 重写自定义MJRefreshHeader*/
- (Class)mjRefreshHeaderClass;

/** 重写自定义MJRefreshFooter*/
- (Class)mjRefreshFooterClass;

/** 开始刷新数据*/
- (void)beginRefreshing;

/** 停止刷新数据*/
- (void)endRefreshing;

/** 请求列表数据，在beginRefreshing、上拉刷新、下拉加载，该方法都会被调用，所以接口请求应该写在该方法里面*/
- (void)requestPageList;

/** 处理接口请求成功操作，该操作会根据传入的pageList和isLastPage自动刷新列表数据*/
- (void)handleSuccessWithPageList:(NSArray *)pageList isLastPage:(BOOL)isLastPage;

/** 处理接口请求成功操作，该方法会根据传入的emptyLoadingType类型，自动添加列表数据为空的提示*/
- (void)handleSuccessWithPageList:(NSArray *)pageList isLastPage:(BOOL)isLastPage emptyLoadingType:(CCLoadingTipType)emptyLoadingType;

/** 处理接口请求成功操作，该方法会根据传入的topOffset调整CCLoadingTipView的位置，比如列表头部有banner广告，则一般传入banner的高度*/
- (void)handleSuccessWithPageList:(NSArray *)pageList isLastPage:(BOOL)isLastPage emptyLoadingType:(CCLoadingTipType)emptyLoadingType topOffset:(CGFloat)topOffset;

/** 处理接口请求失败操作，调用该方法会停止MJRefreshHeader和MJRefreshFooter的刷新动作*/
- (void)handleFailure;

/** 处理接口请求失败操作，该方法会根据传入的error，自动添加列表请求失败的CCLoadingTipView提示*/
- (void)handleFailureWithError:(NSError *)error;

/** 处理接口请求失败操作，和handleSuccess传入的topOffset作用一致*/
- (void)handleFailureWithError:(NSError *)error topOffset:(CGFloat)topOffset;

@end
