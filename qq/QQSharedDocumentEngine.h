//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IEngineDispatchDelegate-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface QQSharedDocumentEngine : NSObject <IEngineDispatchDelegate>
{
    NSObject<OS_dispatch_queue> *_serialTaskQueue;
    NSMutableSet *_sentSeqSet;
    NSMutableDictionary *_callbackHandlers;
    NSString *_sKey;
    NSString *_psKey;
}

+ (id)getInstance;
@property(copy, nonatomic) NSString *psKey; // @synthesize psKey=_psKey;
@property(copy, nonatomic) NSString *sKey; // @synthesize sKey=_sKey;
- (void).cxx_destruct;
- (void)checkAndUpdateKeys;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (int)sendRequest:(char *)arg1 cmd:(id)arg2 rspHandler:(CDUnknownBlockType)arg3;
- (void)addCookieToEncoder:(struct CPBMessageEncoder *)arg1 atIndex:(int)arg2;
- (void)addAppIdToEncoder:(struct CPBMessageEncoder *)arg1 atIndex:(int)arg2;
- (_Bool)retryUploadFromLocalFile:(id)arg1 fileId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)checkLocalDocFile:(id)arg1 filePath:(id)arg2;
- (void)innerRequestUploadDocFileWithFileInfo:(id)arg1 withUserAgent:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestUploadDocFileWithFileInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)innerRequestUploadDocFileWithFileName:(id)arg1 filePath:(id)arg2 onlyBrowse:(_Bool)arg3 withUserAgent:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)requestUploadDocFileWithFileName:(id)arg1 filePath:(id)arg2 onlyBrowse:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)parseSetPadAuthoriyInfoRsp:(int)arg1 decoder:(struct CPBMessageDecoder *)arg2 cmd:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)requestSetPadAuthorityInfo:(id)arg1 authorityInfoList:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)parseGetPadAuthoriyInfoRsp:(int)arg1 decoder:(struct CPBMessageDecoder *)arg2 cmd:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)requestGetPadAuthorityInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestSavePreviewDocWithUrl:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeHandlerForKey:(id)arg1;
- (void)setHandler:(id)arg1 forKey:(id)arg2;
- (id)handlerForKey:(id)arg1;
- (void)removeSentSeq:(int)arg1;
- (_Bool)checkSentSeq:(int)arg1;
- (void)addSentSeq:(int)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
