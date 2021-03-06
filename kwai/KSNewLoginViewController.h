//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSNewBaseLoginViewController.h"

@class KSLoginMainButton, KSLoginPasswordInputView, KSLoginPhoneInputView, KSLoginSimpleInputView, KSLoginWrapperViewController, NSString, UIButton;

@interface KSNewLoginViewController : KSNewBaseLoginViewController
{
    short _loginStyle;
    KSLoginWrapperViewController *_wrapperVC;
    KSLoginPhoneInputView *_phoneInputView;
    KSLoginSimpleInputView *_emailInputView;
    KSLoginPasswordInputView *_passwordInputView;
    KSLoginMainButton *_loginButton;
    UIButton *_haveProblemButton;
}

@property(retain, nonatomic) UIButton *haveProblemButton; // @synthesize haveProblemButton=_haveProblemButton;
@property(retain, nonatomic) KSLoginMainButton *loginButton; // @synthesize loginButton=_loginButton;
@property(retain, nonatomic) KSLoginPasswordInputView *passwordInputView; // @synthesize passwordInputView=_passwordInputView;
@property(retain, nonatomic) KSLoginSimpleInputView *emailInputView; // @synthesize emailInputView=_emailInputView;
@property(retain, nonatomic) KSLoginPhoneInputView *phoneInputView; // @synthesize phoneInputView=_phoneInputView;
@property(nonatomic) short loginStyle; // @synthesize loginStyle=_loginStyle;
@property(nonatomic) __weak KSLoginWrapperViewController *wrapperVC; // @synthesize wrapperVC=_wrapperVC;
- (void).cxx_destruct;
- (void)_setupEmailInfo;
- (void)didClickLoginButton:(id)arg1;
- (id)viewToCompare;
- (id)inputViewsToAdjustPosition;
- (void)showLoginPrompt:(id)arg1;
- (void)showErrorMsgInNavAlert:(id)arg1;
- (void)showErrorInNavAlert:(id)arg1;
- (void)loginErrorExceedMaxCount;
- (void)setupCountryInfoForPhoneInputView:(id)arg1;
- (_Bool)canGotoNextStep;
- (id)nextStepButton;
- (BOOL)leftBarButtonType;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
@property(retain, nonatomic) NSString *phone; // @dynamic phone;
- (void)setupThirdPartyServiceBar:(id)arg1;
- (void)bindWithPhone:(id)arg1 countryInfo:(id)arg2;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

