//
//  HCTravelSearchButton.h
//  vspios-honda-app
//
//  Created by 蔡宇航 on 2019/9/26.
//  Copyright © 2019 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface HCTravelSearchButton : UIControl

@property (nonatomic, copy) void(^tapAction)(void);

@end

NS_ASSUME_NONNULL_END
