//
//  HCQMapCommonSearchResModel.h
//  vspios-honda-app
//
//  Created by 蔡宇航 on 2019/8/28.
//  Copyright © 2019 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <QMapKit/QMSSearchResult.h>

NS_ASSUME_NONNULL_BEGIN

@interface HCQMapCommonSearchResModel : NSObject

/**
 *  @brief  POI唯一标识
 */
@property (nonatomic, copy) NSString *id_;

/**
 *  @brief  poi名称
 */
@property (nonatomic, copy) NSString *title;

/**
 *  @brief  地址
 */
@property (nonatomic, copy) NSString *address;

/**
 *  @brief  电话
 */
@property (nonatomic, copy) NSString *tel;

/**
 *  @brief  POI类型，值说明：0:普通POI / 1:公交车站 / 2:地铁站 / 3:公交线路 / 4:行政区划
 */
@property (nonatomic, assign) QMSPoiType type;

/**
 *  @brief  坐标(经纬度)
 */
@property (nonatomic, assign) CLLocationCoordinate2D location;

/**
 *  @brief 是否模糊搜索
 */
@property (nonatomic, assign) NSInteger fuzzySearch;

/**
 *  @brief 搜索keyword
 */
@property (nonatomic, copy)   NSString *keyword;

/**
 *  @brief 数据库主键
 */
@property (nonatomic, assign) NSInteger hId;


@end

NS_ASSUME_NONNULL_END
