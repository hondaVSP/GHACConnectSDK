//
//  HCOpenURLUtils.h
//  vspios-honda-app
//
//  Created by 蔡宇航 on 2020/1/2.
//  Copyright © 2020 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

@class TencentLBSLocation;
@class HCVehicleGPSInfoModel;

NS_ASSUME_NONNULL_BEGIN

@interface HCOpenURLUtils : NSObject


#pragma mark - 导航至车跳转

/**
 * @brief 导航至车 打开苹果地图
 */
+ (void)openSystemMapNavigateToVehicle:(HCVehicleGPSInfoModel *)vehicleModel;


/**
 * @brief 导航至车  打开百度地图
 */
+ (void)openBMapNavigateToVehicle:(HCVehicleGPSInfoModel *)vehicleModel;


/**
 * @brief 导航至车  打开高德地图
 */
+ (void)openAMapNavigateToVehicle:(HCVehicleGPSInfoModel *)vehicleModel;


/**
 * @brief 导航至车  打开腾讯地图
 */
- (void)openQMapNavigateToVehicle:(HCVehicleGPSInfoModel *)vehicleModel;



@end

NS_ASSUME_NONNULL_END
