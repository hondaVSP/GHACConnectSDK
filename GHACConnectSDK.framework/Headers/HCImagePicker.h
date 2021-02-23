//
//  HCImagePicker.h
//  vspios-honda-app
//
//  Created by 赵小旭 on 2019/8/29.
//  Copyright © 2019年 贾宇恒. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^HCImagePickerFinishAction)(UIImage *image);
typedef void(^HCImagePickerCancelAction)(void);

@interface HCImagePicker : NSObject

/**
 显示ImagePicker

 @param viewController 用于presentImagePicker
 @param finishAction 选择照片回调
 */
+ (void)showImagePickerFromViewController:(UIViewController *)viewController
                             allowEditing:(BOOL)allowEditing
                             finishAction:(HCImagePickerFinishAction)finishAction
                             cancelAction:(HCImagePickerCancelAction)cancelAction;

@end

NS_ASSUME_NONNULL_END
