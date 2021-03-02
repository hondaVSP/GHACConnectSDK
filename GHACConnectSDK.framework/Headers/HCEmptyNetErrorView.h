//
//  HCEmptyNetErrorView.h
//  vspios-honda-app
//
//  Created by 蔡宇航 on 2019/8/27.
//  Copyright © 2019 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface HCEmptyNetErrorView : UIControl

@property (nonatomic, copy) void(^refreshAction)(void);

@end

@interface HCEmptyNetErrorButton : UIButton

@end

NS_ASSUME_NONNULL_END
