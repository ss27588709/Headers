//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface AliDetailPackageModel : TBJSONModel
{
    unsigned long long _currentAmount;
    unsigned long long _targetAmount;
    long long _endTimeMillis;
    long long _startTimeMillis;
    NSString *_amountText;
}

@property(copy, nonatomic) NSString *amountText; // @synthesize amountText=_amountText;
@property(nonatomic) long long startTimeMillis; // @synthesize startTimeMillis=_startTimeMillis;
@property(nonatomic) long long endTimeMillis; // @synthesize endTimeMillis=_endTimeMillis;
@property(nonatomic) unsigned long long targetAmount; // @synthesize targetAmount=_targetAmount;
@property(nonatomic) unsigned long long currentAmount; // @synthesize currentAmount=_currentAmount;
- (void).cxx_destruct;

@end
