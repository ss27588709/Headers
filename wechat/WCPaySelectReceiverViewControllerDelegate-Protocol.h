//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WCPayTransToBankCardReceiver;

@protocol WCPaySelectReceiverViewControllerDelegate <NSObject>
- (void)OnWCPaySelectReceiverViewControllerDeleteRecord:(WCPayTransToBankCardReceiver *)arg1;
- (void)OnWCPaySelectReceiverViewControllerModifyRemark:(WCPayTransToBankCardReceiver *)arg1 remark:(NSString *)arg2;
- (void)OnWCPaySelectReceiverViewControllerCancel;
- (void)OnWCPaySelectReceiverViewControllerDidSelectReceiver:(WCPayTransToBankCardReceiver *)arg1;
@end
