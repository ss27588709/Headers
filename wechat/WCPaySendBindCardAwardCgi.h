//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseTenPayCgi.h"

@class WCPaySendBindCardAwardCgiRequest;
@protocol WCPaySendBindCardAwardCgiDelegate;

@interface WCPaySendBindCardAwardCgi : WCPayBaseTenPayCgi
{
    WCPaySendBindCardAwardCgiRequest *_m_queryRequest;
    id <WCPaySendBindCardAwardCgiDelegate> _m_delegate;
}

@property(nonatomic) __weak id <WCPaySendBindCardAwardCgiDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) WCPaySendBindCardAwardCgiRequest *m_queryRequest; // @synthesize m_queryRequest=_m_queryRequest;
- (void).cxx_destruct;
- (void)didFailWithError:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
- (void)didGetTenPayResponse:(id)arg1;
- (void)failWithError:(id)arg1;
- (void)startRequest;
- (id)init;

@end
