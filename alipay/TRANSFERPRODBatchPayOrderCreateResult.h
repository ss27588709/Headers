//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TRANSFERPRODRPCResponse.h"

@class NSString, TRANSFERPRODBatchPayOrderInfo;

@interface TRANSFERPRODBatchPayOrderCreateResult : TRANSFERPRODRPCResponse
{
    NSString *_batchNo;
    TRANSFERPRODBatchPayOrderInfo *_batchPayOrderInfo;
}

@property(retain, nonatomic) TRANSFERPRODBatchPayOrderInfo *batchPayOrderInfo; // @synthesize batchPayOrderInfo=_batchPayOrderInfo;
@property(retain, nonatomic) NSString *batchNo; // @synthesize batchNo=_batchNo;
- (void).cxx_destruct;

@end

