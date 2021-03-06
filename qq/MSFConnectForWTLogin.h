//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TlibDy/MSFConnect.h>

@class NSLock;

@interface MSFConnectForWTLogin : MSFConnect
{
    struct _MSFConnDelegateItem *_pItems;
    int _iItemCap;
    int _iItemCount;
    NSLock *_lock;
}

+ (id)instance;
- (void)onMSFRecvState:(id)arg1;
- (void)onMSFRecvPacket:(id)arg1;
- (void)cancel:(long long)arg1;
- (int)sendData:(id)arg1 withTimeout:(double)arg2 param:(id)arg3 delegate:(id)arg4;
- (id)getConnDelegate:(int)arg1;
- (void)removeConnDelegateItem:(int)arg1;
- (void)addConnDelegateItem:(int)arg1 delegate:(id)arg2;
- (void)dealloc;
- (id)init;

@end

