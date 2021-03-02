//
//  HCHomeFunctionConfigModel.h
//  GHACConnectSDK_Example
//
//  Created by 贾宇恒 on 2021/2/23.
//  Copyright © 2021 445878662@qq.com. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
/**首页功能配置*/
@interface HCHomeFunctionConfigModel : NSObject


/**首页车辆图片*/
@property (nonatomic, copy) NSString *homeVehicleImageUrl;
/**能源类型*/
@property (nonatomic, assign) NSInteger energyType;

/**远控项显隐*/
@property (nonatomic, assign) NSInteger remoteControlShown;
/**车况中心显隐*/
@property (nonatomic, assign) NSInteger vehicleConditionShown;
/**空调功能显隐*/
@property (nonatomic, assign) NSInteger airFunctionShown;
/**导航路线显隐*/
@property (nonatomic, assign) NSInteger navigationRouteShown;


/**空调交互类型1-弹层 2-跳页*/
@property (nonatomic, assign) NSInteger interactiveType;

/**空调开关 (alert)*/
@property (nonatomic, assign) NSInteger airAlertSwitchShown;
/**自动除霜开关 (alert)*/
@property (nonatomic, assign) NSInteger airAlertDefrostSwitchShown;
/**空调设定温度 (alert)*/
@property (nonatomic, assign) NSInteger airAlertTemperetureShown;

/**预约空调功能*/
//+ (NSInteger)appointmentAirShown;
/**空调开关 (跳页)*/
//+ (NSInteger)airPushSwitchShown;
/**空调除霜开关 (跳页)*/
//+ (NSInteger)airPushDefrostSwitch;
/**空调设置*/
//+ (NSInteger)airPushSetting;
/**空调设定温度*/
//+ (NSInteger)airPushTemperature;
/**自动除霜*/
//+ (NSInteger)airPushAutoDefrost;
/**延长10分钟*/
//+ (NSInteger)airPushDelayTenMinute;



/**远控开车锁显隐*/
@property (nonatomic, assign) NSInteger remoteControlUnlockShown;
/**远控关车锁显隐*/
@property (nonatomic, assign) NSInteger remoteControlLockShown;
/**远控开后备箱显隐*/
@property (nonatomic, assign) NSInteger remoteControlOpenTrunkShown;



/**车况中心车辆图片*/
@property (nonatomic, strong) NSURL *vehicleImageUrl;
/**引擎显隐*/
@property (nonatomic, assign) NSInteger engineShown;
/**车门锁显隐*/
@property (nonatomic, assign) NSInteger doorLockShown;
/**后备箱显隐*/
@property (nonatomic, assign) NSInteger trunkShown;
/**前大灯显隐*/
@property (nonatomic, assign) NSInteger headLampShown;
/**示廓灯显隐*/
@property (nonatomic, assign) NSInteger profileLampShown;
/**雾灯显隐*/
@property (nonatomic, assign) NSInteger fogLampShown;
/**双闪灯显隐*/
@property (nonatomic, assign) NSInteger doubleFlashShown;
/**充电口盖显隐*/
@property (nonatomic, assign) NSInteger chargingPortCoverShown;
/**空调动画显隐*/
@property (nonatomic, assign) NSInteger airAnimationShown;
/**空调温度显隐*/
@property (nonatomic, assign) NSInteger airTemperature;

@end

NS_ASSUME_NONNULL_END
