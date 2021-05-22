//
//  GHACConnectHandle.h
//  GHACConnectSDK
//
//  Created by Zac on 2021/2/23.
//

#import <Foundation/Foundation.h>
#import "GHACConnectModel.h"

//环境枚举
typedef NS_ENUM(NSUInteger, HCEnvironmentType) {
    HCEnvironmentTypeFormal,    //正式环境
    HCEnvironmentTypeSystem,    //系统环境
};

NS_ASSUME_NONNULL_BEGIN

@protocol GHACConnectManagerDelegate <NSObject>

@optional
/**
 * GHAC Token失效代理
 */
- (void)tokenInvaild;

@end

@interface GHACConnectManager : NSObject

@property (nonatomic, weak) id<GHACConnectManagerDelegate> delegate;

+ (instancetype)sharedInstance;

@property (nonatomic, strong, readonly) NSMutableDictionary *cacheDict;
/**
 * 设置环境
 */
@property (nonatomic, assign) HCEnvironmentType environment;

/**
 * 设置GHAC Token
 */
@property (nonatomic, copy)NSString *token;

/**
 * 当前车辆
 */
@property (nonatomic, strong, readonly) GHACConnectVehicleModel *vehicleModel;

/**
 * 启动首页的Controller
 */
@property (nonatomic, strong, readonly) UIViewController *loadHomeController;

/**
 * 跳转扫码页的Controller
 */
@property (nonatomic, strong, readonly) UIViewController *loadScanQRController;

/**
 * 获取车辆列表
 *
 * @param successBlock 成功结果回调---返回车辆列表List
 * @param failureBlock 业务错误信息回调
 * @param errorBlock 异常错误信息回调
 * @param Identity 是否车主
 * @param vinCode 车辆vinCode
 */
- (void)getVehicleList:(NSString *)Identity
               vinCode:(NSString *)vinCode
             onSuccess:(void(^)(NSArray <GHACConnectVehicleModel *> *vehicleList))successBlock
             onFailure:(void (^)(NSDictionary *failureDictionary))failureBlock
               onError:(void (^)(NSDictionary *errorDictionary))errorBlock;


/**
 * 启动车辆状态页
 *
 * @param vinCode 车辆VIN
 * @param controller 当前页面controller 用于页面加载
 * @param successBlock 成功结果回调
 * @param failureBlock 业务错误信息回调
 * @param errorBlock 异常错误信息回调
 */
- (void)loadVehiclePageWithVinCode:(NSString *)vinCode
                        controller:(UIViewController *)controller
                      successBlock:(void(^)(NSDictionary *successDictionary))successBlock
                         onFailure:(void (^)(NSDictionary *failureDictionary))failureBlock
                           onError:(void (^)(NSDictionary *errorDictionary))errorBlock;

/**
 * 刷新车辆状态页
 * @param vinCode 车辆VIN
 */
- (void)refreshVehiclePage:(NSString *)vinCode;


/**
 * 跳转绑定车辆
 *
 * @param vinCode 车辆VIN
 * @param controller 当前页面controller 用于页面跳转
 * @param successBlock 成功结果回调
 * @param failureBlock 业务错误信息回调
 * @param errorBlock 异常错误信息回调
 */
- (void)jumpBindVehicle:(NSString *)vinCode
             controller:(UIViewController *)controller
           successBlock:(void(^)(GHACConnectVehicleModel *model))successBlock
              onFailure:(void (^)(NSDictionary *failureDictionary))failureBlock
                onError:(void (^)(NSDictionary *errorDictionary))errorBlock;


/**
 * 导航选择器
 * @param lastOneMile 导航数据(json格式字符串)
 */
- (void)showMapChoose:(NSString *)lastOneMile;

/**
 * SDK断开连接
 */
- (void)tokenExpireLogOut;

/**
 * 注册app Scheme 以及universalLink 用于微信、支付宝支付
 * @param scheme <#scheme description#>
 * @param universalLink <#universalLink description#>
 */
- (void)registerAppScheme:(NSString *)scheme universalLink:(NSString *)universalLink;


@end

NS_ASSUME_NONNULL_END
