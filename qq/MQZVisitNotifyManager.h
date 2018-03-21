//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSTimer;

@interface MQZVisitNotifyManager : NSObject
{
    _Bool _canSendRequest;
    long long _requestID;
    long long _nextTimeInterval;
    NSTimer *_timer;
    NSDate *_lastActionDate;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (void)onApplicationDidEnterBackgroundNotify:(id)arg1;
- (void)onApplicationWillEnterForegroundNotify:(id)arg1;
- (void)onVisitorNotify:(id)arg1;
- (void)onTimer:(id)arg1;
- (void)stopTimer;
- (void)startTimer:(_Bool)arg1;
- (void)getVisitorNotifyWithTimeInterval;
- (_Bool)isWaitingResponse;
@property(readonly, nonatomic) _Bool isRunning; // @dynamic isRunning;
- (void)dealloc;
- (id)init;

@end
