//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QQVipFunctionDownloadProtocol-Protocol.h>

@class NSMutableArray, NSRecursiveLock, NSString, QQLockDictionary, QQVIPFunctionGlobalStatus;

@interface QQVipFunctionDownloadManager : NSObject <QQVipFunctionDownloadProtocol>
{
    NSMutableArray *_callBackThreadArr;
    QQLockDictionary *_comicManageDic;
    NSRecursiveLock *_lock;
    QQVIPFunctionGlobalStatus *_globalStatus;
    unsigned long long _redPointTimestamp;
    double _userStartDownloadTimestamp;
    int _xo;
}

+ (id)shareManager;
- (void).cxx_destruct;
- (void)OnNotify:(id)arg1;
- (void)clearDataManageContext;
- (void)updateGlobalState;
- (void)updateSectionModelDic:(id)arg1 forComic:(id)arg2;
@property(nonatomic) double userStartDownloadTimestamp; // @dynamic userStartDownloadTimestamp;
- (void)asynGetRunningSectionTaskCount:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)asynQueryRuningOrPauseSectionTaskCount:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)totalRunningSectionTaskCount;
- (_Bool)isSectionAlreadySuccessDownload:(id)arg1 SectionID:(id)arg2;
- (void)asynDeleteComic:(id)arg1 SectionArr:(id)arg2;
- (void)asynPauseDownloadAllComic;
- (void)asynContinueDownloadComic:(id)arg1;
- (void)asynPauseDownloadComic:(id)arg1;
- (void)asynPauseDownloadComic:(id)arg1 sectionIDArr:(id)arg2;
- (void)asynPauseDownloadComic:(id)arg1 SectionID:(id)arg2;
- (void)asynDownloadComic:(id)arg1 sectionModels:(id)arg2;
- (void)notifyActionResult:(id)arg1;
- (id)getSectionDBModelArr:(id)arg1 byDBModelState:(unsigned long long)arg2;
- (id)getSectionDBModel:(id)arg1 withSectionID:(id)arg2;
- (id)getComicDownloadStatus:(id)arg1;
- (void)removeNewTaskRedPoint;
- (_Bool)isThereAnyNewDownloadingTask;
- (id)getDownloadSectionDBModelArr:(id)arg1;
- (_Bool)hasDownloadWithComicID:(id)arg1 withSectionID:(id)arg2;
- (_Bool)hasDownloadRecordInComic:(id)arg1 forSection:(id)arg2;
- (id)getDownloadedComicIDArr;
- (int)getTotalDownloadedSize:(id)arg1;
- (id)comicManageObjBy:(id)arg1;
- (void)asyncGetDBModel:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)clearCallbackThread;
- (void)callbackThreadAction:(void *)arg1;
- (id)getOneCallBackThreadWithComicId:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *callBackThreadArr; // @dynamic callBackThreadArr;
@property(retain, nonatomic) QQLockDictionary *comicManageDic; // @dynamic comicManageDic;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) QQVIPFunctionGlobalStatus *globalStatus; // @dynamic globalStatus;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSRecursiveLock *lock; // @dynamic lock;
@property(nonatomic) unsigned long long redPointTimestamp; // @dynamic redPointTimestamp;
@property(readonly) Class superclass;

@end

