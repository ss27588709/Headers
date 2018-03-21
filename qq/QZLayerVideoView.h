//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZFeedVideoView.h>

#import <QQMainProject/QZLayerVideoStateViewDanmakuDelegate-Protocol.h>
#import <QQMainProject/QZLayerVideoStateViewDelegate-Protocol.h>

@class NSString;
@protocol QZLayerVideoViewDelegate;

@interface QZLayerVideoView : QZFeedVideoView <QZLayerVideoStateViewDelegate, QZLayerVideoStateViewDanmakuDelegate>
{
    _Bool _pauseByUser;
    _Bool _showSliderView;
    _Bool _backgroundThumbViewDisplayed;
    id <QZLayerVideoViewDelegate> delegate;
}

@property(nonatomic) _Bool backgroundThumbViewDisplayed; // @synthesize backgroundThumbViewDisplayed=_backgroundThumbViewDisplayed;
@property(nonatomic) _Bool showSliderView; // @synthesize showSliderView=_showSliderView;
@property(nonatomic) __weak id <QZLayerVideoViewDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)didTapDanmaku:(id)arg1;
- (void)checkHdIconShouldShow;
- (void)forceShowSliderViewPeriodOfTime;
- (void)onSingleTapOnVideo;
- (_Bool)noVideo;
- (_Bool)checkToPlay;
- (_Bool)shouldReportClick;
@property(nonatomic) _Bool fullScreen;
- (void)moreVideoClick;
- (void)redpacketClick;
- (void)videoConfigViewClicked;
- (_Bool)needPlayPremovieAdv;
- (void)didAdvAnimationEnd:(id)arg1;
- (void)didSelectAdv:(id)arg1 selectedArea:(unsigned long long)arg2;
- (void)didSelectArea:(unsigned long long)arg1;
- (_Bool)playWithManul:(_Bool)arg1;
- (void)pauseByUser:(_Bool)arg1;
- (_Bool)processedSingleTap;
- (void)openAdReadMore;
- (void)openHD;
- (void)videoControllerHidden:(_Bool)arg1;
- (void)closeFullScreen:(_Bool)arg1;
- (void)commonComponentViewClicked;
- (void)openFullScreen;
- (void)setHasPlayRights:(_Bool)arg1;
- (void)didPhotoThumbNeedDisplay;
- (void)updateStateViewHDInfo:(id)arg1 hasCache:(_Bool)arg2;
- (id)currentVideoURL;
- (void)setFeedModel:(id)arg1;
- (void)setFeedVideo:(id)arg1;
- (void)setStateViewByFeedModel:(id)arg1;
- (_Bool)checkCanAutoPlay;
- (void)playerView:(id)arg1 loadSuccess:(_Bool)arg2 error:(id)arg3;
- (void)playerViewOneLoopToEnd:(id)arg1 playInfo:(id)arg2;
- (void)playerView:(id)arg1 currentTime:(double)arg2;
- (void)playerViewStopPlay:(id)arg1 playInfo:(id)arg2;
- (void)startLoadVideo;
- (void)reset;
- (void)smartUpdateOpaque;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
