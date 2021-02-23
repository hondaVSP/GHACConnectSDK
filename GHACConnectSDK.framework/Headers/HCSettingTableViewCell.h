//
//  HCSettingTableViewCell.h
//  GHACConnectSDK_Example
//
//  Created by 贾宇恒 on 2021/2/18.
//  Copyright © 2021 445878662@qq.com. All rights reserved.
//

#import <HondaConnectSDK/HCTableViewCell.h>

NS_ASSUME_NONNULL_BEGIN

@interface HCSettingTableViewCell : HCTableViewCell

+ (NICellObject *)cellWithTitle:(NSString *)title;

@end

NS_ASSUME_NONNULL_END
