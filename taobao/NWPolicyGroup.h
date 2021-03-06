//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NWCoding.h"

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface NWPolicyGroup : NWCoding <NSCopying>
{
    NSArray *_policys;
    NSArray *_history;
    NSString *_host;
    NSString *_cname;
    NSString *_scheme;
    NSString *_etag;
    NSString *_unit;
    double _lastAccessTime;
    double _fetchAmdcTime;
    double _amdcTTL;
}

+ (id)convert2policyWithAisles:(id)arg1 withHost:(id)arg2 withScheme:(id)arg3 withUnit:(id)arg4 withIP:(id)arg5 withIpType:(int)arg6 withTimestamp:(double)arg7;
+ (id)convert2policiesWithAisles:(id)arg1 withIps:(id)arg2 withHost:(id)arg3 withScheme:(id)arg4 withUnit:(id)arg5 withIpType:(int)arg6 withTimestamp:(double)arg7;
+ (id)convert2policiesWithOrigin:(id)arg1;
+ (id)findSamePolicy:(id)arg1 fromPolicies:(id)arg2;
@property(readonly, nonatomic) double amdcTTL; // @synthesize amdcTTL=_amdcTTL;
@property(readonly, nonatomic) double fetchAmdcTime; // @synthesize fetchAmdcTime=_fetchAmdcTime;
@property(readonly, nonatomic) double lastAccessTime; // @synthesize lastAccessTime=_lastAccessTime;
@property(readonly, nonatomic) NSString *unit; // @synthesize unit=_unit;
@property(readonly, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(readonly, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(readonly, nonatomic) NSString *cname; // @synthesize cname=_cname;
@property(readonly, nonatomic) NSString *host; // @synthesize host=_host;
@property(readonly, nonatomic) NSArray *history; // @synthesize history=_history;
@property(readonly, nonatomic) NSArray *policys; // @synthesize policys=_policys;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyFromObject:(id)arg1;
- (void)deleteHistoryByLRU;
- (void)mergePolicies2History:(id)arg1;
- (void)mergeHistoryFromArray:(id)arg1 toArray:(id)arg2;
- (void)mergePolicies:(id)arg1;
- (_Bool)isInUpdateInterval:(id)arg1 withNow:(double)arg2;
- (void)updatePolicy:(id)arg1 withStatus:(_Bool)arg2;
- (void)updateLastAccessTime:(double)arg1;
- (void)updateAmdcTTL:(double)arg1;
- (void)updateFetchAmdcTime:(double)arg1;
- (id)searchPoliciesWithScheme:(id)arg1 withType:(int)arg2;
- (_Bool)updateWithOrigin:(id)arg1;
- (id)initWithHost:(id)arg1 withIPs:(id)arg2 withPublickey:(id)arg3 withProtocol:(id)arg4 withIpSourceType:(int)arg5;
- (id)initWithHost:(id)arg1;
- (id)initWithOrigin:(id)arg1;

@end

