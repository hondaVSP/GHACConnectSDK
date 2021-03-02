//
//  HCDBManager.h
//  SealTalk
//
//  Created by LiFei on 2019/5/31.
//  Copyright © 2019 RongCloud. All rights reserved.
//

#import <Foundation/Foundation.h>
@class HCQMapCommonSearchResModel;

NS_ASSUME_NONNULL_BEGIN

@interface HCDBManager : NSObject

+ (BOOL)openDB:(NSString *)path;

+ (void)closeDB;


#pragma mark - SearchLocationHistory



//查询历史记录 page页码 pageSize每页条数
+ (NSArray<HCQMapCommonSearchResModel *> *)selSearchHistoryFrom:(NSInteger)from
                                                       offset:(NSInteger)offset;

//查询历史记录总数
+ (NSInteger)selSearchHistoryCount;

//保存历史记录
+ (void)saveSearchHistory:(NSArray<HCQMapCommonSearchResModel *>*)searchHistory;

//删除搜索历史记录
+ (void)deleteSearchHistory:(NSArray<HCQMapCommonSearchResModel *>*)historyList;

//删除所有历史记录
+ (void)deleteAllSearchHistory;



@end

NS_ASSUME_NONNULL_END
