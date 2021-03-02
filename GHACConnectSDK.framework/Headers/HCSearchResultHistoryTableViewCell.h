//
//  HCSearchResultHistoryTableViewCell.h
//  vspios-honda-app
//
//  Created by 蔡宇航 on 2019/8/23.
//  Copyright © 2019 东软睿驰汽车技术有限公司. All rights reserved.
//
/// 搜索结果cell(非模糊搜索)

#import <UIKit/UIKit.h>
#import "HCCommonEnum.h"
@class HCQMapCommonSearchResModel;

NS_ASSUME_NONNULL_BEGIN

@interface HCSearchResultHistoryTableViewCell : UITableViewCell

@property (nonatomic, copy) void(^sendToCarAction)(void);

@property (nonatomic, copy) void(^setDestinationAction)(void);

@property (nonatomic, copy) void(^setFenceCenterAction)(void);

/**
 * 刷新tableCell
 */
- (void) reloadCell:(HCQMapCommonSearchResModel *)data withDisplayType:(HCPOIInfoDisplayType)type;

@end

NS_ASSUME_NONNULL_END
