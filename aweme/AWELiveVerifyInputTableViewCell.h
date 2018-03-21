//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWELiveVerifyBaseTableViewCell.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIImageView, UILabel, UITextField;

@interface AWELiveVerifyInputTableViewCell : AWELiveVerifyBaseTableViewCell <UITextFieldDelegate>
{
    UILabel *_tipLabel;
    UITextField *_inputField;
    UIImageView *_warningView;
}

@property(retain, nonatomic) UIImageView *warningView; // @synthesize warningView=_warningView;
@property(retain, nonatomic) UITextField *inputField; // @synthesize inputField=_inputField;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)_updateModel:(id)arg1;
- (void)handleKeyboardDismiss:(id)arg1;
- (void)handleKeyboardShow:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)handleAuthenticationCheckNoti:(id)arg1;
- (void)handleMakeInputResignFirstResponderNoti:(id)arg1;
- (void)_removeObservers;
- (void)_addObservers;
- (void)configWithModel:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
