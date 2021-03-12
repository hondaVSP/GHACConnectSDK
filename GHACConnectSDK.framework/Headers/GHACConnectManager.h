//
//  GHACConnectHandle.h
//  GHACConnectSDK
//
//  Created by Zac on 2021/2/23.
//

#import <Foundation/Foundation.h>
#import "GHACConnectModel.h"

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
 */
- (void)getVehicleList:(void(^)(NSArray <GHACConnectVehicleModel *> *vehicleList))successBlock
         onFailure:(void (^)(NSDictionary *failureDictionary))failureBlock
           onError:(void (^)(NSDictionary *errorDictionary))errorBlock;

/**
 * 设置默认车辆
 *
 * @param vehicleId 人车关系ID
 * @param successBlock 成功结果回调---返回车辆信息模型
 * @param failureBlock 业务错误信息回调
 * @param errorBlock 异常错误信息回调
 *
 */
- (void)setDefaultVehicle:(NSString *)vehicleId
     successBlock:(void(^)(GHACConnectVehicleModel *vehicleInfo))successBlock
        onFailure:(void (^)(NSDictionary *failureDictionary))failureBlock
          onError:(void (^)(NSDictionary *errorDictionary))errorBlock;


/**
 * 启动车辆状态页
 *
 * @param model 车辆信息模型
 * @param controller 当前页面controller 用于页面加载
 * @param successBlock 成功结果回调
 * @param failureBlock 业务错误信息回调
 * @param errorBlock 异常错误信息回调
 */
- (void)loadVehiclePageWithModel:(GHACConnectVehicleModel *)model
                   controller:(UIViewController *)controller
                 successBlock:(void(^)(NSDictionary *successDictionary))successBlock
                    onFailure:(void (^)(NSDictionary *failureDictionary))failureBlock
                      onError:(void (^)(NSDictionary *errorDictionary))errorBlock;

/**
 * 刷新车辆状态页
 * @param model 车辆信息模型
 */
- (void)refreshVehiclePage:(GHACConnectVehicleModel *)model;


/**
 * 跳转绑定车辆
 *
 * @param controller 当前页面controller 用于页面跳转
 * @param successBlock 成功结果回调
 * @param failureBlock 业务错误信息回调
 * @param errorBlock 异常错误信息回调
 */
- (void)jumpBindVehicle:(UIViewController *)controller
         successBlock:(void(^)(GHACConnectVehicleModel *model))successBlock
            onFailure:(void (^)(NSDictionary *failureDictionary))failureBlock
              onError:(void (^)(NSDictionary *errorDictionary))errorBlock;


/**
 * 导航选择器
 * @param lastOneMile 导航数据(json格式字符串)
 */
- (void)showMapChoose:(NSString *)lastOneMile;

@end

NS_ASSUME_NONNULL_END
