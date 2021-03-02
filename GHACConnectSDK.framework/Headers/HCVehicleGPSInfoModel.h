//
//  HCVehicleGPSInfoModel.h
//  vspios-honda-app
//
//  Created by 蔡宇航 on 2019/8/20.
//  Copyright © 2019 东软睿驰汽车技术有限公司. All rights reserved.
//
/// 车辆位置信息查询(防盗追踪，GPS查询) 数据模型

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HCVehicleGPSInfoModel : NSObject

@property (nonatomic, copy)   NSString *latitude;

@property (nonatomic, copy)   NSString *longitude;

@property (nonatomic, copy)   NSString *vehicleNickName;

@property (nonatomic, copy)   NSString *vin;

@property (nonatomic, assign) long sendingTime;

@end

NS_ASSUME_NONNULL_END
