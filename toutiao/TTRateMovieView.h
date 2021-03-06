//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSString, SSThemedLabel;

@interface TTRateMovieView : SSThemedView <UIGestureRecognizerDelegate>
{
    double _rate;
    NSArray *_rateStars;
    SSThemedLabel *_rateIntegerLabel;
    SSThemedLabel *_rateDecimalLabel;
    SSThemedLabel *_describeLabel;
}

@property(retain, nonatomic) SSThemedLabel *describeLabel; // @synthesize describeLabel=_describeLabel;
@property(retain, nonatomic) SSThemedLabel *rateDecimalLabel; // @synthesize rateDecimalLabel=_rateDecimalLabel;
@property(retain, nonatomic) SSThemedLabel *rateIntegerLabel; // @synthesize rateIntegerLabel=_rateIntegerLabel;
@property(retain, nonatomic) NSArray *rateStars; // @synthesize rateStars=_rateStars;
@property(nonatomic) double rate; // @synthesize rate=_rate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)currentLocationX:(double)arg1;
- (void)tap:(id)arg1;
- (void)pan:(id)arg1;
- (void)createGesture;
- (void)createComponent;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

