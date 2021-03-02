//
//  HCConditionVehicleView.h
//  vspios-honda-app
//
//  Created by 贾宇恒 on 2020/8/27.
//  Copyright © 2020 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>
@class HCVehicleStateModel, HCHomeFunctionConfigModel;

NS_ASSUME_NONNULL_BEGIN

@interface HCConditionVehicleView : UIView

@property (nonatomic, strong) HCVehicleStateModel *state;

- (instancetype)initWithConfig:(HCHomeFunctionConfigModel *)config;

- (void)playAnimationAfterDelay:(CGFloat)delaySeconds;

- (void)hiddenWarning;

@end

@interface GifView : UIView

- (instancetype)initWithPath:(NSString *)path;

- (void)startGif;

- (void)stopGif;

@end

NS_ASSUME_NONNULL_END
