//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface QIMFansNotifyDataManager : NSObject
{
    long long _uin;
    NSMutableArray *_cacheData;
    NSMutableDictionary *_ioTaskDic;
}

+ (id)GetInstance;
- (void).cxx_destruct;
- (void)clearUnread;
- (void)clearUnreadForModels:(id)arg1;
- (id)getQIMFansNotifyList;
- (void)deleteModels:(id)arg1;
- (void)doReceviceData:(id)arg1;
- (void)onReceviceData:(id)arg1;
- (id)loadData:(long long)arg1;
- (void)doAccountChangeTo:(long long)arg1;
- (void)onAccountChangeTo:(long long)arg1;
- (void)doSaveNotifyList:(id)arg1 forUin:(long long)arg2;
- (void)checkToDoIO;
- (void)saveNotifyList:(id)arg1 forUin:(long long)arg2;
- (void)onAppTerminate;
- (void)onAppCrash;
- (void)onForceOffLine;
- (id)init;

@end

