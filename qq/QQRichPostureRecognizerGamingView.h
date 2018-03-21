//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/CAAnimationDelegate-Protocol.h>

@class AVPlayer, AVPlayerItem, NSString, NSTimer, UIActivityIndicatorView, UIButton;
@protocol QQRichPostureRecognizerGamingViewDelegate;

@interface QQRichPostureRecognizerGamingView : UIView <CAAnimationDelegate>
{
    _Bool _gamingRenderReady;
    _Bool _isFaceDance;
    _Bool _gamingStarted;
    _Bool _gamingClosed;
    _Bool _stopRecordOnStopingGame;
    int _entryVideoPreviewTipsIndex;
    id <QQRichPostureRecognizerGamingViewDelegate> _delegate;
    NSString *_pendentId;
    NSString *_pendentCategory;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    UIButton *_playBtn;
    UIActivityIndicatorView *_loadingIndicatorView;
    NSTimer *_loadingTimer;
    NSString *_guideVideoUrl;
    NSTimer *_entryVideoPreviewTipsTimer;
}

@property(nonatomic) int entryVideoPreviewTipsIndex; // @synthesize entryVideoPreviewTipsIndex=_entryVideoPreviewTipsIndex;
@property(retain, nonatomic) NSTimer *entryVideoPreviewTipsTimer; // @synthesize entryVideoPreviewTipsTimer=_entryVideoPreviewTipsTimer;
@property(retain, nonatomic) NSString *guideVideoUrl; // @synthesize guideVideoUrl=_guideVideoUrl;
@property(retain, nonatomic) NSTimer *loadingTimer; // @synthesize loadingTimer=_loadingTimer;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicatorView; // @synthesize loadingIndicatorView=_loadingIndicatorView;
@property(retain, nonatomic) UIButton *playBtn; // @synthesize playBtn=_playBtn;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) NSString *pendentCategory; // @synthesize pendentCategory=_pendentCategory;
@property(retain, nonatomic) NSString *pendentId; // @synthesize pendentId=_pendentId;
@property(nonatomic) _Bool stopRecordOnStopingGame; // @synthesize stopRecordOnStopingGame=_stopRecordOnStopingGame;
@property(nonatomic) __weak id <QQRichPostureRecognizerGamingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isIphoneX;
- (void)reportDanceGestureScore:(id)arg1;
- (void)finishPlay;
- (void)checkLoadingState;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)applicationWillResignActive:(id)arg1;
- (void)handleEnterBackground;
- (void)onStopRecordFinish;
- (_Bool)postureVideoShouldRetain;
- (void)fireEvent:(id)arg1;
- (void)onSaveBtn:(id)arg1;
- (void)onRestartBtn:(id)arg1;
- (void)stopRecord;
- (void)startRecord;
- (void)onShareBtn:(id)arg1;
- (void)removeBodyScan;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)onProgressAnimFinish;
- (void)showBodyScanProgress;
- (void)showBodyScan;
- (void)onGuidePlayerBtn:(id)arg1;
- (void)onGuideCloseBtn:(id)arg1;
- (void)removeGuideVideo;
- (void)showGuideVideo;
- (void)cleanEntryPreviewTips;
- (void)showEntryPreviewTips;
- (void)removeGamingResultFinish;
- (void)removeStopIcon;
- (void)closeGame:(id)arg1;
- (void)onStop:(id)arg1;
- (void)showStopIcon;
- (void)entryGamingResultFinishScene;
- (void)entryGameResultScene:(id)arg1;
- (void)entryGamingReadyScene;
- (void)entryBodyScan;
- (void)entryFaceScanning;
- (void)onGamingRenderReady;
- (void)onPostureRecognizerGameNotification:(id)arg1;
- (void)dealloc;
- (_Bool)getShowGuidVideoFlag;
- (void)saveShowGuidVideoFlag;
- (id)initWithFrame:(struct CGRect)arg1 isFaceDance:(_Bool)arg2 bFromH5:(_Bool)arg3 guideVideoUrl:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
