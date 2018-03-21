//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIView;
@protocol MCOfficialHeaderViewDelegate;

@protocol MCOfficialHeaderViewProtocol <NSObject>
@property(nonatomic) long long statusBarStyle;
@property(retain, nonatomic) UIView *bottomView;
@property(nonatomic) __weak id <MCOfficialHeaderViewDelegate> delegate;
- (void)updateNaviBarWithButtonText:(NSString *)arg1 actionUrl:(NSString *)arg2;
- (void)updateTitle:(NSString *)arg1;
- (void)updateIconImageViewWithImageURL:(NSString *)arg1;
- (void)updateBackgroundImageWithImageURL:(NSString *)arg1;
- (void)updateAlpha;
- (void)setupViewNavi;
- (void)updateViewWithActionURL:(NSString *)arg1;
@end
