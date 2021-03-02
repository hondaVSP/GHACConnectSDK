//
//  HCCarTeamInfoModel.h
//  vspios-honda-app
//
//  Created by 蔡宇航 on 2019/9/4.
//  Copyright © 2019 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HCCarTeamInfoModel : NSObject

@property (nonatomic, copy) NSString *carTeamId;
@property (nonatomic, copy) NSString *carTeamName;
@property (nonatomic, copy) NSString *carTeamCommond;
@property (nonatomic, copy) NSString *destinationName;
@property (nonatomic, copy) NSString *destinationAddress;
@property (nonatomic, copy) NSString *destinationSiteLon;
@property (nonatomic, copy) NSString *destinationSiteLat;
@property (nonatomic, copy) NSString *dissolutionTime;

@end

NS_ASSUME_NONNULL_END
