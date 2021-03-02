//
//  HCSearchFuzzyTableViewCell.h
//  vspios-honda-app
//
//  Created by 蔡宇航 on 2019/8/23.
//  Copyright © 2019 东软睿驰汽车技术有限公司. All rights reserved.
//
/// 搜索结果cell(模糊搜索)

#import <UIKit/UIKit.h>
@class HCQMapCommonSearchResModel;

NS_ASSUME_NONNULL_BEGIN

@interface HCSearchFuzzyTableViewCell : UITableViewCell

/**
 * 刷新tableCell
 */
- (void) reloadCell:(HCQMapCommonSearchResModel *)model;

@end

NS_ASSUME_NONNULL_END
