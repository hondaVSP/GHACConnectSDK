//
//  HCTravelSearchTableView.h
//  vspios-honda-app
//
//  Created by 蔡宇航 on 2019/8/27.
//  Copyright © 2019 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

/// table分类
typedef NS_ENUM(NSInteger, HCTravelTableType) {
    HCTravelTableType_History   =   0,
    HCTravelTableType_Search    =   1,
    HCTravelTableType_NetError  =   2,
};

NS_ASSUME_NONNULL_BEGIN

@interface HCTravelSearchTableView : UITableView

@property (nonatomic, assign) HCTravelTableType tableType;

@property (nonatomic, copy) void(^historyMoreAction)(void);

@property (nonatomic, copy) void(^historyClearAction)(void);

@property (nonatomic, copy) void(^searchMoreAction)(void);

@property (nonatomic, strong) NSMutableArray *dataArray;    // tableview的数据源

@property (nonatomic, strong) NSMutableArray *tempDataArray;   //tableview的临时数据源(note:当tableView滚动时，数据返回，该数组作为临时存储，刷新完成之后清空)

@end



NS_ASSUME_NONNULL_END
