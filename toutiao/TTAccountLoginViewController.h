//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTAccountLoginBaseViewController.h"

@class NSString, SSThemedButton, SSThemedLabel, TTAlphaThemedButton, TTUserPrivacyView;

@interface TTAccountLoginViewController : TTAccountLoginBaseViewController
{
    NSString *_title;
    NSString *_source;
    NSString *_loginSource;
    SSThemedLabel *_upTipLabel;
    TTAlphaThemedButton *_upInfoButton;
    SSThemedLabel *_upInfoLabel;
    SSThemedLabel *_loginTipLabel;
    SSThemedLabel *_emailFindPasswordTipLabel;
    SSThemedButton *_switchButton;
    TTUserPrivacyView *_privacyView;
    NSString *_thirdPartySource;
    NSString *_nonThirdPartySource;
    long long _loginStyle;
}

@property(nonatomic) long long loginStyle; // @synthesize loginStyle=_loginStyle;
@property(copy, nonatomic) NSString *nonThirdPartySource; // @synthesize nonThirdPartySource=_nonThirdPartySource;
@property(copy, nonatomic) NSString *thirdPartySource; // @synthesize thirdPartySource=_thirdPartySource;
@property(retain, nonatomic) TTUserPrivacyView *privacyView; // @synthesize privacyView=_privacyView;
@property(retain, nonatomic) SSThemedButton *switchButton; // @synthesize switchButton=_switchButton;
@property(retain, nonatomic) SSThemedLabel *emailFindPasswordTipLabel; // @synthesize emailFindPasswordTipLabel=_emailFindPasswordTipLabel;
@property(retain, nonatomic) SSThemedLabel *loginTipLabel; // @synthesize loginTipLabel=_loginTipLabel;
@property(retain, nonatomic) SSThemedLabel *upInfoLabel; // @synthesize upInfoLabel=_upInfoLabel;
@property(retain, nonatomic) TTAlphaThemedButton *upInfoButton; // @synthesize upInfoButton=_upInfoButton;
@property(retain, nonatomic) SSThemedLabel *upTipLabel; // @synthesize upTipLabel=_upTipLabel;
@property(copy, nonatomic) NSString *loginSource; // @synthesize loginSource=_loginSource;
- (void)setSource:(id)arg1;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)uMengPlatform:(id)arg1;
- (_Bool)isVerifyWordOrPassWordValid;
- (_Bool)validateMobileNumber:(id)arg1;
- (id)prefixThirdPartySource;
- (id)_indicatorErrorTextFromError:(id)arg1;
- (void)trackLoginSuccessByThirdPartyPlatform:(id)arg1;
- (void)doIfShowPlatformsTracker;
- (void)didReceiveAccountLoginSuccess:(_Bool)arg1 withPlatform:(id)arg2;
- (void)respondsToAccountAuthLoginWithError:(id)arg1 forPlatform:(id)arg2;
- (_Bool)isContentValid;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)loginPlatform:(id)arg1;
- (void)registerButtonClicked:(id)arg1;
- (void)monitorUserLoginFailureWithError:(id)arg1 status:(long long)arg2;
- (void)loginWithMail;
- (void)loginWithPassword;
- (void)quickLogin;
- (void)sendCode:(long long)arg1;
- (void)emailButtonClick:(id)arg1;
- (void)resendButtonClicked:(id)arg1;
- (void)passwordPageShowStatistics;
- (void)mobilePageShowStatistics;
- (void)switchButtonClicked:(id)arg1;
- (void)rightItemClicked;
- (void)fitResendView;
- (void)layoutSubviews;
- (void)refreshSubviews;
- (void)initSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dismissMyself:(id)arg1;
- (_Bool)__isBeingPresentedModally__;
- (void)viewDidLoad;
- (id)source;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 source:(id)arg2 isPasswordLogin:(_Bool)arg3;
- (id)initWithTitle:(id)arg1 source:(id)arg2;

@end

