//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CGEFrameRenderer.h"

#import "AVPlayerItemOutputPullDelegate-Protocol.h"

@class AVPlayer, AVPlayerItemVideoOutput, CADisplayLink, NSObject, NSString;
@protocol CGEFrameUpdateDelegate, CGEVideoPlayerDelegate, OS_dispatch_semaphore;

@interface CGEVideoPlayer : CGEFrameRenderer <AVPlayerItemOutputPullDelegate>
{
    id _notificationToken;
    id _timeObserver;
    NSString *_statusObserverPath;
    _Bool _statusObserverUsed;
    int _retryTimes;
    _Bool _requestFirstFrameThenPause;
    int _loadingStatus;
    AVPlayer *_avPlayer;
    AVPlayerItemVideoOutput *_videoOutput;
    CADisplayLink *_displayLink;
    NSObject<OS_dispatch_semaphore> *_videoSema;
    id <CGEFrameUpdateDelegate> _updateDelegate;
    id <CGEVideoPlayerDelegate> _playerDelegate;
    struct CGSize _videoResolution;
}

@property(nonatomic) _Bool requestFirstFrameThenPause; // @synthesize requestFirstFrameThenPause=_requestFirstFrameThenPause;
@property(nonatomic) int loadingStatus; // @synthesize loadingStatus=_loadingStatus;
@property(nonatomic) __weak id <CGEVideoPlayerDelegate> playerDelegate; // @synthesize playerDelegate=_playerDelegate;
@property(nonatomic) __weak id <CGEFrameUpdateDelegate> updateDelegate; // @synthesize updateDelegate=_updateDelegate;
@property(nonatomic) struct CGSize videoResolution; // @synthesize videoResolution=_videoResolution;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *videoSema; // @synthesize videoSema=_videoSema;
@property(retain) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain) AVPlayerItemVideoOutput *videoOutput; // @synthesize videoOutput=_videoOutput;
@property(retain) AVPlayer *avPlayer; // @synthesize avPlayer=_avPlayer;
- (void).cxx_destruct;
- (void)setMaskTextureRatio:(float)arg1;
- (void)resume;
- (void)pause;
- (void)restart;
- (_Bool)isPlaying;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removePlayerStatusNotification;
- (void)addPlayerStatusNotification;
- (void)removePeriodicNotificationForPlayerItem;
- (void)addPeriodicNotificationForPlayerItem;
- (void)removeNotificationForPlayerItem:(id)arg1;
- (void)addNotificationForPlayerItem:(id)arg1;
- (void)processVideoFrame:(struct __CVBuffer *)arg1;
- (void)displayLinkCallback:(id)arg1;
- (void)startWithAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startWithURL:(id)arg1;
- (void)clear;
- (void)dealloc;
- (void)outputMediaDataWillChange:(id)arg1;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
