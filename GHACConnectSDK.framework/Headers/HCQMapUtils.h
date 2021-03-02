//
//  HCQMapUtils.h
//  vspios-honda-app
//
//  Created by 蔡宇航 on 2019/8/22.
//  Copyright © 2019 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <QMapKit/QMapKit.h>
@class HCQMapCommonSearchResModel;
@class HCSocketTeamLocationInfoModel;
@class HCQMSReverseGeoCodeSearchResult;
@class HCUserLocation;

NS_ASSUME_NONNULL_BEGIN

@interface HCQMapUtils : NSObject

/**
 * 创建搜索结果标注
 */
+ (NSArray<id <QAnnotation> > *) setupSearchAnnotations:(NSArray<HCQMapCommonSearchResModel*> *)datas;

/**
 * 存用户位置信息 (经纬度和地理信息)
 */
+ (void) saveUserLocationInfo:(HCUserLocation *)locationInfo;

/**
 * 取用户位置信息 (经纬度和地理信息)
 */
+ (HCUserLocation *) getUserLocationInfo;


/**
 * 创建队伍成员位置标注
 */
+ (NSArray<id <QAnnotation> > *) setupTeamLocationAnnotations:(NSArray<HCSocketTeamLocationInfoModel*> *)datas;

/**
 * 创建队伍目的地终点位置标注
 */
+ (id <QAnnotation>)setupTeamDestinationAnnotation:(NSString *)destinationLon :(NSString*)destinationLat;


/**
 * 获取当前地图的显示范围 以某中心经纬度设置
 */
+ (QCoordinateRegion)getCoordinateRegion:(CLLocationCoordinate2D)centerCoor withAnnotations:(NSArray<id <QAnnotation> > *)annotations;

/**
 * 获取当前地图的显示范围
 */
+ (QCoordinateRegion)getCoordinateRegionWithAnnotations:(NSArray<id <QAnnotation> > *)annotations;


@end


@interface HCUserLocation : NSObject <NSCopying>


// 位置信息
@property (readonly, nonatomic, strong) CLLocation *location;

// heading信息
@property (readonly, nonatomic, strong) CLHeading *heading;

// 国家
@property (readonly, nonatomic, copy) NSString *nation;

// 省、直辖市
@property (readonly, nonatomic, copy) NSString *province;

//市、地级区及同级行政区划
@property (readonly, nonatomic, copy) NSString *city;

//构造函数
- (instancetype)initWithQUserLocation:(QUserLocation *)qLocation
                      withQReverseGeo:(HCQMSReverseGeoCodeSearchResult *)qGeo;
@end

NS_ASSUME_NONNULL_END
