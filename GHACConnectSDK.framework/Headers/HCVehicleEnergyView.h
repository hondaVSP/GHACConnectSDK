//
//  HCVehicleEnergyView.h
//  vspios-honda-app
//
//  Created by 贾宇恒 on 2020/11/16.
//  Copyright © 2020 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HCCommonEnum.h"
@class HCVehicleStateModel;

NS_ASSUME_NONNULL_BEGIN

@interface HCVehicleEnergyView : UIView

- (void)configWithEnergyType:(HCVehicleEnergyType)type stateModel:(HCVehicleStateModel *)model;

@end

NS_ASSUME_NONNULL_END
