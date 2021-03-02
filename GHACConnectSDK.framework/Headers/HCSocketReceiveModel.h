//
//  HCSocketReceiveModel.h
//  vspios-honda-app
//
//  Created by 蔡宇航 on 2019/9/12.
//  Copyright © 2019 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HCSocketReceiveModel : NSObject

@end

@interface HCSocketReceiveBaseModel : NSObject

@property (nonatomic, copy)   NSString *type;       //1.车队成员实时位置信息 20.队长主动解散车队 21.队长被动解散车队 3.被移除 40.成员主动退出车队 41.成员被动退出车队 5.心跳连接测试返回标识  6.locationSwitch状态改变（开启/关闭） 7.服务器主动断开与客户端的长连接 99.服务端异常(需手动断开链接)

/**
 各位好：
 目前逻辑的 长链type如下：
 1、  队长解散车队：2
 2、  成员退出车队：4
 3、  队员被踢出车队：3
 改为如下：
 1、  队长主动解散车队：20
 2、  队长被动解散车队：21
 3、  成员主动退出车队：40
 4、  成员被动退出车队：41
 5、  队员被踢出车队：3
 */
@property (nonatomic, copy)   NSDictionary *data;

@end


// socket长链接 成员实时位置信息模型(type = 1时)
@interface HCSocketTeamLocationInfoModel : NSObject

@property (nonatomic, copy)   NSString *userId;
@property (nonatomic, copy)   NSDecimalNumber *userLon;
@property (nonatomic, copy)   NSDecimalNumber *userLat;
@property (nonatomic, assign) BOOL isLeader;
//@property (nonatomic, copy)   NSString *nickName;
//@property (nonatomic, copy)   NSString *headImg;
@property (nonatomic, copy)   NSString *name;     //名称、数据从type为0的数据集合里遍历赋值
@property (nonatomic, copy)   NSString *portrait; //头像、同上，数据从type为0的数据集合里遍历赋值
@property (nonatomic, copy)   NSString *dataFrom;   //GPS数据来源，car:0, phone:1
@property (nonatomic, assign) BOOL isOnline;    //1:在线 0:离线

@end


// socket长链接 异常信息模型(type = 99 或 type = 7时)
@interface HCSocketExceptionModel : NSObject

@property (nonatomic, copy)   NSString *code;
@property (nonatomic, copy)   NSString *message;
@property (nonatomic, copy)   NSString *timeStamp;

@end


NS_ASSUME_NONNULL_END
