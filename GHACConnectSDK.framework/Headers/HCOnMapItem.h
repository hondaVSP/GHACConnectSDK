//
//  HCOnMapItem.h
//  vspios-honda-app
//
//  Created by 蔡宇航 on 2019/8/17.
//  Copyright © 2019 东软睿驰汽车技术有限公司. All rights reserved.
//
/// 在地图上的功能按钮


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, HCOnMapItemType) {
    HCOnMapItemType_Fence,    // 电子围栏
    HCOnMapItemType_Team,     // 组队
    HCOnMapItemType_UserLoc,  // 用户位置
    HCOnMapItemType_CarLoc,   // 车辆位置
    HCOnMapItemType_ZoomIn,   // 地图放大
    HCOnMapItemType_ZoomOut,  // 地图缩小
};

NS_ASSUME_NONNULL_BEGIN

@interface HCOnMapItem : UIControl

- (instancetype) initWithType:(HCOnMapItemType)type;

@end


// 被盗提醒Item
@interface HCOnMapStolenItem : UIControl

@end

NS_ASSUME_NONNULL_END
