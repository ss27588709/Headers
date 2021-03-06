//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface MobClickGameAnalytics : NSObject
{
    NSString *_runningLevel;
    NSString *_lastLevel;
    NSMutableDictionary *_levels;
    double _levelBeginTime;
    NSString *_userLevel;
    NSMutableDictionary *_userInfo;
    double _lastLevelBeginTime;
}

+ (void)setUserID:(id)arg1 sex:(int)arg2 age:(int)arg3 platform:(id)arg4;
+ (void)setUserLevel:(id)arg1;
+ (_Bool)checkScenarioCall;
+ (void)use:(id)arg1 amount:(int)arg2 price:(double)arg3;
+ (void)bonus:(id)arg1 amount:(int)arg2 price:(double)arg3 source:(int)arg4;
+ (void)bonus:(double)arg1 source:(int)arg2;
+ (void)buy:(id)arg1 amount:(int)arg2 price:(double)arg3;
+ (void)pay:(double)arg1 source:(int)arg2 item:(id)arg3 amount:(int)arg4 price:(double)arg5;
+ (void)pay:(double)arg1 source:(int)arg2 coin:(double)arg3;
+ (void)exchange:(id)arg1 currencyAmount:(double)arg2 currencyType:(id)arg3 virtualCurrencyAmount:(double)arg4 paychannel:(int)arg5;
+ (void)resumeLevel:(id)arg1;
+ (void)pauseLevel:(id)arg1;
+ (void)failLevel:(id)arg1;
+ (void)finishLevel:(id)arg1;
+ (void)startLevel:(id)arg1;
+ (_Bool)validLevel:(id)arg1;
+ (id)userInfo;
+ (id)userLevel;
+ (void)setUserLevelId:(int)arg1;
+ (void)profileSignOff;
+ (void)profileSignInWithPUID:(id)arg1 provider:(id)arg2;
+ (void)profileSignInWithPUID:(id)arg1;
+ (id)sharedInstance;
@property(copy, nonatomic) NSString *runningLevel; // @synthesize runningLevel=_runningLevel;
@property(copy, nonatomic) NSString *lastLevel; // @synthesize lastLevel=_lastLevel;
@property(retain, nonatomic) NSMutableDictionary *levels; // @synthesize levels=_levels;
@property(retain, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) double lastLevelBeginTime; // @synthesize lastLevelBeginTime=_lastLevelBeginTime;
- (void)dealloc;
- (void)clean;
- (void)use:(id)arg1 amount:(int)arg2 price:(double)arg3;
- (void)buy:(id)arg1 amount:(int)arg2 price:(double)arg3;
- (void)bonus:(id)arg1 amount:(int)arg2 price:(double)arg3 source:(int)arg4;
- (void)bonus:(double)arg1 source:(int)arg2;
- (void)pay:(double)arg1 source:(int)arg2 item:(id)arg3 amount:(int)arg4 price:(double)arg5;
- (_Bool)validPay:(double)arg1 source:(int)arg2 coin:(double)arg3;
- (void)pay:(double)arg1 source:(int)arg2 coin:(double)arg3;
- (void)exchange:(id)arg1 currencyAmount:(double)arg2 currencyType:(id)arg3 virtualCurrencyAmount:(double)arg4 paychannel:(int)arg5;
- (void)levelFinish:(id)arg1 completed:(_Bool)arg2;
- (void)pauseLevel:(id)arg1;
- (void)resumeLevel:(id)arg1;
- (void)failLevel:(id)arg1;
- (void)finishLevel:(id)arg1;
- (void)updateLevelTimestamp:(id)arg1;
- (void)updateLevelTimestamp;
- (_Bool)validLevel:(id)arg1;
- (void)startLevel:(id)arg1;
- (void)setGameLevelIfNeeded:(id)arg1;
- (void)setUserLevelIfNeeded:(id)arg1;
- (void)updateLevelDuration:(id)arg1;
- (void)updateLevelDuration;
- (long long)calculateLevelDuration:(id)arg1;
- (void)cleanUpCurrentLevelTime:(id)arg1;
@property(copy, nonatomic) NSString *userLevel;
- (id)init;

@end

