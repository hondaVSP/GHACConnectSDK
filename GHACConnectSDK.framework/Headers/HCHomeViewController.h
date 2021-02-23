//
//  HCHomeViewController.h
//  GHACConnectSDK
//
//  Created by 445878662@qq.com on 02/08/2021.
//  Copyright (c) 2021 445878662@qq.com. All rights reserved.
//

@import UIKit;
#import <HondaConnectSDK/HCNimbusViewController.h>

@interface HCHomeViewController : HCNimbusViewController

///// 获取车辆列表
//- (void)getUserVehicleList:(void(^)(void))success withFail:(void(^)(void))fail;

/// 查询车辆状态
- (void)selectVehicleStatus:(void(^)(void))successBlock withFail:(void(^)(void))failBlock;

/// 添加车辆
- (void)addVehicle;

@end
