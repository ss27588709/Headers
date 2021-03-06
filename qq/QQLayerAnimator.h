//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CADisplayLink, CALayer, NSArray;
@protocol QQLayerAnimatorDelegate;

@interface QQLayerAnimator : NSObject
{
    double _frameInterval;
    NSArray *_images;
    float _repeatCount;
    CALayer *_layer;
    id <QQLayerAnimatorDelegate> _delegate;
    int _xo;
    CADisplayLink *_timer;
    long long _totalStepIndex;
    double _lastStepTime;
}

- (void).cxx_destruct;
- (void)stopAnimating;
- (void)beginAnimatingForRunLoopModes:(id)arg1;
- (void)step:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(nonatomic) __weak id <QQLayerAnimatorDelegate> delegate; // @dynamic delegate;
@property(nonatomic) double frameInterval; // @dynamic frameInterval;
@property(retain, nonatomic) NSArray *images; // @dynamic images;
@property(retain, nonatomic) CALayer *layer; // @dynamic layer;
@property(nonatomic) float repeatCount; // @dynamic repeatCount;

@end

