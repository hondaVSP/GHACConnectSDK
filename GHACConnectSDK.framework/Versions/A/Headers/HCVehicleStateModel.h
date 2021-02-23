//
//  HCVehicleStateModel.h
//  GHACConnectSDK_Example
//
//  Created by 蔡宇航 on 2021/2/18.
//  Copyright © 2021 445878662@qq.com. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HCVehicleStateModel : NSObject

/**空调开关状态*/
@property (nonatomic, assign) NSInteger airconstatus;
/**空调除雾开关*/
@property (nonatomic, assign) NSInteger defrostSwitch;
/**空调温度18.0~32.0℃*/
@property (nonatomic, assign) CGFloat airconTemperatureSettingDR;
/**剩余电量*/
@property (nonatomic, copy)   NSString *soc;
/**车门锁状态(开, 关)*/
@property (nonatomic, assign) NSInteger doorlockstatus;
/**引擎状态 0 IG-ON 转速不为0   1 OFF 车辆熄火   2 ACC-ON   3 IG-ON 转速为0 */
@property (nonatomic, assign) NSInteger enginestatus;
/**雾灯状态(开, 关)*/
@property (nonatomic, assign) NSInteger foglampstatus;
/**续航里程 (不分油电)*/
@property (nonatomic, copy) NSString *remainderMileage;
/**大灯状态(开, 关)*/
@property (nonatomic, assign) NSInteger headlampstatus;
/**剩余油量*/
@property (nonatomic, copy)   NSString *oil;
/**示廓灯状态(开, 关)*/
@property (nonatomic, assign) NSInteger profilelampstatus;
/**上次更新时间*/
@property (nonatomic, copy)   NSString *sendingtime;
/**后备箱状态(开, 关)*/
@property (nonatomic, assign) NSInteger trunklockstatus;
/**左前门开关状态(0关, 1开)*/
@property (nonatomic, assign) NSInteger leftFrontDoorLockStatus;
/**左后门开关状态*/
@property (nonatomic, assign) NSInteger leftRearDoorLockStatus;
/**右前门开关状态*/
@property (nonatomic, assign) NSInteger rightFrontDoorLockStatus;
/**右后门开关状态*/
@property (nonatomic, assign) NSInteger rightRearDoorLockStatus;
/**双闪状态 (0关, 1开)*/
@property (nonatomic, assign) NSInteger doubleflash;
/**充电状态 0-未充电  2-充电中*/
@property (nonatomic, assign) NSInteger electricChargingStatus;
/**预计完成时间*/
@property (nonatomic, copy) NSString *chargingCompletionPredictionTime;
/**充电枪连接状态 0-未连接 1-充电 2-给电 1和2枚举现阶段都可以算作已连接*/
@property (nonatomic, assign) NSInteger pluginStatus;
/**充电模式 0-关 1-100V慢充 2-200V慢充 3-快速充电*/
@property (nonatomic, assign) NSInteger electricChargingMode;
/**下次定时充电位置*/
@property (nonatomic, assign) NSInteger electricChargingTimingPosition;
/**下次定时充电时间*/
@property (nonatomic, copy) NSString *electricChargingTimingTime;
/**下次定时充电日期*/
@property (nonatomic, copy) NSString *electricChargingTimingWeek;
/**最大充电量*/
@property (nonatomic, assign) NSInteger maxPower;
/**暖机状态0不显示, 1暖机中*/
@property (nonatomic, assign) NSInteger warmUpStatus;
/**给电状态 0-关闭 1-供电*/
@property (nonatomic, assign) NSInteger externalPowerSupplyStatus;
/**空调下次执行时间 24小时制 例：23:10*/
@property (nonatomic, copy) NSString *airTimingTime;
/**空调下次执行日期 今日/明日/周几/下周几*/
@property (nonatomic, copy) NSString *airTimingWeek;
/**给电预计完成时间 错误默认值 -- 单位小时*/
@property (nonatomic, copy) NSString *powerSupplyRemainingTime;
/**充电口盖 0-关 1-开*/
@property (nonatomic, assign) NSInteger chargingCoverStatus;
/**外部最低给电量 错误默认值 --*/
@property (nonatomic, copy) NSString *externalPowerSupplyLowerLimit;
/**空调执行结束时间  错误默认值 --*/
@property (nonatomic, copy) NSString *airExecutionEndTime;
/**寻车状态*/
@property (nonatomic, assign) NSInteger carFinder;

@end

NS_ASSUME_NONNULL_END
