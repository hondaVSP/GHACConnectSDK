//
//  HCAddressInfoView.h
//  vspios-honda-app
//
//  Created by 蔡宇航 on 2019/8/23.
//  Copyright © 2019 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HCCommonEnum.h"
@class HCQMapCommonSearchResModel;

NS_ASSUME_NONNULL_BEGIN

// 发送至车
@interface HCAddressSendToCarView : UIControl

@end

// 搜索周边
@interface HCAddressNearbyView : UIControl

@end

// 设为目的地
@interface HCAddressSetDestinationView : UIControl

@end

// 设置中心点 (电子围栏功能)
@interface HCAddressSetFenceCenterView : UIControl

@end

@interface HCAddressInfoView : UIView

- (instancetype)initWithPOIDisplayType:(HCPOIInfoDisplayType)type;

@property (nonatomic, strong) HCQMapCommonSearchResModel *searchResModel;

@property (nonatomic, copy) void(^nearbyAction)(void);

@property (nonatomic, copy) void(^sendToCarAction)(void);

@property (nonatomic, copy) void(^setDestinationAction)(void);

@property (nonatomic, copy) void(^setFenceCenterAction)(void);

@end

NS_ASSUME_NONNULL_END
