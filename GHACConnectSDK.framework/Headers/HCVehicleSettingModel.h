//
//  HCVehicleSettingModel.h
//  vspios-honda-app
//
//  Created by 贾宇恒 on 2020/5/12.
//  Copyright © 2020 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HCVehicleSettingModel : NSObject
/**行程记录开关*/
@property (nonatomic, assign) NSInteger itineraryRecord;
/**对外供电停止通知*/
@property (nonatomic, assign) NSInteger outPower;
/**充电枪遗忘插入通知*/
@property (nonatomic, assign) NSInteger forgetPowerGun;
/**急速充电完成通知*/
@property (nonatomic, assign) NSInteger fastCharge;
/**定时充电通知*/
@property (nonatomic, assign) NSInteger timmingCharge;
/**预约空调通知*/
@property (nonatomic, assign) NSInteger orderAc;

@end

NS_ASSUME_NONNULL_END
