//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/CAAnimationDelegate-Protocol.h>

@class CAGradientLayer, CAShapeLayer, NSArray, NSString, UIColor, UIImageView;

@interface ARCircle : UIView <CAAnimationDelegate>
{
    CAShapeLayer *_progressLayer;
    CAGradientLayer *_gradientLayer;
    NSArray *_startAngles;
    NSArray *_endAngles;
    UIColor *_firstColor;
    UIColor *_secondColor;
    double _showLightDuration;
    UIImageView *_lightImage;
    _Bool _showLight;
    double _lineWidth;
}

@property(nonatomic) _Bool showLight; // @synthesize showLight=_showLight;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
- (void).cxx_destruct;
- (void)setLineColor:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)showLightLayer:(double)arg1 delay:(double)arg2;
- (struct CGPoint)getEndPoint:(double)arg1 angle:(double)arg2 radius:(double)arg3;
- (void)buildLayout;
- (id)initWithFrame:(struct CGRect)arg1 lineWidth:(float)arg2 startAngles:(id)arg3 endAngles:(id)arg4 firstColor:(id)arg5 secondColor:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

