//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IContentUpdateDelegate-Protocol.h>

@class NSString;

@interface QQPreParseOfDNS : NSObject <IContentUpdateDelegate>
{
    _Bool dnsPreParseState;
    _Bool _dnsPreParseState;
}

+ (id)GetInstance;
@property(nonatomic) _Bool dnsPreParseState; // @synthesize dnsPreParseState=_dnsPreParseState;
- (void)downloadCommonConfigJsonWithBlock:(CDUnknownBlockType)arg1;
- (void)requestContentUpdate;
- (void)requestContentUpdate12;
- (void)onRequestContentUpdateSuccess;
- (void)preParseDNSOne:(id)arg1;
- (void)preParseDNS:(int)arg1;
- (_Bool)isDnsPreParseTime:(int)arg1;
- (long long)getDnsPreParseLastTime:(int)arg1;
- (id)initWithDNSPreParseState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

