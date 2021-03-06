//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface NewYearEveCenterSportView : UIView
{
    UILabel *_pullDownTipLabel;
    UIImageView *_downArrowImageView;
    UIImageView *_sportLogoImageView;
    UILabel *_topTextLabel;
    UILabel *_centerTextLabel;
    UILabel *_bottomTextLabel;
}

@property(retain, nonatomic) UILabel *bottomTextLabel; // @synthesize bottomTextLabel=_bottomTextLabel;
@property(retain, nonatomic) UILabel *centerTextLabel; // @synthesize centerTextLabel=_centerTextLabel;
@property(retain, nonatomic) UILabel *topTextLabel; // @synthesize topTextLabel=_topTextLabel;
@property(retain, nonatomic) UIImageView *sportLogoImageView; // @synthesize sportLogoImageView=_sportLogoImageView;
@property(retain, nonatomic) UIImageView *downArrowImageView; // @synthesize downArrowImageView=_downArrowImageView;
@property(retain, nonatomic) UILabel *pullDownTipLabel; // @synthesize pullDownTipLabel=_pullDownTipLabel;
- (void)constructSportUI;
- (void)constructPullDownTip;
- (void)showWithType:(unsigned long long)arg1;
- (id)init;
- (void)dealloc;

@end

