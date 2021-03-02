//
//  HCHomeAirConditionerTableViewCell.h
//  GHACConnectSDK_Example
//
//  Created by 蔡宇航 on 2021/2/18.
//  Copyright © 2021 445878662@qq.com. All rights reserved.
//

#import <HondaConnectSDK/HCTableViewCell.h>

NS_ASSUME_NONNULL_BEGIN

@interface HCHomeAirConditionerTableViewCellData : NSObject

@property (nonatomic, assign) NSInteger action;
@property (nonatomic, assign) NSInteger on;
@property (nonatomic, assign) NSInteger authType;

@end


@interface HCHomeAirConditionerTableViewCell : HCTableViewCell

+ (NICellObject *)cellWithAction:(NSInteger)action authType:(NSInteger)authType on:(NSInteger)on;

@end

NS_ASSUME_NONNULL_END
