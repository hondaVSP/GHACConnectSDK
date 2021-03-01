# GHACConnectSDK开发者文档




# iOS SDK
## 功能介绍
为广本App提供车辆相关功能SDK，包含对既有业务的功能组件封装，方便广本侧集成

---

## 开发环境

- **集成环境**：Xcode 9.0及以上；
- **App适配最低系统版本**：iOS 9 及以上

---

## SDK集成方式
在您的Podfile中添加pod 'GHACConnectSDK'。
执行或 pod update 更新pod依赖库。


## SDK初始化
在app启动时初始化SDK。这可以在didFinishLaunchingWithOptions方法中完成。
```objectivec
/**
 * 初始化SDK
 */

CHACConnectManager * manager = [CHACConnectManager sharedInstance];
```




## SDK对外接口提供
### 1.初始化Token（必要）
建议在调用SDK方法之前赋值


示例代码
```objectivec
/**
 * 初始化Token
 */
[[CHACConnectManager sharedInstance] setToken:@"GHAC Token"];
```




### 2.获取车辆列表
示例代码


```objectivec
/**
 * 获取车辆列表
 *
 * @param successBlock 成功结果回调---返回车辆列表List
 * @param failureBlock 业务错误信息回调
 * @param errorBlock 异常错误信息回调
 */

[[CHACConnectManager sharedInstance] getVehicleList:^(NSArray<GHACConnectVehicleModel *> * _Nonnull vehicleList) {
    /**
     * 成功结果回调---返回车辆列表List
     */
} onFailure:^(NSDictionary * _Nonnull failureDictionary) {
    /**
     * failureBlock 业务错误信息回调
     */
} onError:^(NSDictionary * _Nonnull errorDictionary) {
    /**
     * errorBlock 异常错误信息回调
     */
}];

```


### 3.绑定车辆
示例代码


```objectivec
/**
 * 跳转绑定车辆
 *
 * @param viewController 当前页面viewController 用于页面跳转
 * @param successBlock 成功结果回调
 * @param failureBlock 业务错误信息回调
 * @param errorBlock 异常错误信息回调
 */

[[CHACConnectManager sharedInstance] jumpBindVehicle:@"当前控制器controller" successBlock:^(NSDictionary * _Nonnull successDictionary) {
    /**
     * 成功结果回调
     */
} onFailure:^(NSDictionary * _Nonnull failureDictionary) {
    /**
     * failureBlock 业务错误信息回调
     */
} onError:^(NSDictionary * _Nonnull errorDictionary) {
    /**
     * errorBlock 异常错误信息回调
     */
}];

```


### 4.设置默认车辆
示例代码
```objectivec
/**
 * 设置默认车辆
 *
 * @param vehicleId 人车关系ID
 * @param successBlock 成功结果回调---返回车辆信息模型
 * @param failureBlock 业务错误信息回调
 * @param errorBlock 异常错误信息回调
 *
 */

[[CHACConnectManager sharedInstance] setDefaultVehicle:@"人车关系Id" successBlock:^(GHACConnectVehicleModel * _Nonnull vehicleInfo) {
    /**
     * 成功结果回调---返回车辆信息模型
     */
} onFailure:^(NSDictionary * _Nonnull failureDictionary) {
    /**
     * failureBlock 业务错误信息回调
     */
} onError:^(NSDictionary * _Nonnull errorDictionary) {
    /**
     * errorBlock 异常错误信息回调
     */
}];

```
### 
### 5.启动车辆状态页


示例代码

```objectivec
/**
 * 启动车辆状态页
 *
 * @param model 车辆信息模型（GHACConnectVehicleModel）
 * @param controller 当前页面controller 用于页面加载
 * @param successBlock 成功结果回调
 * @param failureBlock 业务错误信息回调
 * @param errorBlock 异常错误信息回调
 */


[[CHACConnectManager sharedInstance] loadVehiclePageWithModel:[GHACConnectVehicleModel class] controller:[UIViewController class] successBlock:^(NSDictionary * _Nonnull successDictionary) {
    /**
     * 成功结果回调
     */
} onFailure:^(NSDictionary * _Nonnull failureDictionary) {
    /**
     * failureBlock 业务错误信息回调
     */
} onError:^(NSDictionary * _Nonnull errorDictionary) {
    /**
     * errorBlock 异常错误信息回调
     */
}];


```


### 6.刷新车辆状态页


示例代码

```objectivec
/**
 * 刷新车辆状态页
 * @param model 车辆信息模型（GHACConnectVehicleModel）
 */

[[CHACConnectManager sharedInstance] refreshVehiclePage:[GHACConnectVehicleModel class]];
```


### 7.GHAC Token失效代理


示例代码

```objectivec
/**
 * 需要遵守CHACConnectManagerDelegate协议
 */

@interface GHACAppp ()<CHACConnectManagerDelegate>

@end
```


```objectivec
/**
 * 需要实现CHACConnectManagerDelegate的方法tokenInvaild
 */

@protocol CHACConnectManagerDelegate <NSObject>

@optional
/**
 * GHAC Token失效代理
 */
- (void)tokenInvaild;

@end
```


```objectivec
/**
 * 需要实现CHACConnectManagerDelegate的方法tokenInvaild
 */
- (void)tokenExpire{
/**
 * GHAC Token失效后续操作
 */
}

```


## 参数说明
### 1.GHACConnectVehicleModel


```objectivec
@interface GHACConnectVehicleModel : NSObject

/**人车关系ID*/
@property (nonatomic, copy) NSString *id;

@property (nonatomic, copy) NSString *vinCode;

@property (nonatomic, copy) NSString *carNickName;
/**是否默认车辆*/
@property (nonatomic, assign) BOOL currFlag;
/**是否车主*/
@property (nonatomic, assign) BOOL identity;
/**授权方式 (若为授权车辆) 0:共同用车人  1:临时授权  2:单次授权*/
@property (nonatomic, assign) NSInteger authorizationType;
/**授权ID  (若为授权车辆，才不为空)*/
@property (nonatomic, copy) NSString *authorizationId;
/**创建时间*/
@property (nonatomic, copy) NSString *createTime;
/**车型名称*/
@property (nonatomic, copy) NSString *modelName;
/**车型图片URL*/
@property (nonatomic, copy) NSString *modelImgUrl;

@end
```


### 2.ApiException


通用回调信息,具体错误码见-[错误码说明]

```objectivec
{
    code:705060,
    message:"",
    responseBody:""
}
```




## 错误码说明
| 错误码 | 说明 |
| --- | --- |
| 000000 | 请求成功 |
| 100015 | 请求令牌无效 |
| 100019 | 访问未授权 |
| 200000 | 参数必填项为空 |
| 200031 | 车辆正在执行指令，请稍后再试 |
| 200034 | VIN码不存在 |
| 300015 | 您没有登录权限 |
| 300023 | 用户无该车辆权限 |
| 300028 | 未获取该车信息，请联系相关4S店 |
| 300038 | 参数错误 |
| 300046 | 请扫描车辆二维码 |
| 300051 | 您没有获得此功能授权 |
| 300053 | 二维码已过期 |
| 300066 | 当前车辆登录用户与手机用户不一致，请更换用户后再次认证 |
| 300099 | 身份校验未通过，本次操作失败 |
| 705001 | 参数错误 |
| 705049 | 操作失败 |
| 705060 | Token解析错误 |
| 706011 | 获取车辆信息失败 |
| 706012 | 获取车辆信息控制项失败 |
| 其他 | 未知异常 |
