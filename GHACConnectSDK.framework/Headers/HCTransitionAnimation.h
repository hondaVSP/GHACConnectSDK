//
//  HCTransitionAnimation.h
//  vspios-honda-app
//
//  Created by 蔡宇航 on 2019/11/19.
//  Copyright © 2019 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, TransitionType) {
    TransitionType_Present = 0,
    TransitionType_Dissmiss,
    TransitionType_Push,
    TransitionType_Pop,
};

@interface HCTransitionAnimation : NSObject <UIViewControllerAnimatedTransitioning>

//动画转场类型
@property (nonatomic,assign) TransitionType transitionType;

@end

NS_ASSUME_NONNULL_END
