//
//  HCFenceModel.h
//  vspios-honda-app
//
//  Created by 蔡宇航 on 2020/3/6.
//  Copyright © 2020 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <HondaConnectSDK/HCIVehicleFenceService.h>

NS_ASSUME_NONNULL_BEGIN

@interface HCFenceModel : NSObject

@property (nonatomic, copy)   NSString *centerName;
@property (nonatomic, copy)   NSString *centerPoint;
@property (nonatomic, copy)   NSString *centerRadius;
@property (nonatomic, copy)   NSString *fenceId;
@property (nonatomic, copy)   NSString *mapPictureUrl;
@property (nonatomic, copy)   NSString *rangeName;
@property (nonatomic, assign) BOOL useStatus;       //0：未使用1：正在使用
@property (nonatomic, copy)   NSString *userId;
@property (nonatomic, copy)   NSString *vinCode;
@property (nonatomic, assign) HCFenceWarningType warningType;

@end

NS_ASSUME_NONNULL_END
