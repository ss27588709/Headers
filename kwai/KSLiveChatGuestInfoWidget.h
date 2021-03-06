//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class KSExtensionButton, KSLiveChatSpeakerView, NSLayoutConstraint, UIImageView, UILabel;

@interface KSLiveChatGuestInfoWidget : UIView
{
    UIImageView *_avatarView;
    UILabel *_userNameLabel;
    UILabel *_connectionStateLabel;
    KSLiveChatSpeakerView *_speakerView;
    KSExtensionButton *_closeButton;
    UIView *_connectionStatusView;
    NSLayoutConstraint *_connectionStateLabelTrailingConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *connectionStateLabelTrailingConstraint; // @synthesize connectionStateLabelTrailingConstraint=_connectionStateLabelTrailingConstraint;
@property(retain, nonatomic) UIView *connectionStatusView; // @synthesize connectionStatusView=_connectionStatusView;
@property(retain, nonatomic) KSExtensionButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) KSLiveChatSpeakerView *speakerView; // @synthesize speakerView=_speakerView;
@property(retain, nonatomic) UILabel *connectionStateLabel; // @synthesize connectionStateLabel=_connectionStateLabel;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
- (void)setShowSpeakerView:(_Bool)arg1;
- (void)createConstraints;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

