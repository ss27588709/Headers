//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class CAAnimationlessLayer, KSSwitchButton, KSThirdPartSignUpBtnBar, KSUserAccountInputView, KSUserPrasswordInputView, NSRegularExpression, NSString, UIButton, UITextField;
@protocol KSLoginAndSignCoverViewDelegate;

@interface KSLoginAndSignCoverView : UIView <UITextFieldDelegate>
{
    int _type;
    id <KSLoginAndSignCoverViewDelegate> _delegate;
    KSThirdPartSignUpBtnBar *_thiredPartLoginBar;
    KSSwitchButton *_signBtn;
    KSSwitchButton *_loginBtn;
    CAAnimationlessLayer *_icon;
    UIView *_contentView;
    UITextField *_phoneSignUpInputView;
    UIButton *_signNextBtn;
    KSUserAccountInputView *_userAccountInputView;
    KSUserPrasswordInputView *_userPrasswordInputView;
    NSRegularExpression *_phoneNumberExpression;
}

@property(retain, nonatomic) NSRegularExpression *phoneNumberExpression; // @synthesize phoneNumberExpression=_phoneNumberExpression;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) KSUserPrasswordInputView *userPrasswordInputView; // @synthesize userPrasswordInputView=_userPrasswordInputView;
@property(retain, nonatomic) KSUserAccountInputView *userAccountInputView; // @synthesize userAccountInputView=_userAccountInputView;
@property(retain, nonatomic) UIButton *signNextBtn; // @synthesize signNextBtn=_signNextBtn;
@property(retain, nonatomic) UITextField *phoneSignUpInputView; // @synthesize phoneSignUpInputView=_phoneSignUpInputView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) CAAnimationlessLayer *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) KSSwitchButton *loginBtn; // @synthesize loginBtn=_loginBtn;
@property(retain, nonatomic) KSSwitchButton *signBtn; // @synthesize signBtn=_signBtn;
@property(retain, nonatomic) KSThirdPartSignUpBtnBar *thiredPartLoginBar; // @synthesize thiredPartLoginBar=_thiredPartLoginBar;
@property(nonatomic) __weak id <KSLoginAndSignCoverViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)switchSignNextBtnHiddenWithString:(id)arg1;
- (void)notifyDelegate;
- (void)defaultUI;
- (void)switchPhoneOrEmail:(id)arg1;
- (void)didTapLoginBtn;
- (void)didTapSignBtn;
- (void)didTapForgetPasswordBtn;
- (void)didTapDoneBtn;
- (void)didTapSignNextBtn;
- (void)didChangeInputView:(id)arg1;
- (void)didTapCountrySwitchBtn;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (id)currentLoginEmail;
- (id)currentLoginPhone;
- (void)hiddenLoginKeyboard;
- (void)clearPasswordInputArea;
- (void)drawWithCountryInfo:(id)arg1;
- (void)adjustKeyboardHeight:(double)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
