//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKBaseAlertView.h"

@class NSMutableArray, UIButton, UIImageView, UILabel;

@interface MBKAlertView : MBKBaseAlertView
{
    long long _messageAlignment;
    long long _style;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIButton *_cancelButton;
    UIButton *_sureButton;
    NSMutableArray *_operableButtons;
}

+ (id)alertViewWithGuideCardImages:(id)arg1 titles:(id)arg2 messages:(id)arg3 sureButtonTitles:(id)arg4 handler:(CDUnknownBlockType)arg5;
+ (id)alertViewWithImageUrl:(id)arg1 title:(id)arg2 message:(id)arg3 cancelButtonTitle:(id)arg4 sureButtonTitle:(id)arg5 handler:(CDUnknownBlockType)arg6;
+ (id)alertViewWithImage:(id)arg1 title:(id)arg2 message:(id)arg3 cancelButtonTitle:(id)arg4 sureButtonTitle:(id)arg5 handler:(CDUnknownBlockType)arg6;
+ (id)alertViewWithADImageUrl:(id)arg1 title:(id)arg2 message:(id)arg3 sureButtonTitle:(id)arg4 handler:(CDUnknownBlockType)arg5;
+ (id)alertViewWithADImage:(id)arg1 title:(id)arg2 message:(id)arg3 sureButtonTitle:(id)arg4 handler:(CDUnknownBlockType)arg5;
+ (id)alertViewWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 sureButtonTitle:(id)arg4 handler:(CDUnknownBlockType)arg5;
+ (id)alertViewWithTitle:(id)arg1 message:(id)arg2 handler:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) NSMutableArray *operableButtons; // @synthesize operableButtons=_operableButtons;
@property(retain, nonatomic) UIButton *sureButton; // @synthesize sureButton=_sureButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) long long messageAlignment; // @synthesize messageAlignment=_messageAlignment;
- (void).cxx_destruct;
- (id)initWithImageData:(id)arg1 title:(id)arg2 message:(id)arg3 cancelButtonTitle:(id)arg4 sureButtonTitle:(id)arg5 style:(long long)arg6 handler:(CDUnknownBlockType)arg7;
- (id)initWithGuideCardImages:(id)arg1 titles:(id)arg2 messages:(id)arg3 sureButtonTitles:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (id)initWithImageUrl:(id)arg1 title:(id)arg2 message:(id)arg3 cancelButtonTitle:(id)arg4 sureButtonTitle:(id)arg5 handler:(CDUnknownBlockType)arg6;
- (id)initWithImage:(id)arg1 title:(id)arg2 message:(id)arg3 cancelButtonTitle:(id)arg4 sureButtonTitle:(id)arg5 handler:(CDUnknownBlockType)arg6;
- (id)initWithADImageUrl:(id)arg1 title:(id)arg2 message:(id)arg3 sureButtonTitle:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (id)initWithADImage:(id)arg1 title:(id)arg2 message:(id)arg3 sureButtonTitle:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 sureButtonTitle:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (id)initWithTitle:(id)arg1 message:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)setToRedTitle;
- (void)addMasConstraints;
- (void)setupView;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1;

@end
