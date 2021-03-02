//
//  HCHomeVehicleInfoTableViewCell.h
//  GHACConnectSDK_Example
//
//  Created by 蔡宇航 on 2021/2/18.
//  Copyright © 2021 445878662@qq.com. All rights reserved.
//

#import <HondaConnectSDK/HCTableViewCell.h>
@class HCVehicleStateModel, HCHomeFunctionConfigModel;

NS_ASSUME_NONNULL_BEGIN

@protocol HCHomeVehicleInfoTableViewCellDelegate <NSObject>

- (void)homeVehicleInfoTableViewCellDidClickSettingButton:(UIButton *)button;

@end

@interface VehicleInfoTableViewCellData : NSObject

@property (nonatomic, strong) HCVehicleStateModel *vehicleState;
@property (nonatomic, strong) HCHomeFunctionConfigModel *configModel;

@property (nonatomic, weak) id <HCHomeVehicleInfoTableViewCellDelegate> delegate;

@end

@interface HCHomeVehicleInfoTableViewCell : HCTableViewCell

+ (NICellObject *)cellWithVehicleState:(HCVehicleStateModel *)vehicleState configModel:(HCHomeFunctionConfigModel *)configModel delegate:(id <HCHomeVehicleInfoTableViewCellDelegate>)delegate;

@end

NS_ASSUME_NONNULL_END
