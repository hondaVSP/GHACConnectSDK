//
//  HCAnimateSearchBarView.h
//  vspios-honda-app
//
//  Created by 蔡宇航 on 2020/4/1.
//  Copyright © 2020 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>
@class HCAnimateSearchBarView;

NS_ASSUME_NONNULL_BEGIN

@protocol HCAnimateSearchBarDelegate <NSObject>

@required
//关闭按钮点击事件
- (void)animateView:(HCAnimateSearchBarView *)searchView didClickCloseBtn:(UIButton *)closeBtn;

//返回按钮点击事件
- (void)animateView:(HCAnimateSearchBarView *)searchView didClickBackBtn:(UIButton *)backBtn;

//键盘搜索按钮点击事件
- (void)animateViewClickKeyboardSearchItem:(HCAnimateSearchBarView *)searchView;

@optional

//输入框输入内容改变事件
- (void)animateViewTextDidChange:(HCAnimateSearchBarView *)searchView;

//输入框是否可以编辑
- (BOOL)animateViewTextShouldBeginEditing:(HCAnimateSearchBarView *)searchView;

@end

@interface HCAnimateSearchBarView : UIView

@property (nonatomic ,weak) id<HCAnimateSearchBarDelegate> delegate;

@property (nonatomic ,strong) UITextField *searchTextField;

// 显示搜索结果总数
- (void) showResultCount:(NSUInteger)count;

@end

NS_ASSUME_NONNULL_END
