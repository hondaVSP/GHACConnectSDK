//
//  HCHomeView.h
//  GHACConnectSDK_Example
//
//  Created by 蔡宇航 on 2021/2/26.
//  Copyright © 2021 445878662@qq.com. All rights reserved.
//

#import <UIKit/UIKit.h>
@class HCVehicleListModel;

NS_ASSUME_NONNULL_BEGIN

@interface HCHomeView : UIView

/**
 * @brief 实例化HomeView
 */
- (instancetype)initWithController:(UIViewController *)viewController
                      vehicleModel:(HCVehicleListModel*)vehicleModel;

/**
 * @brief 刷新HomeView
 */
- (void)reloadWithVehicleModel:(HCVehicleListModel *)vehicleModel;

@end

NS_ASSUME_NONNULL_END
