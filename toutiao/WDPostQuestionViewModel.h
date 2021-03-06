//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WDUploadImageManagerDelegate-Protocol.h"

@class NSArray, NSDictionary, NSNotification, NSString, TTIndicatorView, WDPostQuestionTaskModel, WDUploadImageManager;
@protocol WDPostQuestionViewModelTitleDelegate;

@interface WDPostQuestionViewModel : NSObject <WDUploadImageManagerDelegate>
{
    _Bool _isCheckingTitle;
    _Bool _isCreateQuestion;
    _Bool _isSuggetionLoading;
    _Bool _isPosting;
    _Bool _isWaitingForCompressing;
    id <WDPostQuestionViewModelTitleDelegate> _titleDelegate;
    NSDictionary *_gdExtJson;
    NSDictionary *_apiParameter;
    WDPostQuestionTaskModel *_taskModel;
    long long _questionStatus;
    NSArray *_suggestionArray;
    NSArray *_cachesImageList;
    NSString *_jumpSchema;
    NSNotification *_cacheNotification;
    NSString *_source;
    NSString *_listEntrance;
    NSArray *_suggestionTagArray;
    WDUploadImageManager *_uploadManager;
    TTIndicatorView *_sendingIndicator;
}

+ (id)imageNamesWithTagStructModels:(id)arg1;
+ (id)suggetionModelsWithStructModels:(id)arg1;
+ (_Bool)isBusinessError:(long long)arg1;
+ (void)getDefaultTagWith:(id)arg1 desccription:(id)arg2 apiParameter:(id)arg3 finishBlock:(CDUnknownBlockType)arg4;
+ (void)checkTitleWithQid:(id)arg1 title:(id)arg2 apiParameter:(id)arg3 finishBlock:(CDUnknownBlockType)arg4;
+ (void)requestForQuestionTitle:(id)arg1 apiParameter:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
@property(nonatomic) _Bool isWaitingForCompressing; // @synthesize isWaitingForCompressing=_isWaitingForCompressing;
@property(nonatomic) _Bool isPosting; // @synthesize isPosting=_isPosting;
@property(retain, nonatomic) TTIndicatorView *sendingIndicator; // @synthesize sendingIndicator=_sendingIndicator;
@property(retain, nonatomic) WDUploadImageManager *uploadManager; // @synthesize uploadManager=_uploadManager;
@property(copy, nonatomic) NSArray *suggestionTagArray; // @synthesize suggestionTagArray=_suggestionTagArray;
@property(nonatomic) _Bool isSuggetionLoading; // @synthesize isSuggetionLoading=_isSuggetionLoading;
@property(copy, nonatomic) NSString *listEntrance; // @synthesize listEntrance=_listEntrance;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSNotification *cacheNotification; // @synthesize cacheNotification=_cacheNotification;
@property(nonatomic) _Bool isCreateQuestion; // @synthesize isCreateQuestion=_isCreateQuestion;
@property(copy, nonatomic) NSString *jumpSchema; // @synthesize jumpSchema=_jumpSchema;
@property(nonatomic) _Bool isCheckingTitle; // @synthesize isCheckingTitle=_isCheckingTitle;
@property(copy, nonatomic) NSArray *cachesImageList; // @synthesize cachesImageList=_cachesImageList;
@property(copy, nonatomic) NSArray *suggestionArray; // @synthesize suggestionArray=_suggestionArray;
@property(nonatomic) long long questionStatus; // @synthesize questionStatus=_questionStatus;
@property(retain, nonatomic) WDPostQuestionTaskModel *taskModel; // @synthesize taskModel=_taskModel;
@property(copy, nonatomic) NSDictionary *apiParameter; // @synthesize apiParameter=_apiParameter;
@property(copy, nonatomic) NSDictionary *gdExtJson; // @synthesize gdExtJson=_gdExtJson;
@property(nonatomic) __weak id <WDPostQuestionViewModelTitleDelegate> titleDelegate; // @synthesize titleDelegate=_titleDelegate;
- (void).cxx_destruct;
- (id)compressImageWithImageModels:(id)arg1;
- (_Bool)descIsValid:(id)arg1;
- (void)uploadManagerTaskHasFinished:(id)arg1 failedImageModels:(id)arg2;
- (void)uploadManager:(id)arg1 failedUploadImage:(id)arg2 error:(id)arg3;
- (void)uploadManager:(id)arg1 finishUploadImage:(id)arg2;
- (void)editQuestionCommitRequest;
- (void)newQuestionCommitRequest;
- (void)postOperationByUploadImages;
- (void)checkDesc:(id)arg1;
- (void)checkTitleWithQid:(id)arg1 title:(id)arg2;
- (_Bool)hasEnoughTitleText;
- (id)trackLabelName;
- (id)trackEventName;
- (void)nextStep;
- (void)previousStep;
- (void)requestForQuestionTitle:(id)arg1;
- (id)init;
- (id)initWithTaskModel:(id)arg1 gdExtJson:(id)arg2 apiParameter:(id)arg3 source:(id)arg4 listEntrance:(id)arg5;
- (void)dealloc;
- (id)postQuestionTagPlaceHolder;
- (_Bool)isDescRequired;
- (id)postQuestionDescPlaceHolder;
- (long long)minQuestionDescCharaterNumber;
- (long long)maxQuestionDescCharaterNumber;
- (id)wendaPostQuestionHintSchema;
- (id)wendaPostQuestionHintTitle;
- (long long)minQuestionTitleCharaterNumber;
- (long long)maxQuestionTitleCharaterNumber;
- (id)wendaPostQuestionPlaceHolder;
- (id)wendaPostFirstHintArray;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

