//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AMMAudioMessage, NSData, NSDate, NSString;

@protocol AMMAudioRecordDelegate <NSObject>

@optional
- (void)recordAudioConvertFinish;
- (void)recordAudioConvertData:(NSData *)arg1 averageCostTime:(double)arg2 errorCode:(NSString *)arg3 time:(NSDate *)arg4;
- (void)recordMicPower:(double)arg1;
- (void)recordReportRecordTime:(double)arg1 recordStartState:(unsigned long long)arg2;
- (void)recordStartWithAMMAudioMessage:(AMMAudioMessage *)arg1 recordStartState:(unsigned long long)arg2;
- (void)recordFinishWithAMMAudioSilkLocalId:(NSString *)arg1 recordFinishState:(unsigned long long)arg2;
@end
