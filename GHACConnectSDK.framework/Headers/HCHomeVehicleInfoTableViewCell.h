//
//  HCHomeVehicleInfoTableViewCell.h
//  GHACConnectSDK_Example
//
//  Created by 蔡宇航 on 2021/2/18.
//  Copyright © 2021 445878662@qq.com. All rights reserved.
//

#import <HondaConnectSDK/HCTableViewCell.h>
@class HCVehicleStateModel;

NS_ASSUME_NONNULL_BEGIN

@interface HCHomeVehicleInfoTableViewCell : HCTableViewCell

+ (NICellObject *)createWithVehicleStatus:(HCVehicleStateModel *)vehicleStatus;

@end

NS_ASSUME_NONNULL_END
