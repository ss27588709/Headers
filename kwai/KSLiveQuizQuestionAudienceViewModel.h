//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSLiveQuizQuestionViewModel.h"

@class KSGCDCountTimer, KSLiveQuizAudienceComponent, NSObject, NSString;
@protocol KSLiveQuizAudienceViewModel;

@interface KSLiveQuizQuestionAudienceViewModel : KSLiveQuizQuestionViewModel
{
    _Bool _isSubmitted;
    _Bool _viewDidAppeared;
    KSLiveQuizAudienceComponent *_audienceComponent;
    KSGCDCountTimer *_timer;
    NSString *_statusObservingToken;
    NSString *_loadingObservingToken;
}

+ (id)viewModelWithQuizAudienceComponent:(id)arg1;
@property _Bool viewDidAppeared; // @synthesize viewDidAppeared=_viewDidAppeared;
@property _Bool isSubmitted; // @synthesize isSubmitted=_isSubmitted;
@property(retain, nonatomic) NSString *loadingObservingToken; // @synthesize loadingObservingToken=_loadingObservingToken;
@property(retain, nonatomic) NSString *statusObservingToken; // @synthesize statusObservingToken=_statusObservingToken;
@property(retain, nonatomic) KSGCDCountTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) __weak KSLiveQuizAudienceComponent *audienceComponent; // @synthesize audienceComponent=_audienceComponent;
- (void).cxx_destruct;
- (void)addSendQuizAnswerLog:(int)arg1;
- (void)notifyUserIsOut;
- (id)submitOption:(id)arg1;
- (id)dialogElementName;
- (_Bool)canPlayAudioEffect;
- (double)answerInterval;
- (void)buildRevived;
- (void)buildHeader;
- (void)buildOptions;
- (void)buildNote;
- (void)updateUI;
- (void)disableAllOptions;
- (void)cancelCountdownTimer;
- (void)startCountdownForAnswer;
@property(readonly, nonatomic) NSObject<KSLiveQuizAudienceViewModel> *audienceViewModel;
- (id)quizViewModel;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)commonInit;
- (void)dealloc;
- (id)init;

@end
