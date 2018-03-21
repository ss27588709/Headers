//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSDecimalNumberBehaviors-Protocol.h"

@interface KSDecimalNumberBehaviors : NSObject <NSDecimalNumberBehaviors>
{
    short _numScale;
    unsigned long long _model;
}

+ (id)instanceWithScale:(short)arg1 roundingMode:(unsigned long long)arg2;
@property(nonatomic) short numScale; // @synthesize numScale=_numScale;
@property(nonatomic) unsigned long long model; // @synthesize model=_model;
- (id)exceptionDuringOperation:(SEL)arg1 error:(unsigned long long)arg2 leftOperand:(id)arg3 rightOperand:(id)arg4;
- (short)scale;
- (unsigned long long)roundingMode;

@end
