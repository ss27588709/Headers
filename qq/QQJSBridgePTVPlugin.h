//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQWebViewPluginQQBizBase.h>

#import <QQMainProject/QQRichMediaPickerReportDelegate-Protocol.h>

@class NSString, PTVPluginConfigModel;
@protocol QQRichMediaPickerControllerDelegate;

@interface QQJSBridgePTVPlugin : QQWebViewPluginQQBizBase <QQRichMediaPickerReportDelegate>
{
    NSString *_activityCallBack;
    long long _captureActionType;
    id <QQRichMediaPickerControllerDelegate> _action;
    PTVPluginConfigModel *_configModel;
}

@property(retain, nonatomic) PTVPluginConfigModel *configModel; // @synthesize configModel=_configModel;
@property(retain, nonatomic) id <QQRichMediaPickerControllerDelegate> action; // @synthesize action=_action;
@property(nonatomic) long long captureActionType; // @synthesize captureActionType=_captureActionType;
@property(copy, nonatomic) NSString *activityCallBack; // @synthesize activityCallBack=_activityCallBack;
- (void)richMediaPickerController:(id)arg1 eventWithAction:(long long)arg2;
- (void)presentRichMediaPicker:(id)arg1;
- (void)startRichMediaPickerController:(id)arg1;
- (void)openTinyVideoCamera:(id)arg1;
- (void)handleJsBridgeRequest_ptv_startNewPTVActivity:(id)arg1;
- (void)handleJsBridgeRequest_ptv_onClickShareVideo:(id)arg1;
- (void)handleJsBridgeRequest_ptv_onClickShareBattle:(id)arg1;
- (void)handleJsBridgeRequest_ptv_isSupportGestureDecoration:(id)arg1;
- (void)handleJsBridgeRequest_ptv_isSupportDynamicDecoration:(id)arg1;
- (void)handleJsBridgeRequest_ptv_isMobileSupportPTV:(id)arg1;
- (void)handleJsBridgeRequest_ptv_isSupportDanceGame:(id)arg1;
- (void)handleJsBridgeRequest_ptv_isSupportPTV:(id)arg1;
- (void)handleJsBridgeRequest_ptv_GSBase64Encode:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
