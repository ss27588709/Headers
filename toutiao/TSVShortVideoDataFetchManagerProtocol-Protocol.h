//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class RACSignal, TTShortVideoModel;

@protocol TSVShortVideoDataFetchManagerProtocol <NSObject>
@property(retain, nonatomic) id detailCellCurrentItem;
@property(nonatomic) long long listCellCurrentIndex;
@property(nonatomic) _Bool shouldShowNoMoreVideoToast;
@property(nonatomic) _Bool isLoadingRequest;
@property(nonatomic) _Bool hasMoreToLoad;
@property(nonatomic) long long currentIndex;
- (long long)replacedIndex;
- (void)replaceModel:(TTShortVideoModel *)arg1 atIndex:(long long)arg2;
- (void)requestDataAutomatically:(_Bool)arg1 finishBlock:(void (^)(unsigned long long, NSError *))arg2;
- (TTShortVideoModel *)itemAtIndex:(long long)arg1 replaced:(_Bool)arg2;
- (TTShortVideoModel *)itemAtIndex:(long long)arg1;
- (unsigned long long)numberOfShortVideoItems;

@optional
@property(retain, nonatomic) RACSignal *showToastSignal;
@property(nonatomic) _Bool refreshingWhenFullScreenPlayInTab;
@property(nonatomic) _Bool needReloadData;
@property(copy, nonatomic) CDUnknownBlockType dataDidChangeBlock;
@property(readonly, nonatomic) unsigned long long entrance;
- (void)deleteCurrentItem;
- (void)reportItemsHasNotBeenSeen;
@end
