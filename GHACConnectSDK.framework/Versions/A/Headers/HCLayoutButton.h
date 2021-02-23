//
//  HCLayoutButton.h
//  vspios-honda-app
//
//  Created by 贾宇恒 on 2020/11/25.
//  Copyright © 2020 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface HCLayoutButton : UIButton

@property (nonatomic, assign) CGRect titleRect;
@property (nonatomic, assign) CGRect imageRect;
/**是否需要高亮, default is NO*/
@property (nonatomic, assign) BOOL needHighlighted;

@end

NS_ASSUME_NONNULL_END
