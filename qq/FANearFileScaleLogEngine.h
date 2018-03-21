//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSTimer, QQLockDictionary;
@protocol OS_dispatch_queue;

@interface FANearFileScaleLogEngine : NSObject
{
    int _maxLogInfoSize;
    int _maxLogUploadInterval;
    _Bool _logUploadFlag;
    QQLockDictionary *_logDic;
    NSTimer *_logUploadTimer;
    NSTimer *_logSaveTimer;
    NSObject<OS_dispatch_queue> *_logQueue;
}

+ (id)GetInstance;
@property(retain, nonatomic) QQLockDictionary *logDic; // @synthesize logDic=_logDic;
- (void)packLogArray:(id)arg1 toMap:(map_d2c8aebd *)arg2 withKey:(id)arg3;
- (void)doUploadLog;
- (void)asyncUplodeLog;
- (void)DataReportWithDelay:(_Bool)arg1;
- (_Bool)checkLogInfoSize:(id)arg1;
- (void)DataReportReceiveUin:(id)arg1 opType:(id)arg2 opName:(id)arg3 opEnter:(id)arg4 opResult:(id)arg5 clickCount:(int)arg6 reserveDict:(id)arg7;
- (_Bool)DataReportReceiveUin:(id)arg1 opName:(id)arg2 opResult:(id)arg3 clickCount:(int)arg4 reserveDict:(id)arg5;
- (void)doSaveUniLog;
- (void)saveUniLog;
- (void)loadLogDict;
- (id)getClickPath;
- (id)getClickReportDirPath;
- (void)resetLogUploadTimer;
- (void)updateLogUploadConfig;
- (void)actionUpdateLogUploadConfig;
- (void)dealloc;
- (id)init;

@end
