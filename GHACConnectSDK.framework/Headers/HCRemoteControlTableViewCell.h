//
//  HCRemoteControlTableViewCell.h
//  GHACConnectSDK_Example
//
//  Created by 贾宇恒 on 2021/2/23.
//  Copyright © 2021 445878662@qq.com. All rights reserved.
//

#import <HondaConnectSDK/HCTableViewCell.h>

@class HCHomeFunctionConfigModel;

NS_ASSUME_NONNULL_BEGIN

@protocol HCRemoteControlTableViewCellDelegate <NSObject>

- (void)remoteControlTableViewCellDidClickUnlockButton:(UIButton *)button;
- (void)remoteControlTableViewCellDidClickLockButton:(UIButton *)button;
- (void)remoteControlTableViewCellDidClickTrunkButton:(UIButton *)button;

@end

@interface HCRemoteControlTableViewCell : HCTableViewCell

+ (NICellObject *)cellWithFunctionConfig:(HCHomeFunctionConfigModel *)config delegate:(id <HCRemoteControlTableViewCellDelegate>)delegate;

@end

@interface RemoteControlTableViewCellData : NSObject

@property (nonatomic, strong) HCHomeFunctionConfigModel *configModel;

@property (nonatomic, weak) id <HCRemoteControlTableViewCellDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
