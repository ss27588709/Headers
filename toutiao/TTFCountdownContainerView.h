//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TTFQuizShowLiveRoomViewModel, UILabel;

@interface TTFCountdownContainerView : UIView
{
    TTFQuizShowLiveRoomViewModel *_viewModel;
    UILabel *_countdownDescribeLabel;
    UILabel *_timeMinuteLabel;
    UILabel *_timeColonLabel;
    UILabel *_timeSecondLabel;
    UILabel *_beginningLabel;
}

@property(retain, nonatomic) UILabel *beginningLabel; // @synthesize beginningLabel=_beginningLabel;
@property(retain, nonatomic) UILabel *timeSecondLabel; // @synthesize timeSecondLabel=_timeSecondLabel;
@property(retain, nonatomic) UILabel *timeColonLabel; // @synthesize timeColonLabel=_timeColonLabel;
@property(retain, nonatomic) UILabel *timeMinuteLabel; // @synthesize timeMinuteLabel=_timeMinuteLabel;
@property(retain, nonatomic) UILabel *countdownDescribeLabel; // @synthesize countdownDescribeLabel=_countdownDescribeLabel;
@property(retain, nonatomic) TTFQuizShowLiveRoomViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)init;

@end

