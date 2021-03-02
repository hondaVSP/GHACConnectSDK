//
//  HCNearbyClassifyModel.h
//  vspios-honda-app
//
//  Created by 蔡宇航 on 2019/8/26.
//  Copyright © 2019 东软睿驰汽车技术有限公司. All rights reserved.
//
/// 周边分类Model

#import <Foundation/Foundation.h>
@class HCNearbyClassifyContentModel;

NS_ASSUME_NONNULL_BEGIN

@interface HCNearbyClassifyModel : NSObject

@property (nonatomic, copy) NSString *classifyID;

@property (nonatomic, copy) NSString *classifyName;

@property (nonatomic, copy) NSArray<HCNearbyClassifyContentModel*> *classifyContent;

@end

NS_ASSUME_NONNULL_END
