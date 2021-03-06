//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSLiveQuizViewModel.h"

#import "KSLiveQuizAudienceViewModel-Protocol.h"

@class BFTask, KSLiveQuizMyAwardModel, KSLiveQuizStatusChange, KSLiveUserViewModel, KSQuiz, KS_user_info, NSError, NSNumber, NSString;

@interface KSLiveQuizAudienceViewModel : KSLiveQuizViewModel <KSLiveQuizAudienceViewModel>
{
    long long _currentStatus;
    _Bool _enableTimeCalibration;
    _Bool _quizOutViewIsShown;
    _Bool _needSync;
    _Bool _needSyncReviveCard;
    _Bool _ignoreSubmitWaitEnd;
    long long _involveStatus;
    CDUnknownBlockType _clientToClientDelayGetBlock;
    KSLiveUserViewModel *_liveUserViewModel;
    KSLiveQuizMyAwardModel *_myAwardModel;
    long long _availableReviveCard;
    long long _totalReviveCard;
    BFTask *_syncTask;
    BFTask *_syncReviveCardTask;
    KSLiveQuizStatusChange *_currentChange;
    long long _clientToClientDelay;
    NSNumber *_lastSyncQuestionNumber;
    unsigned long long _syncMaxDelayMillis;
    unsigned long long _submitMaxDelayMillis;
    unsigned long long _waitEndSubmitMaxDelayMillis;
}

@property(nonatomic) unsigned long long waitEndSubmitMaxDelayMillis; // @synthesize waitEndSubmitMaxDelayMillis=_waitEndSubmitMaxDelayMillis;
@property(nonatomic) _Bool ignoreSubmitWaitEnd; // @synthesize ignoreSubmitWaitEnd=_ignoreSubmitWaitEnd;
@property(nonatomic) unsigned long long submitMaxDelayMillis; // @synthesize submitMaxDelayMillis=_submitMaxDelayMillis;
@property(nonatomic) unsigned long long syncMaxDelayMillis; // @synthesize syncMaxDelayMillis=_syncMaxDelayMillis;
@property(retain, nonatomic) NSNumber *lastSyncQuestionNumber; // @synthesize lastSyncQuestionNumber=_lastSyncQuestionNumber;
@property(nonatomic) _Bool needSyncReviveCard; // @synthesize needSyncReviveCard=_needSyncReviveCard;
@property(nonatomic) _Bool needSync; // @synthesize needSync=_needSync;
@property(nonatomic) long long clientToClientDelay; // @synthesize clientToClientDelay=_clientToClientDelay;
@property(retain, nonatomic) KSLiveQuizStatusChange *currentChange; // @synthesize currentChange=_currentChange;
@property(retain, nonatomic) BFTask *syncReviveCardTask; // @synthesize syncReviveCardTask=_syncReviveCardTask;
@property(retain, nonatomic) BFTask *syncTask; // @synthesize syncTask=_syncTask;
@property(nonatomic) _Bool quizOutViewIsShown; // @synthesize quizOutViewIsShown=_quizOutViewIsShown;
@property(nonatomic) long long totalReviveCard; // @synthesize totalReviveCard=_totalReviveCard;
@property(nonatomic) long long availableReviveCard; // @synthesize availableReviveCard=_availableReviveCard;
@property(retain, nonatomic) KSLiveQuizMyAwardModel *myAwardModel; // @synthesize myAwardModel=_myAwardModel;
@property(nonatomic) __weak KSLiveUserViewModel *liveUserViewModel; // @synthesize liveUserViewModel=_liveUserViewModel;
@property(copy, nonatomic) CDUnknownBlockType clientToClientDelayGetBlock; // @synthesize clientToClientDelayGetBlock=_clientToClientDelayGetBlock;
@property(nonatomic) _Bool enableTimeCalibration; // @synthesize enableTimeCalibration=_enableTimeCalibration;
@property(nonatomic) long long involveStatus; // @synthesize involveStatus=_involveStatus;
- (void).cxx_destruct;
- (void)updateTotalReviveCard:(long long)arg1 availableReviveCard:(long long)arg2;
- (double)clientTimestampFromServerTime:(double)arg1;
- (void)updateClientToClientDelay;
- (void)fixSyncStatusIfNeedWithQuestionNum:(long long)arg1;
@property(nonatomic) long long status; // @dynamic status;
- (void)performInvolveStatusChange:(id)arg1 notify:(_Bool)arg2;
- (void)annoncingQuestion:(id)arg1 withChangeInvolveAndReviveCardBlock:(CDUnknownBlockType)arg2;
- (id)performChange:(id)arg1 dependentTask:(id)arg2;
- (void)resetToStartStatus;
- (void)resetStatusIfNeed:(id)arg1;
- (void)changeToEndStatus;
- (void)didReceiveQuizReviewd:(id)arg1;
- (void)updateControlByReviewed:(id)arg1;
- (void)didReceiveQuizAsked:(id)arg1;
- (void)updateControlByAsked:(id)arg1;
- (void)livePortDidLeaveRoom;
- (void)livePortDidEnterRoom;
- (void)didReceiveQuizSync:(id)arg1;
- (void)livePortDidReceiveMessage:(id)arg1;
- (id)p_submitQuesiton:(id)arg1 withSelectOption:(id)arg2 isTimeout:(_Bool)arg3 maxDelay:(unsigned long long)arg4;
- (id)submitQuesiton:(id)arg1 withSelectOption:(id)arg2;
- (id)submitQuesitonTimeout:(id)arg1;
- (id)queryReviveCardWithDelay:(unsigned int)arg1;
- (id)queryQuizMyAwardWithDelay:(unsigned int)arg1;
- (id)syncQuizStatus;
- (id)init;

// Remaining properties
@property(retain, nonatomic) KS_user_info *anchor;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) long long endType;
@property(retain, nonatomic) NSError *error;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *liveStreamId;
@property(retain, nonatomic) KSQuiz *quiz;
@property(nonatomic) _Bool requestIsSending;
@property(readonly) Class superclass;

@end

