//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@interface AWEIMScaleTapGesture : UIGestureRecognizer
{
    double _moveCancelDistance;
    struct CGPoint _sourcePoint;
}

@property(nonatomic) struct CGPoint sourcePoint; // @synthesize sourcePoint=_sourcePoint;
@property(nonatomic) double moveCancelDistance; // @synthesize moveCancelDistance=_moveCancelDistance;
- (void)_executeReverseAnimation;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

