//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface QQVideoRecordDurationLabel : UIView
{
    UILabel *_timeLabel;
    UIView *_recordAnimationView;
}

@property(retain, nonatomic) UIView *recordAnimationView; // @synthesize recordAnimationView=_recordAnimationView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
- (void).cxx_destruct;
- (void)stopRecordAnimation;
- (void)startRecordAnimation;
- (void)setDuration:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

