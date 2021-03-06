//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IQQMessageProcessor-Protocol.h>
#import <QQMainProject/WupTransportationProxyDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSOperationQueue, NSString, QQC2CRoamSingleForwardJudger, QQLockDictionary;
@protocol QC2CRoamMessageDelegate;

@interface QC2CRoamMessageService : NSObject <WupTransportationProxyDelegate, IQQMessageProcessor>
{
    NSOperationQueue *_operationQueue;
    NSMutableDictionary *_c2cInfomation;
    id <QC2CRoamMessageDelegate> _delegate;
    NSString *_uin;
    NSMutableDictionary *_delegateDic;
    NSMutableDictionary *_tmpMessageList;
    NSMutableDictionary *_minModelDic;
    QQLockDictionary *_c2cFaultMessageCache;
    NSString *_toUin;
    NSArray *_duplicateRemovalList;
    int _xo;
    QQC2CRoamSingleForwardJudger *_singleForwardJudger;
}

+ (id)shareInstance;
@property(readonly, nonatomic) QQC2CRoamSingleForwardJudger *singleForwardJudger; // @synthesize singleForwardJudger=_singleForwardJudger;
- (id)processMsgEncapsulation:(id)arg1;
- (_Bool)handleRoamMessageResponse:(CDStruct_7895f40e)arg1;
- (id)doCreateInvocation:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (id)doCreateInvocation:(id)arg1 selector:(SEL)arg2 arg:(char *)arg3;
- (void)doAsyncMessageTaskOp:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)clearTmpMessageList:(id)arg1;
- (id)getTmpMessageList:(id)arg1;
- (void)cacheTmpMessageList:(id)arg1 msgList:(id)arg2;
- (void)clearAllC2CRoamMessageInfo;
- (void)clearC2CRoamMessageInfo:(id)arg1;
- (id)clearC2CRoamMessageCache:(id)arg1;
- (void)setC2CInformationToIDEL:(id)arg1;
@property(nonatomic) id <QC2CRoamMessageDelegate> delegate; // @dynamic delegate;
- (void)deleteFriendMessage:(id)arg1;
- (void)clearChatMessageBuffer:(id)arg1;
- (void)runSelectorOnMainThread:(id)arg1;
- (id)filterDeleteMsg:(id)arg1 msgList:(id)arg2;
- (id)getMinMessageModel:(id)arg1;
- (void)updateMinModel:(id)arg1 msgList:(id)arg2;
- (void)updateC2CInformation:(id)arg1 isComplete:(_Bool)arg2 faultTime:(int)arg3 random:(long long)arg4 isLocal:(_Bool)arg5;
- (id)storeC2CMessageList:(id)arg1 isLocal:(_Bool)arg2 info:(id)arg3;
- (void)storeC2CMessageList:(id)arg1 isLocal:(_Bool)arg2;
- (void)actionRequestC2CRoamMessage:(id)arg1;
- (id)mergeLocalMsgs:(id)arg1 toRoamMsgs:(id)arg2;
- (_Bool)isMsgModel:(id)arg1 equelToCmpModel:(id)arg2;
- (void)initInformation:(id)arg1 msgTime:(int)arg2 msgRandom:(int)arg3 msgID:(int)arg4 isFromOldTable:(_Bool)arg5 delegate:(id)arg6;
- (void)syncGetC2CRoamMessage:(id)arg1 msgTime:(int)arg2 msgRandom:(int)arg3 msgID:(int)arg4 isFromOldTable:(_Bool)arg5 delegate:(id)arg6;
- (void)syncGetC2CRoamMessage:(id)arg1 msgTime:(int)arg2 msgRandom:(int)arg3 msgID:(int)arg4 isFromOldTable:(_Bool)arg5 delegate:(id)arg6 count:(int)arg7;
- (void)getC2CRoamMessage:(id)arg1 msgTime:(int)arg2 msgRandom:(int)arg3 msgID:(int)arg4 largeMsgIDs:(id)arg5 isFromOldTable:(_Bool)arg6 delegate:(id)arg7;
- (void)getC2CRoamMessage:(id)arg1 msgTime:(int)arg2 msgRandom:(int)arg3 msgID:(int)arg4 isFromOldTable:(_Bool)arg5 delegate:(id)arg6;
- (void)requestC2CRoamMessage:(id)arg1;
- (_Bool)handleWupSendResult:(int)arg1 recvWupStruct:(CDStruct_7895f40e *)arg2 userInfo:(id)arg3;
- (void)saveC2CInformation:(id)arg1;
- (void)changeC2CInformation:(id)arg1;
- (id)loadC2CInformation:(id)arg1;
- (_Bool)saveC2CInformation;
- (id)c2cInformationPath:(id)arg1;
- (double)getFaultTimeForUin:(id)arg1;
- (id)getC2CInformation:(id)arg1;
- (void)setC2CFaultInformation;
- (id)getC2CFaultMessageFromCache:(id)arg1;
- (void)cacheC2CFaultTime:(id)arg1 isComplete:(_Bool)arg2 Message:(id)arg3;
- (void)setC2CInformationForOneday:(id)arg1 isComplete:(_Bool)arg2 random:(long long)arg3 faultTime:(int)arg4;
- (void)setC2CInformation:(id)arg1 isComplete:(_Bool)arg2 random:(long long)arg3 faultTime:(int)arg4;
- (id)getC2CInformationKey:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSMutableDictionary *c2cInfomation; // @dynamic c2cInfomation;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSArray *duplicateRemovalList; // @dynamic duplicateRemovalList;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *toUin; // @dynamic toUin;
@property(retain, nonatomic) NSString *uin; // @dynamic uin;

@end

