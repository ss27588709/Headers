//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALBaseModel.h"

@class NSString;

@interface WBPaySuccessModel : ALBaseModel
{
    _Bool _hasState;
    _Bool _hasFollow;
    _Bool _hasShare;
    NSString *_payMoney;
    NSString *_transactionTime;
    NSString *_transactionName;
    NSString *_payMethod;
    NSString *_receivingSide;
    NSString *_orderNumber;
    NSString *_transactionNumber;
    long long _followState;
    long long _shareState;
}

@property(nonatomic) _Bool hasShare; // @synthesize hasShare=_hasShare;
@property(nonatomic) _Bool hasFollow; // @synthesize hasFollow=_hasFollow;
@property(nonatomic, getter=isHasState) _Bool hasState; // @synthesize hasState=_hasState;
@property(nonatomic) long long shareState; // @synthesize shareState=_shareState;
@property(nonatomic) long long followState; // @synthesize followState=_followState;
@property(copy, nonatomic) NSString *transactionNumber; // @synthesize transactionNumber=_transactionNumber;
@property(copy, nonatomic) NSString *orderNumber; // @synthesize orderNumber=_orderNumber;
@property(copy, nonatomic) NSString *receivingSide; // @synthesize receivingSide=_receivingSide;
@property(copy, nonatomic) NSString *payMethod; // @synthesize payMethod=_payMethod;
@property(copy, nonatomic) NSString *transactionName; // @synthesize transactionName=_transactionName;
@property(copy, nonatomic) NSString *transactionTime; // @synthesize transactionTime=_transactionTime;
@property(copy, nonatomic) NSString *payMoney; // @synthesize payMoney=_payMoney;
- (void).cxx_destruct;
- (void)initAfterAutoAssignment;
- (id)keyForPropertyName:(id)arg1;
- (id)init;

@end

