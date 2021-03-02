//
//  HCAnnotationInfoView.h
//  vspios-honda-app
//
//  Created by 蔡宇航 on 2020/1/3.
//  Copyright © 2020 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, AnnotationInfoType) {
    AnnotationInfoType_User     =   1,
    AnnotationInfoType_Vehicle  =   2,
};

@interface HCAnnotationInfoView : UIView

@property (nonatomic, copy) void(^vehicleNavigateAction)(void);

@property (nonatomic, copy) void(^forceVehicleLocationAction)(void);

- (void)setAnnotationInfoType:(AnnotationInfoType)infoType withInfo:(NSString *)info withTime:(long)time;

@property (nonatomic, assign) BOOL expand;

@end

@interface HCNavigateButton : UIControl

@end

NS_ASSUME_NONNULL_END
