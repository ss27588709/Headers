//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTSyncDelegate-Protocol.h"

@class NSString;

@interface DTSyncAdapter : NSObject <DTSyncDelegate>
{
}

+ (id)sharedInstance;
- (void)onReceiveDirectData:(char *)arg1 info:(id)arg2;
- (void)onReceiveSyncData:(char *)arg1 info:(id)arg2;
- (void)onSend1001;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

