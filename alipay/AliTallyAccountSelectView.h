//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APBaseSelectView.h"

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIButton, UIPickerView, UIView;
@protocol AliTallyAccountSelectViewDelegate;

@interface AliTallyAccountSelectView : APBaseSelectView <UIPickerViewDelegate, UIPickerViewDataSource>
{
    id <AliTallyAccountSelectViewDelegate> _delegate;
    NSString *_accountUuid;
    UIView *_titleView;
    UIButton *_cancelButton;
    UIButton *_confirmButton;
    UIPickerView *_accountPicker;
    double _heightForAccountPicker;
    double _heightForAccountPickerSuperView;
    NSMutableArray *_accountArray;
}

@property(retain, nonatomic) NSMutableArray *accountArray; // @synthesize accountArray=_accountArray;
@property(nonatomic) double heightForAccountPickerSuperView; // @synthesize heightForAccountPickerSuperView=_heightForAccountPickerSuperView;
@property(nonatomic) double heightForAccountPicker; // @synthesize heightForAccountPicker=_heightForAccountPicker;
@property(retain, nonatomic) UIPickerView *accountPicker; // @synthesize accountPicker=_accountPicker;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) NSString *accountUuid; // @synthesize accountUuid=_accountUuid;
@property(nonatomic) __weak id <AliTallyAccountSelectViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (void)didClickCancel:(id)arg1;
- (void)didClickConfirm:(id)arg1;
- (void)hideAccountSelectView;
- (void)setHidden:(_Bool)arg1;
- (void)setPickerAccount;
- (void)buildSubViews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 withAccountUuid:(id)arg2 withDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
