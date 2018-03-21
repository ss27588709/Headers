//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/SAMRequestItem.h>

@class NSArray, NSString;

@interface DiscussGroupInfoReqItem : SAMRequestItem
{
    int _interemarkTimestamp;
    unsigned int _subcmd;
    long long _discussUin;
    NSArray *_batchDisUins;
    unsigned long long _redialTimes;
    NSString *_traceUUID;
    long long _updateReason;
}

@property(nonatomic) long long updateReason; // @synthesize updateReason=_updateReason;
@property(copy, nonatomic) NSString *traceUUID; // @synthesize traceUUID=_traceUUID;
@property(nonatomic) unsigned long long redialTimes; // @synthesize redialTimes=_redialTimes;
@property(retain, nonatomic) NSArray *batchDisUins; // @synthesize batchDisUins=_batchDisUins;
@property(nonatomic) unsigned int subcmd; // @synthesize subcmd=_subcmd;
@property(nonatomic) int interemarkTimestamp; // @synthesize interemarkTimestamp=_interemarkTimestamp;
@property(nonatomic) long long discussUin; // @synthesize discussUin=_discussUin;
- (void).cxx_destruct;
- (struct ConfMemberInfo *)fakeMemberInfo;
- (struct ConfBaseInfo *)fakeBaseInfo;
- (struct GetMultiConfInfoReq *)multiConfInfoReq;
- (id)parseConfInfoRsp:(const struct GetConfInfoRsp *)arg1;
- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
- (char *)getRequestBuffer;
- (_Bool)isEqual:(id)arg1;
- (id)serviceCmd;
- (id)initWithBatchDisUins:(id)arg1 interemarkTimestamp:(unsigned int)arg2;

@end
