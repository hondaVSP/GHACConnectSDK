//
//  HCGradientCountLabel.h
//  vspios-honda-app
//
//  Created by 贾宇恒 on 2019/11/9.
//  Copyright © 2019 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface HCGradientCountLabel : UILabel

@property (nonatomic, copy) NSArray *colors;

/// 数字从起始值变化到结束值
/// @param startValue 起始值
/// @param endValue 结束值
/// @param duration 动画时间
- (void)countFromValue:(CGFloat)startValue toValue:(CGFloat)endValue withDuration:(NSTimeInterval)duration;

@end

NS_ASSUME_NONNULL_END
