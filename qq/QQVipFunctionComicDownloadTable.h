//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/DBAsyncCallbackProtocol-Protocol.h>
#import <QQMainProject/IQQDBOperationBase-Protocol.h>

@class FMDatabase, NSString;

@interface QQVipFunctionComicDownloadTable : NSObject <DBAsyncCallbackProtocol, IQQDBOperationBase>
{
    unsigned int _updateBatchSqlStatementId_nosize;
    unsigned int _updateBatchSqlStatementId_hassize;
    unsigned int _queryComicStatusStatementId;
    unsigned int _querySectionStatusStatementId;
    unsigned int _deleteSectionInfoStatementId;
    unsigned int _queryDownloadRecordStatementId_comic;
    unsigned int _queryDownloadRecordStatementId_section;
    unsigned int _queryDownloadedComicsStatementId;
    unsigned int _queryHasDownlodStatementId;
    NSString *_tableName;
    FMDatabase *_db;
    int _xo;
}

- (void).cxx_destruct;
- (unsigned long long)getTableSign;
- (id)curUin;
- (unsigned long long)adapterFMResultSetToStatus:(id)arg1;
- (_Bool)updateSectionInfoBySectionModel:(id)arg1 comicId:(id)arg2 withUin:(id)arg3 inDb:(id)arg4;
- (id)downloadedComicArrWithUin:(id)arg1 inDb:(id)arg2;
- (_Bool)hasDownloadRecord:(id)arg1 withComic:(id)arg2 withUin:(id)arg3 inDb:(id)arg4;
- (_Bool)deleteSectionInfoBySectionArr:(id)arg1 comicId:(id)arg2 withUin:(id)arg3 inDb:(id)arg4;
- (id)getSectionStatus:(id)arg1 withComicID:(id)arg2 withUin:(id)arg3 inDb:(id)arg4;
- (id)getComicStatus:(id)arg1 withUin:(id)arg2 inDb:(id)arg3;
- (void)updateTableInDb:(id)arg1;
- (void)createTable:(id)arg1;
- (void)onDbAsyncCallback:(id)arg1 userdata:(id)arg2 workID:(int)arg3;
- (void)asynDeleteSectionRecords:(id)arg1 withComicId:(id)arg2 withUIN:(id)arg3 withBlock:(CDUnknownBlockType)arg4;
- (void)asyncUpdateSectionState:(id)arg1 withComicId:(id)arg2 withUIN:(id)arg3 withBlock:(CDUnknownBlockType)arg4;
- (_Bool)hasDownloadInComic:(id)arg1 forSection:(id)arg2;
- (_Bool)hasDownloadRecordInComic:(id)arg1 forSection:(id)arg2;
- (id)downloadedComicArr;
- (id)getComicDBModel:(id)arg1 withUIN:(id)arg2;
- (id)getSectionStatus:(id)arg1 withComicID:(id)arg2 withUIN:(id)arg3;
- (void)createTable;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *tableName; // @dynamic tableName;

@end
