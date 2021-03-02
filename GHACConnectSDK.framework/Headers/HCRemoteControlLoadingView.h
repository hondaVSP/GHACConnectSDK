//
//  HCRemoteControlLoadingView.h
//  vspios-honda-app
//
//  Created by 贾宇恒 on 2020/11/18.
//  Copyright © 2020 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, RemoteAnimationStep) {
    /**指令下达成功*/
    RemoteAnimationStepRequestSuccess,
    /**等待车机唤醒*/
    RemoteAnimationStepWaitingAwakon,
    /**车机唤醒成功*/
    RemoteAnimationStepAwakonSuccess,
    /**车辆执行指令*/
    RemoteAnimationStepExecuting,
    /**控车成功*/
    RemoteAnimationStepControlSuccess,
};

@interface HCRemoteControlLoadingView : UIView

- (void)makeAnimationWithStep:(RemoteAnimationStep)step;

- (void)showInView:(id)obj;

@end

NS_ASSUME_NONNULL_END
