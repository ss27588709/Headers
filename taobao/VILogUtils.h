//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDateFormatter;

@interface VILogUtils : NSObject
{
    NSDateFormatter *_formatter;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)localLogPath;
- (void)uploadMemoryLog:(id)arg1 onCompletionHandler:(CDUnknownBlockType)arg2;
- (void)uploadLocalLogWithPath:(id)arg1;
- (void)saveLogToLocalWithLogContent:(id)arg1;
- (void)checkLocalLogAndUpload;
- (id)appendEndSymbolForLogBuffer:(id)arg1;
- (id)logHeadWithVerifyId:(id)arg1;
- (id)logStringForUcId:(id)arg1 extParams:(id)arg2;
- (id)formattedLogContent:(id)arg1;
- (id)UTDID;
- (id)networkType;
- (id)getEnvironmentParamsWithVerifyId:(id)arg1;
- (id)getNowTime;
- (id)init;

@end
