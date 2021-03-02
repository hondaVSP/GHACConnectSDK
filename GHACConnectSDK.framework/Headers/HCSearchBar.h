//
//  HCSearchBar.h
//  HondaApp_iOS
//
//  Created by 蔡宇航 on 2019/7/16.
//  Copyright © 2019 东软睿驰汽车技术有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@class HCSearchBar;

@protocol HCSearchBarDelegate <NSObject>
@required
//搜索按钮点击事件
- (void)view:(HCSearchBar *)searchBar didClickSearchBtn:(UIButton *)searchBtn;

//返回按钮点击事件
- (void)view:(HCSearchBar *)searchBar didClickBackBtn:(UIButton *)backBtn;

//键盘搜索按钮点击事件
- (void)viewClickKeyboardSearchItem:(HCSearchBar *)searchBar;

@optional

//输入框输入内容改变事件
- (void)viewTextDidChange:(HCSearchBar *)searchBar;

//输入框是否可以编辑
- (BOOL)viewTextShouldBeginEditing:(HCSearchBar *)searchView;

@end

@interface HCSearchBar : UIView

@property (nonatomic ,weak) id<HCSearchBarDelegate> delegate_;

@property (nonatomic ,strong) UITextField *searchTextField;

@property (nonatomic ,strong) UIButton *searchBtn;

@end

NS_ASSUME_NONNULL_END
