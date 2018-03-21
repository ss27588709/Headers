//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSRedPacketCountDownViewModel-Protocol.h"

@class KSLiveUserGrabRedPacketModel, KSPopoverURL, KSRedPacket, KSRedPacketStates, NSString;

@interface KSRedPacketCountDownViewModel : NSObject <KSRedPacketCountDownViewModel>
{
    _Bool _openable;
    _Bool _isSender;
    _Bool _appendable;
    _Bool _grabRequesting;
    KSRedPacket *_redPacket;
    KSRedPacketStates *_states;
    KSLiveUserGrabRedPacketModel *_grabModel;
}

@property(retain, nonatomic) KSLiveUserGrabRedPacketModel *grabModel; // @synthesize grabModel=_grabModel;
@property(retain, nonatomic) KSRedPacketStates *states; // @synthesize states=_states;
@property(nonatomic) _Bool grabRequesting; // @synthesize grabRequesting=_grabRequesting;
@property(nonatomic) _Bool appendable; // @synthesize appendable=_appendable;
@property(nonatomic) _Bool isSender; // @synthesize isSender=_isSender;
@property(nonatomic) _Bool openable; // @synthesize openable=_openable;
@property(readonly, nonatomic) KSRedPacket *redPacket; // @synthesize redPacket=_redPacket;
- (void).cxx_destruct;
- (void)p_updateOpenRedPackDetailPackageTimeInfo;
- (id)p_createGrabResultPopoverURLWithGrab:(id)arg1;
- (id)createGrabResultPopoverURL;
- (void)updateMyWalletAfter:(double)arg1;
- (void)updateRedPacketAfterGrab;
- (id)grabRedPacketCancelToken:(id)arg1;
- (void)prepareForGrab;
- (id)makeAppendRedPacketViewModel;
@property(readonly, nonatomic) KSPopoverURL *appendURL;
- (id)initWithRedPacket:(id)arg1 states:(id)arg2 currentUser:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
