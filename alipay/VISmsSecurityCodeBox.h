//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VISecurityCodeBox.h"

@interface VISmsSecurityCodeBox : VISecurityCodeBox
{
    double _interval;
    double _startTime;
}

@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) double interval; // @synthesize interval=_interval;
- (void)updateButtonTitleWithTimeRemain:(double)arg1;
- (void)onTimer:(id)arg1;
- (void)stopCountdown;
- (void)startCountdown;
- (id)initWithFrame:(struct CGRect)arg1 Interval:(double)arg2;
- (id)initWithOriginY:(double)arg1 Interval:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)dealloc;

@end
