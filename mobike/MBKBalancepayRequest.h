//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKMobikeRequest.h"

@class NSNumber, NSString;

@interface MBKBalancepayRequest : MBKMobikeRequest
{
    NSNumber *_totalFee;
    NSString *_paytype;
    NSString *_cardId;
    NSString *_citycode;
}

@property(copy, nonatomic) NSString *citycode; // @synthesize citycode=_citycode;
@property(copy, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
@property(copy, nonatomic) NSString *paytype; // @synthesize paytype=_paytype;
@property(copy, nonatomic) NSNumber *totalFee; // @synthesize totalFee=_totalFee;
- (void).cxx_destruct;
- (id)init;

@end

