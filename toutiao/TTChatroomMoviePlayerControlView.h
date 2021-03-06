//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TTChatroomMoviePlayerControlSliderViewDelegate-Protocol.h"

@class ExploreMovieMiniSliderView, NSString, NSTimer, SSThemedLabel, TTAlphaThemedButton, TTChatroomMoviePlayerControlLiveBottomView, TTChatroomMoviePlayerControlTipView, TTChatroomMoviePlayerControlTopView, TTImageView, TTMovieAdjustView, TTMovieBrightnessView, UIPanGestureRecognizer, UISlider;
@protocol TTChatroomMoviePlayerControlViewDelegate;

@interface TTChatroomMoviePlayerControlView : UIView <TTChatroomMoviePlayerControlSliderViewDelegate>
{
    _Bool _touchScreenToExit;
    _Bool _isPlaying;
    _Bool _isFullscreen;
    _Bool _isDetail;
    _Bool _titleBarViewAlwaysHide;
    long long _lastOrientation;
    unsigned long long _gestureType;
    double _progressAtTouchBegin;
    _Bool _isActive;
    double _lastTimeReportVolumeChanged;
    _Bool _alwaysShowDetailButton;
    _Bool _hasFinished;
    _Bool _forbidLayout;
    _Bool _enableResolution;
    _Bool _enableResulutionButtonClicked;
    _Bool _showTitleInNonFullscreen;
    id <TTChatroomMoviePlayerControlViewDelegate> _delegate;
    TTImageView *_logoView;
    TTChatroomMoviePlayerControlTipView *_tipView;
    TTAlphaThemedButton *_showDetailButton;
    TTChatroomMoviePlayerControlLiveBottomView *_liveBottomBarView;
    NSString *_resolutionString;
    CDUnknownBlockType _toolBarHiddenBlock;
    TTChatroomMoviePlayerControlTopView *_titleView;
    TTAlphaThemedButton *_playButton;
    SSThemedLabel *_liveTextLabel;
    double _timeDuration;
    NSTimer *_playbackControlViewTimer;
    UISlider *_volumeViewSlider;
    ExploreMovieMiniSliderView *_miniSlider;
    TTMovieAdjustView *_adjustView;
    TTMovieBrightnessView *_brightnessView;
    UIPanGestureRecognizer *_panGesture;
}

