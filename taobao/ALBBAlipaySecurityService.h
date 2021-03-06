//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ALBBLocationManagerDelegate-Protocol.h"

@class ALBBLocationManager, NSString;

@interface ALBBAlipaySecurityService : NSObject <ALBBLocationManagerDelegate>
{
    ALBBLocationManager *_locationManager;
}

+ (void)reportDeviceLocationService;
+ (void)initASSSecureSdkToken;
+ (id)sharedInstance;
@property(retain, nonatomic) ALBBLocationManager *locationManager; // @synthesize locationManager=_locationManager;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2;
- (void)reportLocation:(id)arg1;
- (id)getHost;
- (void)reportOnMainThread;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

