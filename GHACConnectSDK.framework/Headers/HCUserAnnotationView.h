//
//  HCUserAnnotationView.h
//  vspios-honda-app
//
//  Created by 蔡宇航 on 2019/9/11.
//  Copyright © 2019 东软睿驰汽车技术有限公司. All rights reserved.
//
/// 自定义用户位置标注

#import <QMapKit/QMapKit.h>

NS_ASSUME_NONNULL_BEGIN

#define HCUserPointReuseIden      @"HCUserPointReuseIden"
@interface HCUserAnnotationView : QAnnotationView <QAnnotation>

@end

NS_ASSUME_NONNULL_END
