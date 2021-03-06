//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface O2OKoubeiResourceInteraction : NSObject
{
    _Bool _isGetLatestVer;
    NSString *_bizId;
    NSString *_pageName;
    NSArray *_params;
    CDUnknownBlockType _callback;
}

@property(nonatomic) _Bool isGetLatestVer; // @synthesize isGetLatestVer=_isGetLatestVer;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) NSArray *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(retain, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
- (void).cxx_destruct;
- (void)checkResponseCompleteness:(id)arg1;
- (void)handleResponseResult:(id)arg1;
- (void)responseInfo:(id)arg1 error:(id)arg2;
- (void)setRequest:(id)arg1;
- (void)requestForBusinessInteraction;
- (void)getLatestResFromNet:(id)arg1 pageName:(id)arg2 resResultsCallback:(CDUnknownBlockType)arg3;
- (void)getResFromNet:(id)arg1 pageName:(id)arg2 resResultsCallback:(CDUnknownBlockType)arg3;
- (void)dealloc;

@end

