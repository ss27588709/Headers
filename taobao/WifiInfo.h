//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSString;

@interface WifiInfo : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasWifiMac;
    _Bool _hasSsid;
    _Bool _hasRssi;
    NSString *_wifiMac;
    NSString *_ssid;
    double _rssi;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic) double rssi; // @synthesize rssi=_rssi;
@property(retain, nonatomic) NSString *ssid; // @synthesize ssid=_ssid;
@property(retain, nonatomic) NSString *wifiMac; // @synthesize wifiMac=_wifiMac;
@property(readonly) _Bool hasRssi; // @synthesize hasRssi=_hasRssi;
@property(readonly) _Bool hasSsid; // @synthesize hasSsid=_hasSsid;
@property(readonly) _Bool hasWifiMac; // @synthesize hasWifiMac=_hasWifiMac;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
