//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, WBMLStrokeButton, WBMLVideoGradientSubControl;

@interface WBMLQABaseAlertView : UIView
{
    CDUnknownBlockType _action;
    UIView *_backgroundView;
    UILabel *_titleLabel;
    WBMLStrokeButton *_strokeButton;
    WBMLVideoGradientSubControl *_gradientButton;
}

@property(retain, nonatomic) WBMLVideoGradientSubControl *gradientButton; // @synthesize gradientButton=_gradientButton;
@property(retain, nonatomic) WBMLStrokeButton *strokeButton; // @synthesize strokeButton=_strokeButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
- (void).cxx_destruct;
- (void)actionWithSender:(id)arg1;
- (id)setLineSpaceAttributedStringWithText:(id)arg1;
- (void)setStrokLabelText:(id)arg1 gradientText:(id)arg2;
- (void)removeAlertView;
- (void)showAlertviewInView:(id)arg1;
- (void)layoutSubviews;
- (void)addTheSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

