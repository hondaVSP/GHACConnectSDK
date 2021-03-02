//
//  HCMapAppSheet.h
//  vspios-honda-app
//
//  Created by 蔡宇航 on 2020/1/2.
//  Copyright © 2020 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, HCMapAppType) {
    HCMapAppTypeSysMap    = 1,    //系统地图
    HCMapAppTypeBMap      = 2,    //百度地图
    HCMapAppTypeAMap      = 3,    //高德地图
    HCMapAppTypeQMap      = 4,    //腾讯地图
};


@interface HCMapAppSheet : UIView

+ (HCMapAppSheet *)shareMapAppSheet;

- (void)onSelected:(void(^)(HCMapAppType))selectedType;

- (void)show;

@end

NS_ASSUME_NONNULL_END
