//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/StrangerDecorationDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, QQReportLogModel;
@protocol OS_dispatch_queue;

@interface FontStoreManager : NSObject <StrangerDecorationDelegate>
{
    NSMutableArray *_fontList;
    NSMutableDictionary *_fontSetDict;
    _Bool _isSupportUpdate;
    QQReportLogModel *_logModel;
    NSMutableDictionary *_fontTypeDict;
    NSMutableDictionary *_magicFontOpenFlagDic;
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSMutableDictionary *_diyFontInfoCache;
    NSMutableDictionary *_requestingDiyFontInfo;
    NSMutableArray *_willRequestDiyFontInfo;
    NSMutableArray *_diyRequestSeqCache;
}

+ (_Bool)isExitFontFile:(long long)arg1;
+ (_Bool)isFounderV1FontId:(long long)arg1;
+ (_Bool)isExistFounderFontFileWithFontId:(long long)arg1;
+ (id)founderFontFilePathWithFontId:(long long)arg1;
+ (id)founderFontDirPathWithFontId:(long long)arg1;
+ (id)founderFontBasePath;
+ (id)FontFileStorePath:(int)arg1;
+ (id)FontPathWithFontId:(int)arg1;
+ (id)FontStorePath;
+ (id)getInstance;
- (void)handleDiyFontResponseError:(id)arg1;
- (void)parseDiyFontResponse:(CDStruct_7895f40e)arg1;
- (_Bool)clearCacheWithSeq:(int)arg1;
- (_Bool)containsItem:(id)arg1;
- (void)doRequestDiyFontInfo;
- (void)requestDiyFontInfoWithUin:(unsigned long long)arg1 fontId:(unsigned int)arg2;
- (void)forceCheckAndUpdateDiyFontInfo:(unsigned long long)arg1 fontId:(unsigned int)arg2 cfgUpdateTime:(unsigned long long)arg3;
- (id)getDiyFontConfigWithUin:(unsigned long long)arg1 fontId:(unsigned int)arg2 setTimeFromMsg:(unsigned long long)arg3 msgTime:(unsigned long long)arg4;
- (void)updateDiyFontInfo:(unsigned long long)arg1 fontId:(unsigned int)arg2 configUpdateTime:(unsigned long long)arg3 config:(id)arg4;
- (id)getDiyFontInfoFromLocal;
- (void)syncDiyFontInfoToLocal;
- (void)initDiyFontInfoCache;
- (id)diyFontConfigFilePath;
- (void)reportFontMessageReceivedWithFontId:(unsigned int)arg1 targetUin:(id)arg2;
- (void)reportFounderFontMessageReceivedWithTargetUin:(id)arg1 fontId:(unsigned int)arg2;
- (void)reportHanyiFontMessageReceivedWithTargetUin:(id)arg1 fontId:(unsigned int)arg2;
- (void)reportFontMessageSentWithTargetUin:(id)arg1;
- (void)reportFounderFontMessageSentWithTargetUin:(id)arg1 fontId:(unsigned int)arg2;
- (void)reportHanyiFontMessageSentWithTargetUin:(id)arg1 fontId:(unsigned int)arg2;
- (void)reportMagicFontMessageReceivedWithTargetUin:(id)arg1;
- (void)reportMagicFontMessageSentWithTargetUin:(id)arg1;
- (void)reportFontMessageWithType:(id)arg1 andTargetUin:(id)arg2 fontId:(unsigned int)arg3;
- (void)cacheFontType:(id)arg1;
- (id)getVipFontInfo:(long long)arg1;
- (long long)getFontType:(long long)arg1;
- (long long)getRealFontId:(long long)arg1;
- (long long)getNewFontId:(long long)arg1 type:(long long)arg2;
- (_Bool)hasActiveFonAndActivetWithFontId:(long long)arg1;
- (_Bool)hasActiveFontWithFontId:(long long)arg1;
- (void)fontSizeSetup:(id)arg1 prefix:(id)arg2;
- (id)getUserFontSizeSetting;
- (void)setMagicFontOpenFlag:(_Bool)arg1;
- (int)fontSetup:(long long)arg1;
- (void)onStrangerMagicFontOpenFlagSuccess:(_Bool)arg1 forUin:(id)arg2 flag:(_Bool)arg3 isCache:(_Bool)arg4;
- (void)onStrangerFontLoadSuccess:(_Bool)arg1 forUin:(id)arg2 ID:(long long)arg3 isCache:(_Bool)arg4;
- (_Bool)strangerMagicFontOpenFlagWithUin:(id)arg1 aioMsgInfo:(id)arg2;
- (long long)strangerFontId:(id)arg1 aioMsgInfo:(id)arg2;
- (id)FontStoreBasePath;
- (id)getAvailableFontIdList;
- (id)getFontList;
- (id)getFontInfo:(long long)arg1;
- (void)asyncUpdateFontInfoWithFonts:(id)arg1;
- (void)updateFontInfo;
- (_Bool)addFontInfo:(id)arg1;
- (void)syncFontInfoToLocal;
- (void)initFontInfo;
- (_Bool)isSupportUpdate;
- (_Bool)CheckCachesFontFolder;
- (_Bool)CreateSourcePathIfNoExist:(id)arg1;
- (id)getIoSerialQueue;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
