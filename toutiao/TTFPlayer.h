//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableSet, NSURL, TTAVPlayer, TTFLiveStreamInfo, TTPlayerView;
@protocol TTFPlayerDelegate;

@interface TTFPlayer : NSObject
{
    _Bool _isInterrupted;
    _Bool _isMainURL;
    _Bool _isRetrying;
    int _defaultBufferTime;
    id <TTFPlayerDelegate> _delegate;
    TTPlayerView *_playerView;
    long long _currentRes;
    long long _loadState;
    TTFLiveStreamInfo *_liveStreamInfo;
    NSArray *_supportedResolutions;
    NSURL *_url;
    long long _stalledCount;
    TTAVPlayer *_player;
    NSMutableSet *_notificationObserverSet;
    double _startTime;
}

+ (id)playerVersion;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSMutableSet *notificationObserverSet; // @synthesize notificationObserverSet=_notificationObserverSet;
@property(retain, nonatomic) TTAVPlayer *player; // @synthesize player=_player;
@property(nonatomic) long long stalledCount; // @synthesize stalledCount=_stalledCount;
@property(nonatomic) _Bool isRetrying; // @synthesize isRetrying=_isRetrying;
@property(nonatomic) _Bool isMainURL; // @synthesize isMainURL=_isMainURL;
@property(nonatomic) int defaultBufferTime; // @synthesize defaultBufferTime=_defaultBufferTime;
@property(nonatomic) _Bool isInterrupted; // @synthesize isInterrupted=_isInterrupted;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(copy, nonatomic) NSArray *supportedResolutions; // @synthesize supportedResolutions=_supportedResolutions;
@property(retain, nonatomic) TTFLiveStreamInfo *liveStreamInfo; // @synthesize liveStreamInfo=_liveStreamInfo;
@property(nonatomic) long long loadState; // @synthesize loadState=_loadState;
@property(nonatomic) long long currentRes; // @synthesize currentRes=_currentRes;
@property(retain, nonatomic) TTPlayerView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) __weak id <TTFPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)degradeResolution;
- (id)getStreamsForRes:(long long)arg1;
- (void)itemStatusChanged:(long long)arg1;
- (void)loadStateDidChange:(long long)arg1;
- (void)receivedError:(id)arg1;
- (_Bool)isPlaying;
- (void)close;
- (void)takeScreenShot:(CDUnknownBlockType)arg1;
- (void)stop;
- (void)play;
- (void)playWithLiveStreamInfo:(id)arg1;
- (void)playWithURL:(id)arg1;
- (void)registerObserver;
- (id)initWithURL:(id)arg1;
- (id)init;
- (void)dealloc;

@end
