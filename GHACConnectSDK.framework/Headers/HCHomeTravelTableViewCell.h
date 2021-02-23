//
//  HCHomeTravelTableViewCell.h
//  GHACConnectSDK_Example
//
//  Created by 蔡宇航 on 2021/2/18.
//  Copyright © 2021 445878662@qq.com. All rights reserved.
//

#import <HondaConnectSDK/HCTableViewCell.h>

NS_ASSUME_NONNULL_BEGIN

@interface HCHomeTravelTableViewCellData : NSObject
@property (nonatomic, assign) NSInteger action;
@end

@interface HCHomeTravelTableViewCell : HCTableViewCell

+ (NICellObject *)createWithAction:(NSInteger)action;

@end

NS_ASSUME_NONNULL_END
