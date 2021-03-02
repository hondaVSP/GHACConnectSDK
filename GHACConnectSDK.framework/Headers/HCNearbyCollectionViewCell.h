//
//  HCNearbyCollectionViewCell.h
//  vspios-honda-app
//
//  Created by 蔡宇航 on 2019/8/26.
//  Copyright © 2019 东软睿驰汽车技术有限公司. All rights reserved.
//
/// 周边collectionCell

#import <UIKit/UIKit.h>
#import <HondaConnectSDK/HCUIScale.h>
@class HCNearbyClassifyContentModel;

NS_ASSUME_NONNULL_BEGIN

#define CELL_NAME_NEARBY    @"nearbyCollectCell"
#define CELL_HEIGHT_NEARBY  hc_scale_by_screen_width(33.f)
@interface HCNearbyCollectionViewCell : UICollectionViewCell

- (void) reloadCell:(HCNearbyClassifyContentModel *)model;

@end

NS_ASSUME_NONNULL_END
