//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface AliDetailMACColorSelectBottomView : UIView
{
    _Bool _openGradient;
    CDUnknownBlockType _submitBlock;
    UIView *_iconView;
    UILabel *_summaryLabel;
    UIButton *_submitButton;
}

@property(retain, nonatomic) UIButton *submitButton; // @synthesize submitButton=_submitButton;
@property(retain, nonatomic) UILabel *summaryLabel; // @synthesize summaryLabel=_summaryLabel;
@property(retain, nonatomic) UIView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) _Bool openGradient; // @synthesize openGradient=_openGradient;
@property(copy, nonatomic) CDUnknownBlockType submitBlock; // @synthesize submitBlock=_submitBlock;
- (void).cxx_destruct;
- (void)submitAction;
- (void)layoutSubviews;
- (void)bindModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
