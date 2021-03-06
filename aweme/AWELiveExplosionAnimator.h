//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CAAnimationDelegate-Protocol.h"

@class AWELiveAnimatorDiggViewPool, NSArray, NSString;

@interface AWELiveExplosionAnimator : NSObject <CAAnimationDelegate>
{
    _Bool _shutdown;
    long long _totalCellCount;
    NSArray *_radiansArray;
    NSArray *_thresholdArray;
    long long _currentCount;
    CDUnknownBlockType _completion;
    AWELiveAnimatorDiggViewPool *_diggViewPool;
}

@property(retain, nonatomic) AWELiveAnimatorDiggViewPool *diggViewPool; // @synthesize diggViewPool=_diggViewPool;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) long long currentCount; // @synthesize currentCount=_currentCount;
@property(nonatomic) _Bool shutdown; // @synthesize shutdown=_shutdown;
@property(retain, nonatomic) NSArray *thresholdArray; // @synthesize thresholdArray=_thresholdArray;
@property(retain, nonatomic) NSArray *radiansArray; // @synthesize radiansArray=_radiansArray;
@property(nonatomic) long long totalCellCount; // @synthesize totalCellCount=_totalCellCount;
- (void).cxx_destruct;
- (double)generateThreshold;
- (void)_configFrameOfView:(id)arg1 withModel:(id)arg2;
- (id)pathForLayer:(id)arg1 parentRect:(struct CGRect)arg2;
- (void)_stopAnimation:(id)arg1;
- (void)_startAnimationForView:(id)arg1;
- (void)stop;
- (void)explodeWithModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

