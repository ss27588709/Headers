//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/TBMultimediaEditView.h>

#import <QQMainProject/QUIActionSheetDelegate-Protocol.h>
#import <QQMainProject/TBMultimediaEditComponentDelegate-Protocol.h>
#import <QQMainProject/UIAlertViewDelegate-Protocol.h>

@class MQZoneMoodEditInputCell, MQzoneFollowTipView, NSString, UIButton, UIView, UIViewController;
@protocol MQZoneMoodEditInputCellDelegate, MQZoneVideoEditViewDelegate;

@interface MQZoneVideoEditView : TBMultimediaEditView <QUIActionSheetDelegate, UIAlertViewDelegate, TBMultimediaEditComponentDelegate>
{
    UIButton *_qualityButton;
    _Bool _qualityIsSelect;
    _Bool _waitForWifi;
    UIView *_inputView;
    MQZoneMoodEditInputCell *_inputCell;
    UIButton *_authorityButton;
    UIButton *_synQZoneButton;
    _Bool _isSynQZone;
    UIButton *_maskView;
    UIView *_line;
    long long _videoFromType;
    MQzoneFollowTipView *_tipView;
    UIButton *_timerButton;
    _Bool _showQualityButton;
    _Bool _gifSelected;
    unsigned long long _editSettingMode;
    id <MQZoneVideoEditViewDelegate> _qzDelegate;
    UIViewController<MQZoneMoodEditInputCellDelegate> *_parentViewController;
}

@property(nonatomic) __weak UIViewController<MQZoneMoodEditInputCellDelegate> *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(nonatomic) __weak id <MQZoneVideoEditViewDelegate> qzDelegate; // @synthesize qzDelegate=_qzDelegate;
@property(readonly, nonatomic) _Bool gifSelected; // @synthesize gifSelected=_gifSelected;
@property(nonatomic) _Bool showQualityButton; // @synthesize showQualityButton=_showQualityButton;
@property(nonatomic) unsigned long long editSettingMode; // @synthesize editSettingMode=_editSettingMode;
- (void).cxx_destruct;
- (void)handleGestureRecognizer:(id)arg1;
- (void)componentStart:(id)arg1;
- (void)componentButtonClicked:(id)arg1;
- (id)playerView;
- (void)tap;
- (void)createMaskView;
- (void)inputCellCheckTextState:(id)arg1 text:(id)arg2;
- (void)inputCellBecomeActive:(id)arg1;
- (void)inputCell:(id)arg1 textDidChange:(id)arg2;
- (void)onKeyboardWillHideNotify:(id)arg1;
- (void)onKeyboardWillShowNotify:(id)arg1;
- (void)updateAuthorityButton:(id)arg1;
- (_Bool)isSynQZone;
- (_Bool)isWaitForWifi;
- (_Bool)isHDVideo;
- (_Bool)isOriginalVideo;
- (void)hideHDTipView;
- (void)showHDTipView;
- (id)deleteCellString;
- (void)clickTimerButton;
- (void)clickSynQZoneButton:(id)arg1;
- (void)clickAuthorityButton:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleOpenYellowVip;
- (void)clickOriginalButton:(id)arg1;
- (void)createTimerButton;
- (void)createVideoQualityButtonWithTitle:(id)arg1;
- (void)createAuthorityButton;
- (void)createSynQZoneButton;
- (void)createInputCell;
- (void)createInputView;
- (void)setGifSelected:(_Bool)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)isTimerSelected;
- (void)hideInputView:(_Bool)arg1;
- (id)shotImage;
- (void)startToPublish;
- (void)publish;
- (_Bool)switchToComponent:(id)arg1;
- (void)reset;
- (void)setSendButtonTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 components:(id)arg2 multimediaType:(unsigned long long)arg3 withInitParam:(id)arg4 videoFromType:(long long)arg5 parentViewController:(id)arg6;
- (id)initWithFrame:(struct CGRect)arg1 components:(id)arg2 multimediaType:(unsigned long long)arg3 withInitParam:(id)arg4 videoFromType:(long long)arg5 parentViewController:(id)arg6 editSettingMode:(unsigned long long)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
