//
//  HCCommonEnum.h
//  vspios-honda-app
//
//  Created by 蔡宇航 on 2019/9/5.
//  Copyright © 2019 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HCCommonEnum : NSObject



//扫二维码类型
//typedef NS_ENUM(NSInteger,  HCScanQRType) {
//    HCScanQRTypeAll,          //扫码绑车、扫码登录、扫码验证FaceID
//    HCScanQRTypeBindingCar,   //扫码绑车
//    HCScanQRTypeCarLogin,     //扫码登录车机
//    HCScanQRTypeAuth,         //扫码验证FaceID
//};

//二维码识别类型（server返回）
typedef NSString *HCQRTypeString  NS_STRING_ENUM;

FOUNDATION_EXPORT HCQRTypeString const HCQRTypeString_CarBind;
FOUNDATION_EXPORT HCQRTypeString const HCQRTypeString_CarLogin;
FOUNDATION_EXPORT HCQRTypeString const HCQRTypeString_FaceAuth;



#pragma mark -

typedef NS_ENUM(NSUInteger, HCVehicleEnergyType) {
    HCVehicleEnergyTypeUnknown,
    /**油*/
    HCVehicleEnergyTypeOil,
    /**电*/
    HCVehicleEnergyTypeBattery,
    /**混动*/
    HCVehicleEnergyTypeHybird, 
};

typedef NS_ENUM(NSUInteger, HCVehicleGearboxType) {
    HCVehicleGearboxType_Unknown = 0,     //未知
    HCVehicleGearboxType_Automatic = 1,   //自动挡
    HCVehicleGearboxType_Manual = 2,      //手动挡
};

/**控车类型*/
typedef NS_ENUM(NSUInteger, HCControlType) {
    /**车锁*/
    HCControlTypeLock,
    /**后备箱*/
    HCControlTypeTrunk,
    /**寻车*/
    HCControlTypeFindVehicle,
    /**空调*/
    HCControlTypeAir,
    /**开始充电*/
    HCControlTypeStartCharge,
    /**停止充电*/
    HCControlTypeStopCharge,
    /**极限值设定*/
    HCControlTypeLimitSetting,
    /**开始供电*/
    HCControlTypeStartPowerSupply,
    /**停止供电*/
    HCControlTypeStopPowerSupply,
    /**类型置空*/
    HCControlTypeNothing,
};

/**授权方式*/
typedef NS_ENUM(NSUInteger, HCAuthType) {
    /**共同用车人*/
    HCAuthTypeCommonCarUser = 0,
    /**临时授权*/
    HCAuthTypeTemporaryAuth,
    /**单次授权*/
    HCAuthTypeSingleAuth,
};
/**授权范围*/
typedef NS_ENUM(NSUInteger, HCAuthScope) {
    /**车辆完整授权*/
    HCAuthScopeWhole = 0,
    /**仅后备箱*/
    HCAuthScopeTrunk,
    /**完整授权(不包含引擎)*/
    HCAuthScopeExceptEngine,
};
/**授权状态*/
typedef NS_ENUM(NSUInteger, HCAuthStatus) {
    /**待接收*/
    HCAuthStatusTobeAccepted,
    /**已接受*/
    HCAuthStatusIsAccepted,
    /**已放弃*/
    HCAuthStatusIsAbandoned,
    /**已过期*/
    HCAuthStatusIsOverdue,
    /**未生效*/
    HCAuthStatusIneffective
};


@end

NS_ASSUME_NONNULL_END
