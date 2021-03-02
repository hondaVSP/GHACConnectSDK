//
//  HCConditionStateView.h
//  vspios-honda-app
//
//  Created by 贾宇恒 on 2020/8/26.
//  Copyright © 2020 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>
@class HCVehicleStateModel, HCHomeFunctionConfigModel;

NS_ASSUME_NONNULL_BEGIN

@interface HCConditionStateView : UIView

- (instancetype)initWithConfig:(HCHomeFunctionConfigModel *)config;

@property (nonatomic, strong) UIView *containerView;
@property (nonatomic, strong) HCVehicleStateModel *state;

@end

typedef NS_ENUM(NSUInteger, ConditionStatusItemType) {
    ConditionStatusItemTypeEngine,
    ConditionStatusItemTypeLock,
    ConditionStatusItemTypeTrunk,
    ConditionStatusItemTypeHeadLamp,
    ConditionStatusItemTypeProfileLamp,
    ConditionStatusItemTypeFogLamp,
    ConditionStatusItemTypeDoubleFlash,
    ConditionStatusItemTypeChargingPortCover,
};

@interface ConditionStatusItem : UIView

@property (nonatomic, strong) HCVehicleStateModel *model;

- (instancetype)initWithType:(ConditionStatusItemType)type;

@end

NS_ASSUME_NONNULL_END
