//
//  HCNearbyCollectHeaderView.h
//  vspios-honda-app
//
//  Created by 蔡宇航 on 2019/8/26.
//  Copyright © 2019 东软睿驰汽车技术有限公司. All rights reserved.
//
/// 周边CollectionHeader

#import <UIKit/UIKit.h>
#import <HondaConnectSDK/HCUIScale.h>
@class HCNearbyClassifyModel;

NS_ASSUME_NONNULL_BEGIN

#define CELL_HEIGHT_NEARBY_HEADER   hc_scale_by_screen_width(62.f)
#define CELL_HEADER_NAME_NEARBY     @"nearbyCollectHeader"
@interface HCNearbyCollectHeaderView : UICollectionReusableView

- (void) reloadHeader:(HCNearbyClassifyModel *)model;

@end

#define CELL_HEIGHT_NEARBY_FOOTER   1.f
#define CELL_FOOTER_NAME_NEARBY     @"nearbyCollectFooter"
@interface HCNearbyCollectFooterView : UICollectionReusableView

@end

NS_ASSUME_NONNULL_END
