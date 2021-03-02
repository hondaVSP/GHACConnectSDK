//
//  HCVehicleAnnotationView.h
//  vspios-honda-app
//
//  Created by 蔡宇航 on 2020/2/28.
//  Copyright © 2020 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <QMapKit/QMapKit.h>

NS_ASSUME_NONNULL_BEGIN

#define HCVehiclePointReuseIden       @"HCVehiclePointReuseIden"
@interface HCVehicleAnnotationView : QAnnotationView <QAnnotation>

@property (nonatomic, assign) BOOL stolenFlag;      // 是否被盗，默认为false

@end

NS_ASSUME_NONNULL_END
