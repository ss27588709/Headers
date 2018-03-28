//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTIMDependDelegate-Protocol.h"

@class NSString;
@protocol TTIMSDKServiceDelegate;

@interface TTIMSDKService : NSObject <TTIMDependDelegate>
{
    id <TTIMSDKServiceDelegate> _delegate;
    long long _deviceId;
    long long _accountId;
    NSString *_token;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(nonatomic) long long accountId; // @synthesize accountId=_accountId;
@property(nonatomic) long long deviceId; // @synthesize deviceId=_deviceId;
@property(nonatomic) __weak id <TTIMSDKServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)markMsgReaded:(id)arg1;
- (void)markAllReaded:(id)arg1;
- (void)queryCenterMsgList;
- (void)queryMsg:(id)arg1 mid:(long long)arg2 cid:(long long)arg3 limit:(long long)arg4;
- (void)queryMsg:(id)arg1 limit:(long long)arg2;
- (void)clearSessionMsg:(id)arg1;
- (void)deleteSession:(id)arg1;
- (void)deleteMessage:(id)arg1;
- (void)unRegisterSession:(id)arg1 listener:(id)arg2;
- (void)registerSession:(id)arg1 listener:(id)arg2;
- (void)updateMessage:(id)arg1;
- (void)addMessage:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)handleApplicationWillEnterForegroundNotification:(id)arg1;
- (void)handleApplicationDidEnterBackgroundNotification:(id)arg1;
- (void)onPushManagerConnectionStateChanged:(id)arg1;
- (void)onWSReconnect;
- (void)onServiceChanged:(int)arg1;
- (void)onServiceOffline:(int)arg1;
- (void)onServiceOnline:(int)arg1;
- (_Bool)isWSConnected;
- (void)addObservers;
- (void)logout;
- (void)loginWithToken:(id)arg1 accountId:(id)arg2;
- (void)configIMServiceWithDeviceId:(id)arg1 options:(id)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
