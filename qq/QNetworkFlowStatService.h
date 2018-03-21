//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/INetworkFlowStatService-Protocol.h>

@class NSString;

@interface QNetworkFlowStatService : NSObject <INetworkFlowStatService>
{
}

- (void)resetPacketStats;
- (void)setInitialBattery:(float)arg1;
- (void)countDiscussGroupMessageNumber:(int)arg1;
- (void)countGroupMessageNumber:(int)arg1;
- (void)countC2CMessageNumber:(int)arg1;
- (void)saveFlowStatImmediately:(_Bool)arg1;
- (void)recordFlowBytes:(long long)arg1 type:(long long)arg2 networkType:(int)arg3;
- (void)recordFlowBytes:(long long)arg1 source:(int)arg2 entry:(id)arg3;
- (void)recordFlowBytes:(long long)arg1 type:(long long)arg2;
- (void)recordFlowBytes:(long long)arg1 type:(long long)arg2 extra:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
