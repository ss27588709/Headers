//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FMDatabaseQueue, TBDBTableFriendInfo, TBDBTableStoryInfo, TBDBTableUtilCaches, TBDBTableVideoInfo;
@protocol OS_dispatch_queue;

@interface TBDBStory : NSObject
{
    NSObject<OS_dispatch_queue> *_handleDBQueue;
    FMDatabaseQueue *_databaseQueue;
    TBDBTableStoryInfo *_tableStoryInfo;
    TBDBTableFriendInfo *_tableFriendInfo;
    TBDBTableUtilCaches *_tableUtilCaches;
    TBDBTableVideoInfo *_tableVideoInfo;
}

+ (id)sharedInstance;
+ (id)NTAsyncGetUtilCaches;
- (void)changeAccount:(id)arg1;
- (id)getDBPath:(id)arg1;
- (void)doInitNotification;
- (void)doInitDBObject;
- (void)doInitData;
- (void)dealloc;
- (id)init;
- (void)deleteStoryInfoWithVid:(id)arg1;
- (void)deleteStoryInfoWithUid:(id)arg1 withPullType:(id)arg2;
- (id)getStoryInfoWithUid:(id)arg1 withPullType:(id)arg2;
- (void)updateStoryInfoWithModel:(id)arg1 withPullType:(id)arg2 withModel:(id)arg3;
- (void)deleteAllUtilCachesWithType:(unsigned int)arg1 withUnionID:(id)arg2;
- (void)deleteUtilCaches:(unsigned int)arg1 withKey:(id)arg2 withUnionID:(id)arg3;
- (void)asyncGetUtilCaches:(unsigned int)arg1 withUnionID:(id)arg2;
- (id)getUtilCaches:(unsigned int)arg1 withUnionID:(id)arg2;
- (void)updateUtilCachesWithModel:(unsigned int)arg1 withKey:(id)arg2 withUnionID:(id)arg3 withModel:(id)arg4;
- (id)getBatchVideoInfoWithVid:(id)arg1;
- (void)updateVideoInfoWithModel:(id)arg1;

@end

