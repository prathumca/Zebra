//
//  ZBChangesTableViewController.h
//  Zebra
//
//  Created by Thatchapon Unprasert on 2/6/2019
//  Copyright © 2019 Wilson Styres. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <ZBRefreshableTableViewController.h>
@import SafariServices;
@class ZBDatabaseManager;

NS_ASSUME_NONNULL_BEGIN

@interface ZBChangesTableViewController : ZBRefreshableTableViewController <UIViewControllerPreviewingDelegate, SFSafariViewControllerDelegate>
@property (nonatomic, assign) BOOL batchLoad;
@property (nonatomic, assign) BOOL isPerformingBatchLoad;
@property (nonatomic, assign) BOOL continueBatchLoad;
@property (nonatomic, assign) int batchLoadCount;
@property (readwrite, copy, nonatomic) NSArray *tableData;
@property NSMutableArray *redditPosts;
- (void)refreshTable;
@end

NS_ASSUME_NONNULL_END