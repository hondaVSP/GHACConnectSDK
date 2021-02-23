//
//  HCCodeInputView.h
//  vspios-honda-app
//
//  Created by 郭琳琳 on 2019/8/7.
//  Copyright © 2019 郭琳琳. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HCCountDownButton.h"

NS_ASSUME_NONNULL_BEGIN

@interface HCCodeInputView : UIView

@property (nonatomic ,strong) UITextField *textField;//输入框

@property (nonatomic ,strong) HCCountDownButton *codeBtn;//验证码button

@end

NS_ASSUME_NONNULL_END
