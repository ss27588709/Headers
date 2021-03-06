//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APFBaseTask.h"

#import "APBGyrometerDelegate-Protocol.h"

@class APBGyrometerService, NSString;
@protocol APFDeviceStatusDelegate;

@interface APFDeviceStatusParallelTask : APFBaseTask <APBGyrometerDelegate>
{
    _Bool _isRunning;
    id <APFDeviceStatusDelegate> _delegate;
    APBGyrometerService *_gyrometerDetector;
    double _minTheta;
    double _maxTheta;
    double _currentTheta;
}

@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(nonatomic) double currentTheta; // @synthesize currentTheta=_currentTheta;
@property(nonatomic) double maxTheta; // @synthesize maxTheta=_maxTheta;
@property(nonatomic) double minTheta; // @synthesize minTheta=_minTheta;
@property(retain, nonatomic) APBGyrometerService *gyrometerDetector; // @synthesize gyrometerDetector=_gyrometerDetector;
@property(nonatomic) __weak id <APFDeviceStatusDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isDeviceInMotion;
- (_Bool)isDeviceVertical;
- (void)onGyrometerDataUpdate:(double)arg1;
- (void)stopMonitor;
- (double)getCurrentTheta;
- (void)checkStatus;
- (void)startMonitor;
- (void)invokeWithPipeInfo:(id)arg1;
- (void)reset;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

