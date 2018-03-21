//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSMutableDictionary, NSString, TBCatchTimer;
@protocol NSObject;

@interface TBCountdownLabel : UILabel
{
    _Bool _isStarted;
    _Bool _isPaused;
    long long _duration;
    long long _curDuration;
    NSString *_format;
    CDUnknownBlockType _finishCallback;
    CDUnknownBlockType _timerCallback;
    double _baseTime;
    NSMutableDictionary *_formatDic;
    TBCatchTimer *_timer;
    id <NSObject> _activeObserve;
    id <NSObject> _backgroundObserve;
    CDUnknownBlockType _becomeActiveCallback;
    CDUnknownBlockType _enterBackgroundCallback;
}

@property(copy, nonatomic) CDUnknownBlockType enterBackgroundCallback; // @synthesize enterBackgroundCallback=_enterBackgroundCallback;
@property(copy, nonatomic) CDUnknownBlockType becomeActiveCallback; // @synthesize becomeActiveCallback=_becomeActiveCallback;
@property(retain, nonatomic) id <NSObject> backgroundObserve; // @synthesize backgroundObserve=_backgroundObserve;
@property(retain, nonatomic) id <NSObject> activeObserve; // @synthesize activeObserve=_activeObserve;
@property(nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
@property(nonatomic) _Bool isStarted; // @synthesize isStarted=_isStarted;
@property(retain, nonatomic) TBCatchTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableDictionary *formatDic; // @synthesize formatDic=_formatDic;
@property(nonatomic) double baseTime; // @synthesize baseTime=_baseTime;
@property(copy, nonatomic) CDUnknownBlockType timerCallback; // @synthesize timerCallback=_timerCallback;
@property(copy, nonatomic) CDUnknownBlockType finishCallback; // @synthesize finishCallback=_finishCallback;
@property(copy, nonatomic) NSString *format; // @synthesize format=_format;
@property(nonatomic) long long curDuration; // @synthesize curDuration=_curDuration;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (void)parseValue:(id)arg1 keys:(id)arg2 components:(id)arg3;
- (void)setupValue;
- (void)setupFormat;
- (void)startTimer;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)start;
- (void)countdownAction;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
