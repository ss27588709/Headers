//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "EZEngineScheduler-Protocol.h"

@class NSMutableArray, NSString;

@interface EZAnimationManager : NSObject <EZEngineScheduler>
{
    NSMutableArray *_mAnimationFlows;
}

@property(retain, nonatomic) NSMutableArray *mAnimationFlows; // @synthesize mAnimationFlows=_mAnimationFlows;
- (void).cxx_destruct;
- (void)removeAnimationFlow:(id)arg1;
- (void)addAnimationFlow:(id)arg1;
- (void)update:(double)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

