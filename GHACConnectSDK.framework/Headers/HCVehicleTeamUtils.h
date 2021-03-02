//
//  HCVehicleTeamUtils.h
//  vspios-honda-app
//
//  Created by 蔡宇航 on 2019/9/5.
//  Copyright © 2019 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HCVehicleTeamUtils : NSObject

/**
 * 获取当前的carTeamId
 */
+ (NSString *)getCurrentCarTeamId;

/**
 * 设置当前的carTeamId
 */
+ (void)setCurrentCarTeamId:(nullable NSString *)carTeamId;

@end

@interface HCVehicleTeamInfo : NSObject

+ (HCVehicleTeamInfo *)shareInstance_;

- (void)updateCarTeamId:(NSString *)carTeamId;

- (NSString *)currentCarTeamId;

@end

NS_ASSUME_NONNULL_END
