//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSFreeTrafficPrompts, NSString;

@interface KSFreeTrafficDetailInfo : NSObject
{
    _Bool _userDisabled;
    unsigned long long _plan;
    NSString *_freeTrafficFlag;
    double _duration;
    double _lastCheckTime;
    unsigned long long _userState;
    long long _freeTrafficStateUpdateTimeMark;
    KSFreeTrafficPrompts *_prompts;
    id _originResponseData;
}

@property(copy, nonatomic) id originResponseData; // @synthesize originResponseData=_originResponseData;
@property(retain, nonatomic) KSFreeTrafficPrompts *prompts; // @synthesize prompts=_prompts;
@property(nonatomic) long long freeTrafficStateUpdateTimeMark; // @synthesize freeTrafficStateUpdateTimeMark=_freeTrafficStateUpdateTimeMark;
@property(nonatomic) unsigned long long userState; // @synthesize userState=_userState;
@property(nonatomic) double lastCheckTime; // @synthesize lastCheckTime=_lastCheckTime;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *freeTrafficFlag; // @synthesize freeTrafficFlag=_freeTrafficFlag;
@property(nonatomic) _Bool userDisabled; // @synthesize userDisabled=_userDisabled;
@property(nonatomic) unsigned long long plan; // @synthesize plan=_plan;
- (void).cxx_destruct;
- (void)updateWithTrafficResponse:(id)arg1;
- (void)reset;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
