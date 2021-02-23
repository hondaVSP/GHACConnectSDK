//
//  HCCountDownButton.h
//  HondaApp_iOS
//
//  Created by 苏超 on 2019/7/18.
//  Copyright © 2019 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^VerifyCodeBtnCountdown)(NSInteger count);

@interface HCCountDownButton : UIButton

@property (nonatomic ,assign) BOOL inCountdown;

@property (nonatomic ,copy) VerifyCodeBtnCountdown countdownCount;

// 根据时间需求,来设置倒计时时间次数
- (void)timeFailBeginFrom:(NSInteger)timeCount;

@end

NS_ASSUME_NONNULL_END
