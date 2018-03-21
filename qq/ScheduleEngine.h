//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IEngineDispatchDelegate-Protocol.h>
#import <QQMainProject/IPacketSendResultHandler-Protocol.h>
#import <QQMainProject/ScheduleInfoAlertViewDelegate-Protocol.h>

@class IEngineDispatchDelegateNonRetian, NSMapTable, NSString, NSTimer, QQAVAlertView, QQNavigationController, ScheduleChangeNotification, ScheduleInfoAlertView;

@interface ScheduleEngine : NSObject <IEngineDispatchDelegate, ScheduleInfoAlertViewDelegate, IPacketSendResultHandler>
{
    QQNavigationController *_detailsViewNavController;
    ScheduleInfoAlertView *_alert;
    QQAVAlertView *_avAlert;
    NSTimer *_timer;
    unsigned int _systemSoundID;
    NSString *_readConfirmLicense;
    IEngineDispatchDelegateNonRetian *_csDelegate;
    NSMapTable *_scheduleDelegateMgr;
    ScheduleChangeNotification *_loginfirstSchedule;
}

+ (id)getInstance;
@property(retain, nonatomic) ScheduleChangeNotification *loginfirstSchedule; // @synthesize loginfirstSchedule=_loginfirstSchedule;
- (void)notifyMsgSentResult:(id)arg1 result:(int)arg2;
- (void)readedConfirmReport:(const struct MsgHead *)arg1;
- (id)getReadConfirmLicense;
- (void)onEnterBackGround;
- (void)showScheduleDetail:(id)arg1;
- (void)didClickButtonAtIndex:(id)arg1 atIndex:(int)arg2;
- (void)requstTimeOut:(id)arg1;
- (void)showScheduleInfoAlertView:(id)arg1;
- (int)parse0x592:(id)arg1 dataWithBytes:(char *)arg2 length:(int)arg3 serviceType:(id)arg4 Key:(id)arg5 Seq:(int)arg6;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (_Bool)SetScheduleAlarmById:(id)arg1 scheduleId:(id)arg2 isAlarm:(_Bool)arg3 delegate:(id)arg4;
- (_Bool)handleOpenURL:(id)arg1 sourceApplication:(id)arg2;
- (int)parseMsgType0x210_SubMsgType0x9c_Schedule:(const void *)arg1 DataLen:(int)arg2;
- (int)parseMsgType0x210_SubMsgType0x9b_Schedule:(const void *)arg1 DataLen:(int)arg2;
- (_Bool)SendRecallScheduleReq:(id)arg1 delegate:(id)arg2;
- (_Bool)SendGetScheduleDetailReq:(id)arg1 delegate:(id)arg2;
- (_Bool)SendDeleteScheduleReq:(id)arg1 delegate:(id)arg2;
- (_Bool)SendUpdateScheduleReq:(id)arg1 delegate:(id)arg2;
- (_Bool)SendCreateScheduleReq:(id)arg1 delegate:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
