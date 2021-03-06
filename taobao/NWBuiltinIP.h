//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@interface NWBuiltinIP : NSObject
{
    NSMutableArray *_amdcHosts;
    NSMutableArray *_amdcIPs;
    NSMutableArray *_aserverHosts;
    NSMutableArray *_aserverIPs;
    NSArray *_hotDomains;
}

+ (id)shareInstance;
@property(readonly, nonatomic) NSArray *hotDomains; // @synthesize hotDomains=_hotDomains;
@property(readonly, nonatomic) NSMutableArray *aserverIPs; // @synthesize aserverIPs=_aserverIPs;
@property(readonly, nonatomic) NSMutableArray *aserverHosts; // @synthesize aserverHosts=_aserverHosts;
@property(readonly, nonatomic) NSMutableArray *amdcIPs; // @synthesize amdcIPs=_amdcIPs;
@property(readonly, nonatomic) NSMutableArray *amdcHosts; // @synthesize amdcHosts=_amdcHosts;
- (void).cxx_destruct;
- (void)setAmdcIPs:(id)arg1 debugIps:(id)arg2 dailyIps:(id)arg3;
- (void)setAmdcHosts:(id)arg1 debugHost:(id)arg2 dailyHost:(id)arg3;
- (void)setAcsCenterIPs:(id)arg1 debugIps:(id)arg2 dailyIps:(id)arg3;
- (void)setAcsCenterHosts:(id)arg1 debugHost:(id)arg2 dailyHost:(id)arg3;
- (void)setHotDomains:(id)arg1;
- (_Bool)isAmdcHost:(id)arg1;
- (_Bool)isAcsHost:(id)arg1;
- (id)buildAcsUnitHost:(id)arg1;
- (id)currentAmdcIPs;
- (id)currentAcsCenterIPs;
- (id)currentAmdcHost;
- (id)currentAcsCenterHost;
- (id)currentHotDomains;
- (id)init;

@end

