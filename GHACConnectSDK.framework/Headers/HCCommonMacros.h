//
//  HCCommonMacros.h
//  HondaApp_iOS
//
//  Created by 苏超 on 2019/7/16.
//  Copyright © 2019 东软睿驰汽车技术有限公司. All rights reserved.
//

//全局标记字符串， 用户 通知、存储
#ifndef HCCommonMacros_h
#define HCCommonMacros_h

#pragma mark - 用户相关

/** 点击通知栏进入应用*/
#define KUserDidNotiCenter      @"0"
/** 用户id*/
#define KUserId                 @"KUserId"
/** 用户手机号*/
#define KUserPhoneNum           @"KUserPhoneNum"
/** accessToken*/
#define KAccessToken            @"KAccessToken"
/** refreshToken*/
#define KRefreshToken           @"KRefreshToken"
/** 区分登录进入App还是直接进入App*/
#define KLoginToAppFlag         @"KLoginToApp"
/** 大陆accessToken本地缓存的Key*/
#define CACHE_ACCESSTOKEN_KEY   @"cacheAccessToken"

/** 当前用户定位位置*/
#define KUserLocation           @"KUserLocation"
/** 是否绑定过车辆*/
#define HasBindCarKey           [NSString stringWithFormat:@"%@HasBindCarKey", [UserServiceManager currentUser].userId]
/** 是否选择了不再提醒退出组队无法共享位置*/
#define KQuitPageLostMessage    @"KQuitPageLostMessage"
/** 是否选择了不再提醒PIN验证成功弹窗*/
#define KNotShowPINValidateSuccess  @"KNotShowPINValidateSuccess"


/**记录31AA用户操作空调温度*/
#define AirTemperature31AAKey @"AirTemperature31AAKey"
/**记录31AA用户操作自动除霜*/
#define AirAutoDefrosting31AAKey @"AirAutoDefrosting31AAKey"
/**记录31AA用户空调执行时间*/
#define AirDuration31AAKey      @"AirDuration31AAKey"
/**记录31AA用户首次添加预约空调任务*/
#define AirAppointmentFirstKey  @"AirAppointmentFirstKey"
/**记录车况中心强制刷新状态*/
#define ForceRefreshKey @"ForceRefreshKey"
/**记录本地是否勾选过开启空调需要开启引擎弹窗的checkbox*/
#define AirOnBeforeEngineKey @"airOnBeforeEngineKey"
/**记录31AA强制唤醒勾选checkbox*/
#define ForceRefreshCheckedKey @"ForceRefreshCheckedKey"
/**记录本地是否勾选过蓝牙控制项启动引擎弹窗的checkbox*/
#define BlueToothEngineStartCheckedKey  @"BlueToothEngineStartCheckedKey"

/** App使用模式*/
#define KAppUseMode             @"KAppUseMode"

/** 当前Server环境*/
#define KServerEnvironment      @"KServerEnvironment"
/** 测试环境VSPHost信息*/
#define KVSPHostTest            @"KVSPHostTest"
/** 开发环境VSPHost信息*/
#define KVSPHostDev             @"KVSPHostDev"
/** 系统环境VSPHost信息*/
#define KVSPHostSystem          @"KVSPHostSystem"
/** 本番(正式)环境VSPHost信息*/
#define KVSPHostFormal          @"KVSPHostFormal"

#ifdef DEBUG
/** Mock环境VSPHost信息*/
#define KVSPHostMock            @"KVSPHostMock"
#endif




#pragma mark - 地图相关（含标注的title、默认经纬度）

#define HCANNOTATION_VEHICLE                @"HCAnnotationVehicle"  // 车辆标注
#define HCANNOTATION_USER                   @"HCAnnotationUser"     // 用户标注
#define HCANNOTATION_SEARCH                 @"HCAnnotationSearch"   // 搜索结果标注
#define HCANNOTATION_TEAM_MEMBER_INFO       @"HCANNOTATIONTEAMMEMBERINFO"   // 车队成员位置标注
#define HCANNOTATION_TEAM_DESTINATION       @"HCANNOTATIONTEAMDESTINATION"  // 车队终点位置标注
#define HCANNOTATION_FENCE_FENCECENTER      @"HCANNOTATIONFENCECENTER"      // 围栏-围栏中心标注
#define HCANNOTATION_FENCE_VEHICLE          @"HCANNOTATIONFENCEVEHICLE"     // 围栏-车辆位置
#define HCANNOTATION_CHARGE_VEHICLE         @"HCANNOTATIONCHARGEVEHICLE"    // 充电-车辆位置
#define HCCOORDINATE2D_DEFAULT      CLLocationCoordinate2DMake(39.9046900000, 116.4071700000)       //默认经纬度


#pragma mark - 全局提示文案相关

/// 网络异常请求失败描述
#define HC_HTTP_REQUEST_DESC_NETERROR       @"网络异常，请检查网络"
/// 通用网络请求失败描述
#define HC_HTTP_REQUEST_DESC_COMMONERROR    @"请求失败"

/// 无车辆
#define HC_SERVICE_BIND_VEHICLE        @"请绑定车辆后使用该服务"
/// 授权车辆不能使用该功能
#define HC_SERVICE_AUTH_VEHICLE        @"授权车辆不能使用该服务"

/// 无法获取到车辆位置
#define HC_HTTP_REQUEST_DESC_VEHICLE_LOCATION_NOTFOUND      @"无法获取到车辆位置"


#endif /* HCCommonMacros_h */
