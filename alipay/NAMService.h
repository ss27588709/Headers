//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NAMInterface-Protocol.h"

@class NSString;

@interface NAMService : NSObject <NAMInterface>
{
}

+ (id)allocInPrivate;
+ (id)shared;
- (void)log:(id)arg1;
- (id)allAppIds;
- (id)installApps:(id)arg1;
- (void)addCommonApps:(id)arg1;
- (long long)compareVersions:(id)arg1 withVersion:(id)arg2;
- (id)findResourcesPreparedApp:(id)arg1;
- (_Bool)isMainUrlValid:(id)arg1 app:(id)arg2;
- (void)cancelAllDownloadTask;
- (void)addUnavailableApplist:(id)arg1;
- (id)unavailableApplist;
- (id)failedRequestApplist;
- (void)downloadApps:(id)arg1;
- (void)downloadAllApps;
- (void)requestApps:(id)arg1 param:(id)arg2 finish:(CDUnknownBlockType)arg3;
- (void)requestAllApps:(id)arg1 finish:(CDUnknownBlockType)arg2;
- (void)installApp:(id)arg1 process:(CDUnknownBlockType)arg2 finish:(CDUnknownBlockType)arg3;
- (_Bool)prepareApp:(id)arg1 version:(id)arg2 params:(id)arg3 reqType:(long long)arg4 offlineType:(long long)arg5 processor:(CDUnknownBlockType)arg6 finish:(CDUnknownBlockType)arg7;
- (void)prepareApp:(id)arg1 version:(id)arg2 params:(id)arg3 process:(CDUnknownBlockType)arg4 finish:(CDUnknownBlockType)arg5;
- (void)prepareApp:(id)arg1 version:(id)arg2 process:(CDUnknownBlockType)arg3 finish:(CDUnknownBlockType)arg4;
- (void)updateClientConfig:(id)arg1;
- (void)addApps:(id)arg1 source:(unsigned long long)arg2 scene:(id)arg3 download:(_Bool)arg4;
- (void)addApps:(id)arg1 source:(unsigned long long)arg2 download:(_Bool)arg3;
- (id)findAppDataSource:(id)arg1 version:(id)arg2;
- (id)findAvailableApp:(id)arg1 version:(id)arg2;
- (id)findApp:(id)arg1 version:(id)arg2;
- (id)initInPrivate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
