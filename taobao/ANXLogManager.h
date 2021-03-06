//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ANXLogCollector;

@interface ANXLogManager : NSObject
{
    ANXLogCollector *_logCollector;
}

@property(retain, nonatomic) ANXLogCollector *logCollector; // @synthesize logCollector=_logCollector;
- (void).cxx_destruct;
- (void)clearCache;
- (void)saveLocalLog;
- (void)submit;
- (void)logCountWithBuilder:(CDUnknownBlockType)arg1;
- (void)logExceptionWithBuilder:(CDUnknownBlockType)arg1;
- (void)logPerformanceWithBuilder:(CDUnknownBlockType)arg1;
- (void)logBehaviorWithBuilder:(CDUnknownBlockType)arg1;
- (id)initWithRuntimeConfig:(id)arg1;

@end

