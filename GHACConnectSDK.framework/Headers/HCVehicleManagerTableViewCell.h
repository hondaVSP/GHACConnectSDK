//
//  HCVehicleManagerTableViewCell.h
//  GHACConnectSDK_Example
//
//  Created by 贾宇恒 on 2021/2/18.
//  Copyright © 2021 445878662@qq.com. All rights reserved.
//

#import <HondaConnectSDK/HCTableViewCell.h>
@class HCVehicleListModel;

NS_ASSUME_NONNULL_BEGIN

@protocol HCVehicleManagerTableViewCellDelegate <NSObject>

- (void)vehicleManagerTableViewCellDidClickSettingBtnWithModel:(HCVehicleListModel *)model;

@end

@interface HCVehicleManagerTableViewCell : HCTableViewCell

+ (NICellObject *)cellWithVehicleInfo:(HCVehicleListModel *)model delegate:(id <HCVehicleManagerTableViewCellDelegate>)delegate;

@end

@interface VehicleManagerTableViewCellData : NSObject

@property (nonatomic, strong) HCVehicleListModel *model;
@property (nonatomic, weak) id <HCVehicleManagerTableViewCellDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
