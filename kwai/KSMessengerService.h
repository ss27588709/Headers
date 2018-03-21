//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSDKMessengerURLHandlerDelegate-Protocol.h"
#import "KSActivity-Protocol.h"
#import "KSURLHandler-Protocol.h"

@class NSString;

@interface KSMessengerService : NSObject <FBSDKMessengerURLHandlerDelegate, KSURLHandler, KSActivity>
{
    unsigned long long _activityStatus;
    CDUnknownBlockType _activityCompletion;
}

+ (_Bool)isNativeAvailable;
@property(copy, nonatomic) CDUnknownBlockType activityCompletion; // @synthesize activityCompletion=_activityCompletion;
@property(nonatomic) unsigned long long activityStatus; // @synthesize activityStatus=_activityStatus;
- (void).cxx_destruct;
- (void)performActivityItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)canPerformActivityItems:(id)arg1;
- (id)activityType;
- (_Bool)activityAvailable;
- (void)messengerURLHandler:(id)arg1 didHandleCancelWithContext:(id)arg2;
- (void)messengerURLHandler:(id)arg1 didHandleReplyWithContext:(id)arg2;
- (_Bool)handleOpenURL:(id)arg1 source:(id)arg2 annotation:(id)arg3;
- (void)didReceiveApplicationDidBecomeActive:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
