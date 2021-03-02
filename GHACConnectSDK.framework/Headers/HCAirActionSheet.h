//
//  HCAirActionSheet.h
//  vspios-honda-app
//
//  Created by 赵小旭 on 2019/8/17.
//  Copyright © 2019年 贾宇恒. All rights reserved.
//

#import <UIKit/UIKit.h>
@class HCHomeFunctionConfigModel;

NS_ASSUME_NONNULL_BEGIN

typedef void (^AirHandle)(NSInteger isOn, CGFloat temperature, NSInteger mode);

@interface HCAirActionSheet : UIView



/// instance
/// @param temprature 温度
/// @param isOn 是否开启
/// @param airMode 是否开启除霜
/// @param handle 事件处理
+ (HCAirActionSheet *)airSheetWithConfig:(HCHomeFunctionConfigModel *)config temprature:(CGFloat)temprature isOn:(NSInteger)isOn airMode:(NSInteger)airMode handle:(AirHandle)handle;

/**
 弹出actionSheet

 @param obj view or window
 */
- (void)showInView:(id)obj;

- (void)dismiss;

@end

@interface TemperatureSlider : UISlider

@end

NS_ASSUME_NONNULL_END
