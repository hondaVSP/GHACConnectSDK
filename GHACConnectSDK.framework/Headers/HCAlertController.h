//
//  HCAlertController.h
//  vspios-honda-app
//
//  Created by 蔡宇航 on 2020/3/26.
//  Copyright © 2020 东软睿驰汽车技术有限公司. All rights reserved.
//
/// 弹窗控制器（包含强提醒弹窗和其他弹窗）

#import <UIKit/UIKit.h>
#import "HCCommonEnum.h"
#import "HCLayoutButton.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, ControlResult) {
    ControlResultSuccess,
    ControlResultFailure,
};

typedef NS_ENUM(NSUInteger, AlertType) {
    /**扫码帮助*/
    AlertTypeScanHelp,
    /**通用*/
    AlertTypeCommonAlert,
    /**含checkbox*/
    AlertTypeWithCheckBox,
    /**控车结果, 带图标*/
    AlertTypeCarControlResult,
    /**校验被授权人身份*/
    AlertTypeCheckAuthorized,
    /**确认授权*/
    AlertTypeConfirmAuth,
    /**last one mile 强提醒9*/
    AlertTypeLastOneMile,
    /**被盗提醒 强提醒1*/
    AlertTypeStolenRemind,
    /**授权邀请 强提醒2*/
    AlertTypeAuthInvitation,
    /**授权到期 强提醒3*/
    AlertTypeAuthExpiration,
    /**登录信息已失效，请重新登录*/
    AlertTypeLogonFailure,
    /**油耗排行帮助*/
    AlertTypeOilRankingTips,
    /**解绑车辆*/
    AlertTypeRemoveVehicle,
};

typedef void (^ALertHandler)(NSInteger index);
typedef void(^CheckboxHandler)(BOOL isChecked);

@interface HCAlertController : UIViewController

@property (nonatomic, assign, readonly) AlertType alertType;
@property (nonatomic, strong) UIView *alertView;



/// 授权到期
/// @param title title
/// @param content content
/// @param carName 车型+车昵称
/// @param startDate 开始
/// @param expiration 结束
/// @param handle handle
+ (instancetype)authExpirationAlertWithTitle:(NSString *)title content:(NSString *)content carName:(NSString *)carName startDate:(NSTimeInterval)startDate expiration:(NSTimeInterval)expiration handle:(ALertHandler)handle;

/// 授权邀请
/// @param title title
/// @param content 内容
/// @param carType 车型
/// @param authType 授权类型
/// @param authScope 授权范围
/// @param startDate 授权开始时间
/// @param expiration 授权结束时间
/// @param handle 事件处理  
+ (instancetype)inviteAuthAlertWithTitle:(NSString *)title content:(NSString *)content carType:(NSString *)carType authType:(NSString *)authType authScope:(NSString *)authScope startDate:(NSTimeInterval)startDate expiration:(NSTimeInterval)expiration handle:(ALertHandler)handle;

/// 确认授权
/// @param nickname 被授权人昵称
/// @param carName 车名车型
/// @param authType 授权方式
/// @param authScope 授权范围
/// @param startDate 授权开始时间
/// @param endDate 授权结束时间
/// @param handle 事件处理.
+ (instancetype)confirmAuthAlertWithNickname:(NSString *)nickname carName:(NSString *)carName authType:(HCAuthType)authType authScope:(HCAuthScope)authScope startDate:(NSDate *)startDate endDate:(NSDate *)endDate handle:(ALertHandler)handle;

/// 被授权人身份校验
/// @param nickname 被授权人昵称
/// @param phoneNumber 被授权人手机号
/// @param lastAuthTime 上次授权时间
/// @param handle 事件处理
+ (instancetype)checkAuthorizedAlertWithNickname:(NSString *)nickname phoneNumber:(NSString *)phoneNumber lastAuthTime:(NSString *)lastAuthTime handle:(ALertHandler)handle;

/// 通用样式需要定义type判断类型
/// @param type alert 类型
/// @param title 标题
/// @param content 内容
/// @param leftString 左边按钮文字
/// @param rightString 右边按钮文字
/// @param handle 右边按钮事件
+ (instancetype)alertWithType:(AlertType)type title:(NSString * _Nullable)title content:(NSString * _Nonnull)content leftButtonString:(NSString * _Nonnull)leftString rightButtonString:(NSString * _Nullable)rightString  handle:(ALertHandler)handle;

/// 通用alert
/// @param title 标题
/// @param content 内容
/// @param leftString 左按钮标题
/// @param rightString 右按钮标题
/// @param handle 事件处理
+ (instancetype)commonAlertWithTitle:(NSString * _Nullable)title content:(NSString * _Nonnull)content leftButtonString:(NSString * _Nonnull)leftString rightButtonString:(NSString * _Nullable)rightString handle:(ALertHandler)handle;

/// 带checkbox的alert
/// @param title 标题
/// @param content 内容
/// @param checked checkbox初始打钩状态
/// @param leftString 左按钮标题
/// @param rightString 右按钮标题
/// @param checkboxHandle 复选框事件
/// @param handle 事件处理
+ (instancetype)checkboxAlertWithTitle:(NSString * _Nullable)title content:(NSString * _Nonnull)content checked:(BOOL)checked leftButtonString:(NSString * _Nonnull)leftString rightButtonString:(NSString * _Nullable)rightString checkboxHandle:(CheckboxHandler)checkboxHandle handle:(ALertHandler)handle;

/// 控车结果弹窗
/// @param result 成功, 失败 (控制图片)
/// @param content 提示内容
/// @param title 按钮标题
/// @param handle 事件处理
+ (instancetype)alertWithControlResult:(ControlResult)result content:(NSString *)content buttonTitle:(NSString *)title handle:(ALertHandler)handle;

- (BOOL)isStrongReminder;

@end

@interface CheckboxButton : HCLayoutButton

@end




NS_ASSUME_NONNULL_END
