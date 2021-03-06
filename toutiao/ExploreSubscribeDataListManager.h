//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTAccountMulticastProtocol-Protocol.h"

@class ExploreSubscribeFetchRemoteListManager, ExploreSubscribeLocalListManager, NSArray, NSString;

@interface ExploreSubscribeDataListManager : NSObject <TTAccountMulticastProtocol>
{
    _Bool isLoading;
    _Bool _hasNewUpdatesIndicator;
    NSArray *_items;
    ExploreSubscribeFetchRemoteListManager *_fetchRemoteEntriesManager;
    ExploreSubscribeLocalListManager *_localManager;
    ExploreSubscribeFetchRemoteListManager *_fetchRemoteHasNewUpdatesIndicatorManager;
    NSString *_currentItemsVersion;
}

+ (id)shareManager;
@property(copy, nonatomic) NSString *currentItemsVersion; // @synthesize currentItemsVersion=_currentItemsVersion;
@property(retain, nonatomic) ExploreSubscribeFetchRemoteListManager *fetchRemoteHasNewUpdatesIndicatorManager; // @synthesize fetchRemoteHasNewUpdatesIndicatorManager=_fetchRemoteHasNewUpdatesIndicatorManager;
@property(retain, nonatomic) ExploreSubscribeLocalListManager *localManager; // @synthesize localManager=_localManager;
@property(retain, nonatomic) ExploreSubscribeFetchRemoteListManager *fetchRemoteEntriesManager; // @synthesize fetchRemoteEntriesManager=_fetchRemoteEntriesManager;
@property(nonatomic) _Bool hasNewUpdatesIndicator; // @synthesize hasNewUpdatesIndicator=_hasNewUpdatesIndicator;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)notifyHasNewUpdates;
- (void)notifyFetchFinished;
- (void)cancelAllOperations;
- (void)removeAllItems;
- (void)saveRemoteDataToLocal;
- (void)fetchEntriesFromLocal:(_Bool)arg1 fromRemote:(_Bool)arg2;
- (void)removeItem:(id)arg1;
- (void)insertItemAtHead:(id)arg1;
- (void)receiveSubscribeOrUnsubscribeNotification:(id)arg1;
- (void)onAccountStatusChanged:(long long)arg1 platform:(id)arg2;
@property(readonly, nonatomic) _Bool isLoading; // @synthesize isLoading;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

