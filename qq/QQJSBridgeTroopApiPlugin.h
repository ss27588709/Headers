//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQWebViewPluginQQBizBase.h>

#import <QQMainProject/MemberCardEditDelegate-Protocol.h>

@class NSDictionary, NSString;

@interface QQJSBridgeTroopApiPlugin : QQWebViewPluginQQBizBase <MemberCardEditDelegate>
{
    NSDictionary *_requestQuery;
}

@property(retain, nonatomic) NSDictionary *requestQuery; // @synthesize requestQuery=_requestQuery;
- (void)handleJsBridgeRequest_troopApi_clickMineButton:(id)arg1;
- (void)handleJsBridgeRequest_troopApi_setRedPoint:(id)arg1;
- (void)handleJsBridgeRequest_troopApi_saveTroopMemberTitle:(id)arg1;
- (void)editUniqTitleCallBack:(id)arg1;
- (void)handleJsBridgeRequest_troopApi_openEditUniqTitle:(id)arg1;
- (void)joinGroupCallBack:(id)arg1;
- (void)handleJsBridgeRequest_troopApi_addTroop:(id)arg1;
- (void)callBackToWeb:(id)arg1 andDict:(id)arg2 andReportKey:(id)arg3;
- (void)handleJsBridgeRequest_troopApi_previewRewardVideo:(id)arg1;
- (void)handleJsBridgeRequest_troopApi_createReward:(id)arg1;
- (void)handleJsBridgeRequest_troopApi_openRewardDetail:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

