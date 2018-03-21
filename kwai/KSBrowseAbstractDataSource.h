//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSBrowseContainerDataSource-Protocol.h"

@class KSLRUCache, KSModel, NSString;
@protocol KSBrowseContainerItem;

@interface KSBrowseAbstractDataSource : NSObject <KSBrowseContainerDataSource>
{
    CDUnknownBlockType _reloadData;
    CDUnknownBlockType _requestFinishLoading;
    KSModel *_model;
    long long _currentIndex;
    long long _initIndex;
    long long _lastIndex;
    KSLRUCache *_itemsCache;
}

@property(retain, nonatomic) KSLRUCache *itemsCache; // @synthesize itemsCache=_itemsCache;
@property(nonatomic) long long lastIndex; // @synthesize lastIndex=_lastIndex;
@property(nonatomic) long long initIndex; // @synthesize initIndex=_initIndex;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(readonly, nonatomic) __weak KSModel *model; // @synthesize model=_model;
@property(copy, nonatomic) CDUnknownBlockType requestFinishLoading; // @synthesize requestFinishLoading=_requestFinishLoading;
@property(copy, nonatomic) CDUnknownBlockType reloadData; // @synthesize reloadData=_reloadData;
- (void).cxx_destruct;
- (_Bool)isLoading;
- (_Bool)isLast;
- (id)output;
- (void)loadMore:(_Bool)arg1;
- (void)_preload;
- (void)preload;
- (void)didFinishLoadData;
- (void)updateIndex:(long long)arg1;
- (id)itemAtIndex:(long long)arg1;
@property(readonly, nonatomic) id <KSBrowseContainerItem> currentItem;
- (id)lookupItemAndLoadCache:(long long)arg1;
- (id)initWithIndex:(long long)arg1;
- (void)dealloc;
- (id)containerItemForData:(id)arg1 index:(long long)arg2 isAnimated:(_Bool *)arg3;
- (id)cacheKeyForData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
