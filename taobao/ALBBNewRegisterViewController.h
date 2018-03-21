//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALBBViewController.h"

#import "ALBBCountryBtnDelegate-Protocol.h"
#import "ALBBNewRegisterPageAppearance-Protocol.h"
#import "ALBBScrollViewDelegate-Protocol.h"
#import "ALBBSmsBoxDelegate-Protocol.h"
#import "NCNoCaptchaProtocol-Protocol.h"

@class ALBBCountryButton, ALBBSMSBox, ALBBScrollView, NSDictionary, NSString, UIButton, UILabel, UIView;

@interface ALBBNewRegisterViewController : ALBBViewController <ALBBSmsBoxDelegate, NCNoCaptchaProtocol, ALBBNewRegisterPageAppearance, ALBBCountryBtnDelegate, ALBBScrollViewDelegate>
{
    int _topPadding;
    NSDictionary *_registerContext;
    ALBBSMSBox *_smsBox;
    UIButton *_regBtn;
    NSString *_sdkSessionId;
    ALBBCountryButton *_countryButton;
    NSString *_site;
    NSString *_sessionId;
    UILabel *_selectedCountryLable;
    UIButton *_taobaoProtocalBtn;
    UIButton *_alipayProtocalBtn;
    UIButton *_privacyProtocalBtn;
    UILabel *_readLabel;
    UIView *_scrollContentView;
    ALBBScrollView *_scrollView;
}

@property(retain, nonatomic) ALBBScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *scrollContentView; // @synthesize scrollContentView=_scrollContentView;
@property(nonatomic) int topPadding; // @synthesize topPadding=_topPadding;
@property(retain, nonatomic) UILabel *readLabel; // @synthesize readLabel=_readLabel;
@property(retain, nonatomic) UIButton *privacyProtocalBtn; // @synthesize privacyProtocalBtn=_privacyProtocalBtn;
@property(retain, nonatomic) UIButton *alipayProtocalBtn; // @synthesize alipayProtocalBtn=_alipayProtocalBtn;
@property(retain, nonatomic) UIButton *taobaoProtocalBtn; // @synthesize taobaoProtocalBtn=_taobaoProtocalBtn;
@property(retain, nonatomic) UILabel *selectedCountryLable; // @synthesize selectedCountryLable=_selectedCountryLable;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(copy, nonatomic) NSString *site; // @synthesize site=_site;
@property(retain, nonatomic) ALBBCountryButton *countryButton; // @synthesize countryButton=_countryButton;
@property(copy, nonatomic) NSString *sdkSessionId; // @synthesize sdkSessionId=_sdkSessionId;
@property(retain, nonatomic) UIButton *regBtn; // @synthesize regBtn=_regBtn;
@property(retain, nonatomic) ALBBSMSBox *smsBox; // @synthesize smsBox=_smsBox;
@property(copy, nonatomic) NSDictionary *registerContext; // @synthesize registerContext=_registerContext;
- (void).cxx_destruct;
- (void)SMSTextFieldDidEndEditing:(id)arg1;
- (void)SMSTextFieldShouldBeginEditing:(id)arg1;
- (void)sendSms:(id)arg1 smsSid:(id)arg2;
- (void)sendSms;
- (void)verifyDidFinishedWithStatus:(int)arg1 token:(id)arg2 signature:(id)arg3 session:(id)arg4;
- (void)showNativeMechineVerify;
- (void)onRegister:(id)arg1 loginViewController:(id)arg2 isKinship:(_Bool)arg3;
- (void)onRegister;
- (void)ALBBSmsBox:(id)arg1 inputAvailable:(_Bool)arg2;
- (id)contentView;
- (id)nextStepButton;
- (void)onBack;
- (void)textFieldDidChange:(id)arg1;
- (void)createCountryBox;
- (void)resetBox;
- (void)resetBoxWithCountry:(id)arg1;
- (void)openProtocal:(id)arg1;
- (void)openAlipayProtocal;
- (void)openPrivacyProtocal;
- (void)openTaoBaoProtocal;
- (void)hideRegistView;
- (void)openHelpPage;
- (void)viewDidLoad;
- (void)restoreUI;
- (void)alu_p_onTouchesBegan:(id)arg1;
- (void)createScrollView;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)alipayProtolBtn;
- (id)priProtolBtn;
- (id)tbProtolBtn;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
