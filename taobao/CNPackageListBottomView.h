//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CNNibLoadView.h"

@class UIButton, UILabel, UIView;

@interface CNPackageListBottomView : CNNibLoadView
{
    UIButton *_backButton;
    UIButton *_nextButton;
    UIButton *_allButton;
    UILabel *_textLabel;
}

@property(nonatomic) __weak UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) __weak UIButton *allButton; // @synthesize allButton=_allButton;
@property(nonatomic) __weak UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(nonatomic) __weak UIButton *backButton; // @synthesize backButton=_backButton;
- (void).cxx_destruct;
- (void)showCurrentText:(id)arg1;
- (void)showBackButton:(_Bool)arg1 showNextButton:(_Bool)arg2;

// Remaining properties
@property(retain, nonatomic) UIView *view; // @dynamic view;

@end

