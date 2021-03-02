//
//  HCResultSearchBar.h
//  vspios-honda-app
//
//  Created by 蔡宇航 on 2019/8/22.
//  Copyright © 2019 东软睿驰汽车技术有限公司. All rights reserved.
//
/// 带结果的searchBar

#import <UIKit/UIKit.h>
@class HCResultSearchBar;

NS_ASSUME_NONNULL_BEGIN

@protocol HCResultSearchBarDelegate <NSObject>

@required
//关闭按钮点击事件
- (void)view:(HCResultSearchBar *)searchView didClickCloseBtn:(UIButton *)closeBtn;

//返回按钮点击事件
- (void)view:(HCResultSearchBar *)searchView didClickBackBtn:(UIButton *)backBtn;

//键盘搜索按钮点击事件
- (void)viewClickKeyboardSearchItem:(HCResultSearchBar *)searchView;

@optional

//输入框输入内容改变事件
- (void)viewTextDidChange:(HCResultSearchBar *)searchView;

//输入框是否可以编辑
- (BOOL)viewTextShouldBeginEditing:(HCResultSearchBar *)searchView;

@end

@interface HCResultSearchBar : UIView

@property (nonatomic ,weak) id<HCResultSearchBarDelegate> delegate;

@property (nonatomic ,strong) UITextField *searchTextField;

// 显示搜索结果总数
- (void) showResultCount:(NSUInteger)count;

@end

NS_ASSUME_NONNULL_END
