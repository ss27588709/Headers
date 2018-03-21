//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface PolicyModel : NSObject
{
    NSString *_policyKey;
    long long _memNumLowLimit;
    long long _memNumHighLimit;
    double _frequence;
}

@property(nonatomic) double frequence; // @synthesize frequence=_frequence;
@property(nonatomic) long long memNumHighLimit; // @synthesize memNumHighLimit=_memNumHighLimit;
@property(nonatomic) long long memNumLowLimit; // @synthesize memNumLowLimit=_memNumLowLimit;
@property(copy, nonatomic) NSString *policyKey; // @synthesize policyKey=_policyKey;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
