//
//  HCControlState.h
//  vspios-honda-app
//
//  Created by 赵小旭 on 2019/8/18.
//  Copyright © 2019年 贾宇恒. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
/**控车状态+定时*/
@interface HCControlState : NSObject

@property (nonatomic, assign) BOOL isLoading;

+ (HCControlState *)sharedState;

/// 倒计时轮询控车结果
/// @param requestId 控车ID
/// @param actionCode 控车接口传来的code码
/// @param getResultBlock 查询到轮询结果
/// @param overBlock 定时器结束
- (void)countDownWithRequestId:(NSString *)requestId
                    actionCode:(NSString *)actionCode
                getResultBlock:(void (^)(NSString *resultCode))getResultBlock
                     overBlock:(void (^)(void))overBlock;

/// 重置状态
- (void)resetState;

@end

NS_ASSUME_NONNULL_END
