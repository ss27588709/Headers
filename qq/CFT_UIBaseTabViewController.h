//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/CFT_UICustomNaviBarViewController.h>

@class UINavigationController, UIView, UIViewController;

@interface CFT_UIBaseTabViewController : CFT_UICustomNaviBarViewController
{
    _Bool _isInit;
    UINavigationController *_navController;
    UIView *_contentView;
    UIViewController *_containerVC;
}

@property(nonatomic) UIViewController *containerVC; // @synthesize containerVC=_containerVC;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) UINavigationController *navController; // @synthesize navController=_navController;
- (void)viewDidHide;
- (void)viewWillHide;
- (void)viewDidShow;
- (void)viewWillShow;
- (void)viewInit;
- (void)showLoadingViewWithText:(id)arg1;
- (void)showLoadingView;
- (_Bool)isSupportRightDragToGoBack;
- (id)navigationItem;
- (id)navigationController;
- (void)dealloc;

@end
