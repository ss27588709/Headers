//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink;
@protocol EmitterLineDelegate;

@interface EmitterLine : UIView
{
    _Bool _paused;
    id <EmitterLineDelegate> _delegate;
    CADisplayLink *_displayLink;
    double _ratio;
    double _innerRadius;
    double _outerRadius;
    double _lineAlpha;
}

@property(nonatomic) double lineAlpha; // @synthesize lineAlpha=_lineAlpha;
@property(nonatomic) double outerRadius; // @synthesize outerRadius=_outerRadius;
@property(nonatomic) double innerRadius; // @synthesize innerRadius=_innerRadius;
@property(nonatomic) double ratio; // @synthesize ratio=_ratio;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic) __weak id <EmitterLineDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)update:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

