//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface KSTrustedDeviceItem : NSObject
{
    _Bool _currentDevice;
    NSString *_id;
    NSString *_deviceName;
    NSString *_deviceMod;
    NSString *_osVersion;
}

@property(nonatomic) _Bool currentDevice; // @synthesize currentDevice=_currentDevice;
@property(retain, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(retain, nonatomic) NSString *deviceMod; // @synthesize deviceMod=_deviceMod;
@property(retain, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(retain, nonatomic) NSString *id; // @synthesize id=_id;
- (void).cxx_destruct;

@end
