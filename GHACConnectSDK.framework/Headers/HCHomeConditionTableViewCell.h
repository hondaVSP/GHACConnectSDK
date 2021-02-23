//
//  HCHomeConditionTableViewCell.h
//  GHACConnectSDK_Example
//
//  Created by 蔡宇航 on 2021/2/18.
//  Copyright © 2021 445878662@qq.com. All rights reserved.
//

#import <HondaConnectSDK/HCTableViewCell.h>

NS_ASSUME_NONNULL_BEGIN

@interface HCHomeConditionTableViewCellData : NSObject
@property (nonatomic, assign) NSInteger action;
@property (nonatomic, copy) NSString *msg;
@end

@interface HCHomeConditionTableViewCell : HCTableViewCell

+ (NICellObject *)createWithAction:(NSInteger)action withMsg:(NSString *)msg;

@end

NS_ASSUME_NONNULL_END
