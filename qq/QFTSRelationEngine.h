//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QFTSBaseEngine.h>

#import <QQMainProject/IFTSRelationEngine-Protocol.h>

@class NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface QFTSRelationEngine : QFTSBaseEngine <IFTSRelationEngine>
{
    NSMutableArray *_filterGroup;
    NSObject<OS_dispatch_queue> *_relationOpQueue;
    _Bool _isFPageOptimize;
    double _timeInterval;
}

+ (id)GetInstance;
- (void).cxx_destruct;
- (id)currentFtsDataManager;
- (void)translStackForBackground:(id)arg1;
- (void)timerMonitor:(id)arg1;
- (void)endTimer;
- (void)startTimer;
- (void)_ftsRDMDataReportRelationConsume:(id)arg1 filterList:(id)arg2;
- (void)_ftsDataReportAboutRelationCalc:(id)arg1 rdmResultsKeyword:(id)arg2;
- (void)ftsContinueSearchRemainFilters:(id)arg1 matchedResults:(id)arg2 matchedUids:(id)arg3 cmpBlock:(CDUnknownBlockType)arg4;
- (void)ftsGetRelationResultWithSearchKeyWord:(id)arg1 completitonBlock:(CDUnknownBlockType)arg2;
- (void)p_aiMonitorSearchProcess:(id)arg1 status:(long long)arg2 results:(id)arg3 isCanReplace:(_Bool *)arg4;
- (void)searchRelationResultsSave:(id)arg1 results:(id)arg2 withSerialNum:(long long)arg3;
- (void)p_searchResultsToDataCenter:(id)arg1 searchResults:(id)arg2 searchSerialNum:(unsigned long long)arg3;
- (void)handleFiltersSearchProcess:(id)arg1 searchKeyword:(id)arg2 recordResults:(id)arg3 matchedUins:(id)arg4;
- (void)searchRelationTroopRelevantFilters:(id)arg1 recordResults:(id)arg2 matchedUins:(id)arg3;
- (void)searchRelationOtherAccountFilters:(id)arg1 recordResults:(id)arg2;
- (void)searchRelationGroupFilters:(id)arg1 recordResults:(id)arg2;
- (void)searchRelationPersonFilters:(id)arg1 recordResults:(id)arg2 matchedUins:(id)arg3;
- (void)relationCombineSearch:(id)arg1;
- (void)ftsGetResultsWithSearchKeyword:(id)arg1;
- (void)ftsDestructFTSEngine;
- (void)ftsConstructFTSEngine;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
