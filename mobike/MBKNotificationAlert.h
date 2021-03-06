//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKBaseAlertView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class MBKNotificationModel, NSString, UIButton, UIImageView, UILabel, UIView;
@protocol notificationAlertDelegate;

@interface MBKNotificationAlert : MBKBaseAlertView <UIGestureRecognizerDelegate>
{
    UIView *_backView;
    UIImageView *_iconImage;
    UIButton *_closeButton;
    UILabel *_titleLabel;
    UILabel *_contentLable;
    UIButton *_settingButton;
    id <notificationAlertDelegate> _delegate;
    MBKNotificationModel *_notificationModel;
}

@property(retain, nonatomic) MBKNotificationModel *notificationModel; // @synthesize notificationModel=_notificationModel;
@property(retain, nonatomic) id <notificationAlertDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *settingButton; // @synthesize settingButton=_settingButton;
@property(retain, nonatomic) UILabel *contentLable; // @synthesize contentLable=_contentLable;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIImageView *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)settingButtonClicked:(id)arg1;
- (void)closeButtonClicked:(id)arg1;
- (void)updateWithNotificationModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

