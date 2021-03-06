//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WBLivePlayerController-Protocol.h"

@class IJKFFMoviePlayerController, NSString, NSTimer, NSURL, UIView, WBVideoPlayInfo;
@protocol WBLivePlaybackEventListener;

@interface WBLiveIJKPlayerController : NSObject <WBLivePlayerController>
{
    double _callbackedPlaybackTime;
    _Bool _ignoreErrorLog;
    _Bool _isLive;
    id <WBLivePlaybackEventListener> _generalController;
    UIView *_containerView;
    IJKFFMoviePlayerController *_playerController;
    NSURL *_playingURL;
    WBVideoPlayInfo *_playInfo;
    NSTimer *_playbackTimeTimer;
}

@property(nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(retain, nonatomic) NSTimer *playbackTimeTimer; // @synthesize playbackTimeTimer=_playbackTimeTimer;
@property(retain, nonatomic) WBVideoPlayInfo *playInfo; // @synthesize playInfo=_playInfo;
@property(retain, nonatomic) NSURL *playingURL; // @synthesize playingURL=_playingURL;
@property(retain, nonatomic) IJKFFMoviePlayerController *playerController; // @synthesize playerController=_playerController;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <WBLivePlaybackEventListener> generalController; // @synthesize generalController=_generalController;
@property(nonatomic) _Bool ignoreErrorLog; // @synthesize ignoreErrorLog=_ignoreErrorLog;
- (void).cxx_destruct;
- (void)_remoteSeek:(id)arg1;
- (void)seekToProgress:(double)arg1 event:(unsigned long long)arg2;
- (void)shutdown;
- (void)startPlayWithPlayInfo:(id)arg1;
@property(readonly, nonatomic) _Bool supportsRTMP;
- (void)reload;
- (void)replay;
- (void)pause;
- (void)resume;
- (void)stop;
@property(readonly, nonatomic) CDStruct_1b6d18a9 videoDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 currentPlaybackTime;
@property(readonly, nonatomic) UIView *playerView;
@property(readonly, nonatomic) NSURL *currentPlayUrl;
- (void)playerFirstVideoFrameRenderedNotification:(id)arg1;
- (void)playerIsPrepareToPlayChangeNotification:(id)arg1;
- (void)livePlayerPlaybackStateDidChangeNotification:(id)arg1;
- (void)livePlayerLoadStateDidChangeNotification:(id)arg1;
- (void)livePlayerDidFinishPlayingNotification:(id)arg1;
- (void)delegateplayerSeekDoneWithTargetTime:(CDStruct_1b6d18a9)arg1;
- (void)delegateplayerWillStartSeek;
- (void)delegatePlayerIsReady;
- (void)delegateplayerFirstVideoFrameRendered;
- (void)delegateDidUpdatePlaybackTime:(double)arg1;
- (void)delegatePlayerLiklyToKeepUp;
- (void)delegatePlayerDidStall;
- (void)delegatePlayerDidPlayToEnd;
- (void)delegatePlayerDidFailedToPlay:(id)arg1;
- (void)delegatePlayerDidResumed;
- (void)delegatePlayerDidPaused;
- (void)delegatePlayerDidStartPlay;
- (void)timerTriggered:(id)arg1;
- (void)stopPlaybackTimeTimer;
- (void)startPlaybackTimeTimer;
- (void)_setupPlayerWithURL:(id)arg1;
- (void)_teardownPlayer;
- (id)initWithGeneralPlayerController:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

