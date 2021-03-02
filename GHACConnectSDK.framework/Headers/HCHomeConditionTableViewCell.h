//
//  HCHomeConditionTableViewCell.h
//  GHACConnectSDK_Example
//
//  Created by 蔡宇航 on 2021/2/18.
//  Copyright © 2021 445878662@qq.com. All rights reserved.
//

#import <HondaConnectSDK/HCTableViewCell.h>
@class HCVehicleStateModel, HCHomeFunctionConfigModel;

NS_ASSUME_NONNULL_BEGIN

@interface HCHomeConditionTableViewCellData : NSObject

@property (nonatomic, assign) NSInteger action;
@property (nonatomic, strong) HCVehicleStateModel *vehicleState;
@property (nonatomic, strong) HCHomeFunctionConfigModel *config;
@property (nonatomic, assign) NSInteger authType;

@end

@interface HCHomeConditionTableViewCell : HCTableViewCell

+ (NICellObject *)cellWithAction:(NSInteger)action vehicleState:(HCVehicleStateModel *)state config:(HCHomeFunctionConfigModel *)config authType:(NSInteger)authType;

@end

NS_ASSUME_NONNULL_END
