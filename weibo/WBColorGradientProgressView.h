//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface WBColorGradientProgressView : UIView
{
    float _progress;
    UILabel *_leftLabel;
    UILabel *_rightLabel;
    float _bufferingProgress;
}

@property(nonatomic) float bufferingProgress; // @synthesize bufferingProgress=_bufferingProgress;
@property(readonly, nonatomic) UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(readonly, nonatomic) UILabel *leftLabel; // @synthesize leftLabel=_leftLabel;
@property(nonatomic) float progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

