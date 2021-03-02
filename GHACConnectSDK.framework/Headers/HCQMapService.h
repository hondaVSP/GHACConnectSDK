//
//  HCQMapService.h
//  vspios-honda-app
//
//  Created by 蔡宇航 on 2019/8/28.
//  Copyright © 2019 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CLLocation.h>
@class HCQMapCommonSearchResModel;
@class QMSReverseGeoCodeSearchResult;

NS_ASSUME_NONNULL_BEGIN

/// POI成功callback
typedef void(^POISuccessCallback)(NSString *keyword, NSUInteger totalCount, NSArray<HCQMapCommonSearchResModel*> *models);

/// POI失败callback
typedef void(^POIFailureCallback)(NSString *keyword, NSError *error);

/// 关键词联想成功callback
typedef void(^SuggestionSuccessCallback)(NSString *input, NSUInteger totalCount, NSArray<HCQMapCommonSearchResModel*> *models);

/// 关键词联想失败callback
typedef void(^SuggestionFailureCallback)(NSString *input, NSError *error);

/// 逆地理编码成功callback
typedef void(^ReverseGeoCodeSuccessCallback)(QMSReverseGeoCodeSearchResult *result);

/// 逆地理编码失败callback
typedef void(^ReverseGeoCodeFailureCallback)(NSError *error);


@interface HCQMapService : NSObject

+ (instancetype) shareQMapService;





/**
 * poi查询
 */
- (void) QMapSearchWithKeyword:(NSString *)keyword
                nearbyLocation:(CLLocationCoordinate2D)coor
                      withPage:(NSInteger)page
                     onSuccess:(POISuccessCallback)onSuccess
                     onFailure:(POIFailureCallback)onFailure;


/**
 * 关键词输入提示
 */
- (void) QMapKeywordInputSuggestion:(NSString *)input
                           withPage:(NSInteger)page
                          onSuccess:(SuggestionSuccessCallback)onSuccess
                          onFailure:(SuggestionFailureCallback)onFailure;

/**
 * 逆地址解析(坐标位置描述)
 */
- (void) QMapReverseGeocoderWithLocation:(CLLocationCoordinate2D)location
                       onSuccess:(ReverseGeoCodeSuccessCallback)onSuccess
                       onFailure:(ReverseGeoCodeFailureCallback)onFailure;


@end

NS_ASSUME_NONNULL_END
