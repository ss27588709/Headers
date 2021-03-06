//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/FAListMgrDelegate-Protocol.h>

@class FAListMgrCloud, FAListMgrLocal, FAListMgrPeer, FAListMgrRecent, NSString;
@protocol FADelegate;

@interface FAListMgr : NSObject <FAListMgrDelegate>
{
    id <FADelegate> _delegate;
    FAListMgrLocal *_localListMgr;
    FAListMgrRecent *_recentListMgr;
    FAListMgrCloud *_cloudListMgr;
    FAListMgrPeer *_peerRecentListMgr;
    unsigned int _currentLoginTime;
    unsigned int _lastLoginTime;
    unsigned int _isMerged;
}

+ (id)getInstance;
- (void)addFileRecordToRecentCache:(id)arg1;
- (void)clearPeerRecentFileList;
- (void)clearRecentFileList;
- (void)clearLocalFileList;
- (void)clearWYFileList;
- (_Bool)isCloudFileDeleting:(id)arg1;
- (id)queryCloudFileLocalState:(id)arg1;
- (void)OnBatchDeleteFileRecordFail:(id)arg1;
- (void)OnBatchDeleteFileRecordSuccess:(id)arg1;
- (void)OnDeleteFileRecordFail:(id)arg1 withErr:(id)arg2;
- (void)OnDeleteFileRecordSuccess:(id)arg1;
- (void)OnLocalLibraryInfoSuccess:(id)arg1;
- (void)OnFileListFail:(int)arg1 withErr:(id)arg2;
- (void)OnFileListSuccess:(struct FAListInfo)arg1 start:(unsigned short)arg2 end:(unsigned short)arg3 data:(id)arg4 hasMore:(_Bool)arg5;
- (void)mergeOfflineListToRecentList:(id)arg1;
- (void)batchDeleteLocalFiles:(id)arg1 force:(_Bool)arg2;
- (void)deleteFile:(int)arg1 model:(id)arg2 force:(_Bool)arg3;
- (void)getCloudFileList:(int)arg1 start:(unsigned short)arg2 end:(unsigned short)arg3 isForce:(_Bool)arg4;
- (id)getRecentFileList:(struct FAListInfo)arg1;
- (void)getPeerRecentFileListCategory:(struct FAListInfo)arg1;
- (void)getRecentFileListCategory:(struct FAListInfo)arg1 isForce:(_Bool)arg2;
- (void)getRecentFileListFromStart:(unsigned short)arg1 toEnd:(unsigned short)arg2 businessFilter:(unsigned long long)arg3;
- (void)getLocalFileList:(int)arg1 isForce:(_Bool)arg2 isFilterAlbum:(_Bool)arg3;
- (void)dealloc;
- (void)saveCurrentLoginTime;
- (unsigned int)getLastLoginTime;
- (void)clearExpiredFile;
- (void)onAccountLogout:(id)arg1;
- (void)onAccountChanged:(id)arg1;
- (void)onApplicationWillResignActive:(id)arg1;
- (void)fetchOfflineFiles;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

