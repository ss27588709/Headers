//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WeAppBasicService.h"

@class NSString, WeAppDataManager;

@interface WeAppService : WeAppBasicService
{
    id _requestContext;
    NSString *_apiAlias;
    long long _serviceRequestType;
    long long _serviceResponseType;
    WeAppDataManager *_dataManager;
}

@property(nonatomic) __weak WeAppDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(nonatomic) long long serviceResponseType; // @synthesize serviceResponseType=_serviceResponseType;
@property(nonatomic) long long serviceRequestType; // @synthesize serviceRequestType=_serviceRequestType;
@property(retain, nonatomic) id requestContext; // @synthesize requestContext=_requestContext;
@property(retain, nonatomic) NSString *apiAlias; // @synthesize apiAlias=_apiAlias;
- (void).cxx_destruct;
- (void)modelDidFinishLoad:(id)arg1;
- (void)refreshPagedListWithObject:(id)arg1;
- (void)resetService;
- (void)refreshService;
- (void)refreshPagedList;
- (void)loadPageListWithAPIName:(id)arg1 params:(id)arg2 needLogin:(_Bool)arg3 version:(id)arg4;
- (void)loadDictionaryWithAPIName:(id)arg1 params:(id)arg2 needLogin:(_Bool)arg3 version:(id)arg4;
- (void)loadDictionaryWithAPIName:(id)arg1 params:(id)arg2 needLogin:(_Bool)arg3;
- (void)loadDictionaryWithDataBinding:(id)arg1 andParsedParams:(id)arg2 apiName:(id)arg3;
- (void)loadDictionaryWithDataBinding:(id)arg1 withBlock:(_Bool)arg2;
- (void)loadDictionaryWithDataBinding:(id)arg1;
- (void)getPageDataWithApiName:(id)arg1 params:(id)arg2 version:(id)arg3;
- (id)init;

@end

