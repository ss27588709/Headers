//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTFantasyLCSManagerDelegate-Protocol.h"

@class NSString, TTFantasyLCSMessageReceiver;

@interface TTFantasyPushService : NSObject <TTFantasyLCSManagerDelegate>
{
    NSString *_currentSessionID;
    TTFantasyLCSMessageReceiver *_receiver;
}

+ (id)sharedService;
@property(retain, nonatomic) TTFantasyLCSMessageReceiver *receiver; // @synthesize receiver=_receiver;
@property(copy, nonatomic) NSString *currentSessionID; // @synthesize currentSessionID=_currentSessionID;
- (void).cxx_destruct;
- (void)onReceivedUnknownPushMessageWithPayload:(id)arg1;
- (void)onPushManagerConnectionError:(id)arg1 connectionState:(unsigned long long)arg2 url:(id)arg3;
- (void)onPushManagerConnectionStateChanged:(unsigned long long)arg1 url:(id)arg2;
- (_Bool)asyncSendMessageWithService:(int)arg1 method:(long long)arg2 payload:(id)arg3;
- (void)stop;
- (void)start;
- (void)configurePush;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
