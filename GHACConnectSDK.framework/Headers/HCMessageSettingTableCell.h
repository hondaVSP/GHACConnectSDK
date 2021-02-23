//
//  HCMessageSettingTableCell.h
//  vspios-honda-app
//
//  Created by 贾宇恒 on 2020/5/12.
//  Copyright © 2020 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface HCMessageSettingTableCell : UITableViewCell

@property (nonatomic, assign) NSInteger on;

@property (nonatomic, strong) NSIndexPath *indexPath;

@property (nonatomic, copy) void (^block)(NSInteger isOn);

- (void)stopLoading:(NSInteger)isOn;

- (void)namedCellWithIndexPath:(NSIndexPath *)indexPath sections:(NSArray *)sections messages:(NSArray *)messages;

@end

NS_ASSUME_NONNULL_END
