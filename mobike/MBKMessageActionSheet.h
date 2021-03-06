//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKBaseActionSheet.h"

@class NSMutableArray, UIButton, UILabel;

@interface MBKMessageActionSheet : MBKBaseActionSheet
{
    long long _style;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIButton *_cancelButton;
    UIButton *_sureButton;
    NSMutableArray *_operableButtons;
}

@property(retain, nonatomic) NSMutableArray *operableButtons; // @synthesize operableButtons=_operableButtons;
@property(retain, nonatomic) UIButton *sureButton; // @synthesize sureButton=_sureButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 sureButtonTitle:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (id)initWithTitle:(id)arg1 message:(id)arg2 sureButtonTitle:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)initWithTitle:(id)arg1 message:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)addMasConstraints;
- (void)setupView;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1;

@end

