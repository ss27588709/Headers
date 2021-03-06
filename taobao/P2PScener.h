//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MCNearbyServiceBrowserDelegate-Protocol.h"

@class MCNearbyServiceBrowser, NSMutableDictionary, NSString;
@protocol OS_dispatch_semaphore, OS_dispatch_source;

@interface P2PScener : NSObject <MCNearbyServiceBrowserDelegate>
{
    CDUnknownBlockType _blockSceneData;
    MCNearbyServiceBrowser *_browser;
    NSMutableDictionary *_foundPeers;
    NSString *_serviceType;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_semaphore> *_lock;
}

+ (id)deviceInfoFromDict:(id)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(retain, nonatomic) NSMutableDictionary *foundPeers; // @synthesize foundPeers=_foundPeers;
@property(retain, nonatomic) MCNearbyServiceBrowser *browser; // @synthesize browser=_browser;
@property(copy, nonatomic) CDUnknownBlockType blockSceneData; // @synthesize blockSceneData=_blockSceneData;
- (void).cxx_destruct;
- (void)browser:(id)arg1 didNotStartBrowsingForPeers:(id)arg2;
- (void)browser:(id)arg1 lostPeer:(id)arg2;
- (void)browser:(id)arg1 foundPeer:(id)arg2 withDiscoveryInfo:(id)arg3;
- (id)initWithServiceType:(id)arg1;
- (void)pause;
- (void)resume;
- (void)cleanup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

