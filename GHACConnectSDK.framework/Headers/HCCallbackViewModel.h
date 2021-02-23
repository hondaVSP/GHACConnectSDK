//
//  HCCallbackViewModel.h
//  GHACConnectSDK_Example
//
//  Created by 贾宇恒 on 2021/2/20.
//  Copyright © 2021 445878662@qq.com. All rights reserved.
//

#import "HCViewModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HCCallbackViewModel : HCViewModel

@property (nonatomic, copy) void (^callbackBlock)(id value);

@end

NS_ASSUME_NONNULL_END
