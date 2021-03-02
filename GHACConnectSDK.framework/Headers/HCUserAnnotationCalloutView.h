//
//  HCUserAnnotationCalloutView.h
//  vspios-honda-app
//
//  Created by 蔡宇航 on 2019/8/19.
//  Copyright © 2019 东软睿驰汽车技术有限公司. All rights reserved.
//
/// 点击用户位置callout

#import <UIKit/UIKit.h>
@class QMSReverseGeoCodeSearchResult;
NS_ASSUME_NONNULL_BEGIN

@interface HCUserAnnotationCalloutView : UIView

@property (nonatomic, strong)QMSReverseGeoCodeSearchResult *reverseGeoModel;

@end


NS_ASSUME_NONNULL_END