@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(retain, nonatomic) TTMovieBrightnessView *brightnessView; // @synthesize brightnessView=_brightnessView;
@property(retain, nonatomic) TTMovieAdjustView *adjustView; // @synthesize adjustView=_adjustView;
@property(retain, nonatomic) ExploreMovieMiniSliderView *miniSlider; // @synthesize miniSlider=_miniSlider;
@property(retain, nonatomic) UISlider *volumeViewSlider; // @synthesize volumeViewSlider=_volumeViewSlider;
@property(retain, nonatomic) NSTimer *playbackControlViewTimer; // @synthesize playbackControlViewTimer=_playbackControlViewTimer;
@property(nonatomic) double timeDuration; // @synthesize timeDuration=_timeDuration;
@property(nonatomic) _Bool showTitleInNonFullscreen; // @synthesize showTitleInNonFullscreen=_showTitleInNonFullscreen;
@property(retain, nonatomic) SSThemedLabel *liveTextLabel; // @synthesize liveTextLabel=_liveTextLabel;
@property(retain, nonatomic) TTAlphaThemedButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) TTChatroomMoviePlayerControlTopView *titleView; // @synthesize titleView=_titleView;
@property(copy, nonatomic) CDUnknownBlockType toolBarHiddenBlock; // @synthesize toolBarHiddenBlock=_toolBarHiddenBlock;
@property(copy, nonatomic) NSString *resolutionString; // @synthesize resolutionString=_resolutionString;
@property(nonatomic) _Bool enableResulutionButtonClicked; // @synthesize enableResulutionButtonClicked=_enableResulutionButtonClicked;
@property(nonatomic) _Bool enableResolution; // @synthesize enableResolution=_enableResolution;
@property(nonatomic) _Bool forbidLayout; // @synthesize forbidLayout=_forbidLayout;
@property(nonatomic) _Bool hasFinished; // @synthesize hasFinished=_hasFinished;
@property(nonatomic) _Bool alwaysShowDetailButton; // @synthesize alwaysShowDetailButton=_alwaysShowDetailButton;
@property(retain, nonatomic) TTChatroomMoviePlayerControlLiveBottomView *liveBottomBarView; // @synthesize liveBottomBarView=_liveBottomBarView;
@property(retain, nonatomic) TTAlphaThemedButton *showDetailButton; // @synthesize showDetailButton=_showDetailButton;
@property(retain, nonatomic) TTChatroomMoviePlayerControlTipView *tipView; // @synthesize tipView=_tipView;
@property(retain, nonatomic) TTImageView *logoView; // @synthesize logoView=_logoView;
@property(nonatomic) __weak id <TTChatroomMoviePlayerControlViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)track:(id)arg1 label:(id)arg2 isVolume:(_Bool)arg3;
- (void)applicationDidEnterBackground;
- (void)brightnessAdd:(double)arg1;
- (void)volumeChanged:(id)arg1;
- (void)volumeAdd:(double)arg1;
- (void)p_configureVolumeView;
- (void)orientationChanged:(id)arg1;
- (void)endMonitorDeviceOrientationChange;
- (void)beginMonitorDeviceOrientationChange;
- (void)sliderWatchedProgressChanged:(id)arg1;
- (void)sliderWatchedProgressChanging:(id)arg1;
- (void)sliderWatchedProgressWillChange:(id)arg1;
- (_Bool)hasAdButton;
- (void)reLayoutToolBar4ReplayOfRNLiveWithMuteButton:(id)arg1;
- (void)resetToolBar4RNLiveWithStatusView:(id)arg1 muteButton:(id)arg2;
- (void)resetToolBar4LiveVideoWithStatusView:(id)arg1 numOfParticipantsView:(id)arg2;
- (void)reLayoutToolBar4ReplayVideoOfLiveRoom;
- (void)layoutSubviews;
- (void)updateFrame;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)refreshSliderFrame;
- (id)toolBar;
- (void)hideLogoView;
- (void)showLogoView:(_Bool)arg1;
- (void)setVideoPlayTimesText:(id)arg1;
- (void)setVideoPlayTimes:(long long)arg1;
- (void)setVideoTitle:(id)arg1 fontSizeStyle:(long long)arg2 showInNonFullscreenMode:(_Bool)arg3;
- (void)setHiddenMiniSliderView:(_Bool)arg1;
- (void)disbleSlider;
- (void)enableSlider;
- (void)updateTimeLabel:(id)arg1 durationLabel:(id)arg2;
- (void)setCacheProgress:(double)arg1;
- (void)setWatchedProgress:(double)arg1;
- (void)setTotalTime:(double)arg1;
- (void)showLoadingWithTitleBar;
- (void)p_refreshUI:(_Bool)arg1;
- (void)finishPlaying;
- (void)setIsFullScreen:(_Bool)arg1;
- (void)setPlaybuttonImageWith:(_Bool)arg1;
- (void)setIsDetail:(_Bool)arg1;
- (void)setIsPlaying:(_Bool)arg1 force:(_Bool)arg2;
- (void)setIsPlaying:(_Bool)arg1;
- (void)hideTipView;
- (_Bool)hasShowTipView;
- (void)showTipView:(unsigned long long)arg1;
- (unsigned long long)tipViewType;
- (void)firePlaybackControlViewTimer;
- (void)restartTimer;
- (void)setToolBarHidden:(_Bool)arg1 needAutoHide:(_Bool)arg2 needChangeTitleBarView:(_Bool)arg3 animate:(_Bool)arg4;
- (void)setToolBarHidden:(_Bool)arg1 needAutoHide:(_Bool)arg2 animate:(_Bool)arg3;
- (void)setToolBarHidden:(_Bool)arg1 needAutoHide:(_Bool)arg2;
- (void)setToolBarHidden:(_Bool)arg1;
- (_Bool)hasTipType;
- (void)resolutionButtonClicked:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)replayButtonClicked:(id)arg1;
- (void)shareButtonClicked:(id)arg1;
- (void)buttonClicked:(id)arg1;
- (void)retryButtonClicked;
- (void)bgButtonClicked;
- (void)dummy;
- (void)showPlayButtonOnly;
- (void)touchScreenToExit:(_Bool)arg1;
- (_Bool)toolBarViewHidden;
- (void)hideTitleBarView:(_Bool)arg1;
- (void)hideFullscreenStatusBar:(_Bool)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)reuse;
- (id)initWithFrame:(struct CGRect)arg1 videoType:(unsigned long long)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

