//
//  HCVehicleSettingConfigModel.h
//  vspios-honda-app
//
//  Created by 贾宇恒 on 2021/1/28.
//  Copyright © 2021 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
/**车辆设置配置*/
@interface HCVehicleSettingConfigModel : NSObject

/**驾驶报告开关是否显示*/
@property (nonatomic, assign) NSInteger drivingReportSettingShown;
/**消息提醒是否显示*/
@property (nonatomic, assign) NSInteger hasMessageSetting;
/**对外供电通知*/
@property (nonatomic, assign) NSInteger dischargePushShown;
/**充电枪遗忘通知*/
@property (nonatomic, assign) NSInteger chargingPileForgettenPushShown;
/**极速充电通知*/
@property (nonatomic, assign) NSInteger speedChargePushShown;
/**定时充电通知*/
@property (nonatomic, assign) NSInteger timingChargePushShown;
/**预约空调通知*/
@property (nonatomic, assign) NSInteger appointmentAirConditioningPushShown;

@end

NS_ASSUME_NONNULL_END
