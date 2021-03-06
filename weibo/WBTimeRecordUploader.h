//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSFileHandle, NSFileManager, NSMutableArray, NSTimer;

@interface WBTimeRecordUploader : NSObject
{
    double _viewWillAppearTimeStamp;
    NSFileManager *_fileManager;
    NSFileHandle *_fileHandler;
    NSTimer *_recordTimer;
    NSTimer *_uploadTimer;
    NSMutableArray *_records;
    NSMutableArray *_recordsCache;
    NSMutableArray *_enterBackgroundCache;
    long long _policy;
}

@property(nonatomic) long long policy; // @synthesize policy=_policy;
@property(retain, nonatomic) NSMutableArray *enterBackgroundCache; // @synthesize enterBackgroundCache=_enterBackgroundCache;
@property(retain, nonatomic) NSMutableArray *recordsCache; // @synthesize recordsCache=_recordsCache;
@property(retain, nonatomic) NSMutableArray *records; // @synthesize records=_records;
@property(retain, nonatomic) NSTimer *uploadTimer; // @synthesize uploadTimer=_uploadTimer;
@property(retain, nonatomic) NSTimer *recordTimer; // @synthesize recordTimer=_recordTimer;
@property(retain, nonatomic) NSFileHandle *fileHandler; // @synthesize fileHandler=_fileHandler;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(nonatomic) double viewWillAppearTimeStamp; // @synthesize viewWillAppearTimeStamp=_viewWillAppearTimeStamp;
- (void).cxx_destruct;
- (void)addNewRecord:(id)arg1;
- (_Bool)clearLogFile;
- (_Bool)createDirectoryIfNotExist:(id)arg1;
- (id)logFilePath;
- (void)sendByAddlogBatch;
- (id)getLogContent;
- (void)writeToFile:(id)arg1;
- (void)uploadBatch;
- (id)logDictFromLogJsonString:(id)arg1;
- (void)uploadNow;
- (void)upload;
- (void)endRecordItemFromLastEnterBackgroundCache:(id)arg1 readTime:(double)arg2;
- (void)endRecordItem:(id)arg1 readTime:(double)arg2;
- (void)startRecordItem:(id)arg1 readTime:(double)arg2;
- (void)endRecordItemWhenInterruptStart:(double)arg1;
- (void)recordTimeStampWhenInterruptEnd:(double)arg1;
- (void)endRecordFromLastEnterBackgroundCache:(id)arg1 showTime:(double)arg2;
- (void)endRecordItem:(id)arg1 showTime:(double)arg2;
- (void)startRecordItem:(id)arg1 showTime:(double)arg2;
- (void)removeRecordItem:(id)arg1;
- (id)initWithPolicy:(long long)arg1;

@end

