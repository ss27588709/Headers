//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface BubbleAnimationSubWidthInfo : NSObject
{
    long long _staticStepCycleCount;
    long long _movingStepCycleCount;
    long long _turnbackStepCyCleCount;
    NSArray *_staticStepImageNames;
    NSArray *_movingStepImageNames;
    NSArray *_turnbackStepImageNames;
    float _paddingTop;
    float _paddingLeft;
    float _paddingBottom;
    float _paddingRight;
}

@property(nonatomic) float paddingRight; // @synthesize paddingRight=_paddingRight;
@property(nonatomic) float paddingBottom; // @synthesize paddingBottom=_paddingBottom;
@property(nonatomic) float paddingLeft; // @synthesize paddingLeft=_paddingLeft;
@property(nonatomic) float paddingTop; // @synthesize paddingTop=_paddingTop;
@property(retain, nonatomic) NSArray *turnbackStepImageNames; // @synthesize turnbackStepImageNames=_turnbackStepImageNames;
@property(retain, nonatomic) NSArray *movingStepImageNames; // @synthesize movingStepImageNames=_movingStepImageNames;
@property(retain, nonatomic) NSArray *staticStepImageNames; // @synthesize staticStepImageNames=_staticStepImageNames;
@property(nonatomic) long long turnbackStepCyCleCount; // @synthesize turnbackStepCyCleCount=_turnbackStepCyCleCount;
@property(nonatomic) long long movingStepCycleCount; // @synthesize movingStepCycleCount=_movingStepCycleCount;
@property(nonatomic) long long staticStepCycleCount; // @synthesize staticStepCycleCount=_staticStepCycleCount;
- (void).cxx_destruct;

@end
