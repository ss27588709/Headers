//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MVBaseTableViewCell.h"

@class MVBorderedButton, MVLineView, MVNowPlayingFilmListCellExtendView, MVNowPlayingFilmListCellTagGroupView, MVPosterImageView, MVPreScheduleTagLabel, MVShowVersionLabel, MVStarWithRateView, NSMutableArray, UILabel, UIView;

@interface MVNowPlayingFilmListCell : MVBaseTableViewCell
{
    _Bool _isSpecial;
    MVPosterImageView *_posterImageView;
    UILabel *_filmNameLabel;
    UILabel *_directorLabel;
    UILabel *_starringLabel;
    MVBorderedButton *_buyButton;
    UILabel *_activityUnderBuyLabel;
    MVShowVersionLabel *_showVersionLabel;
    MVNowPlayingFilmListCellTagGroupView *_tagGroupView;
    MVStarWithRateView *_starWithRateView;
    UILabel *_onlineLabel;
    MVLineView *_bottomLine;
    UIView *_fakeBackgroundView;
    NSMutableArray *_extendViews;
    MVPreScheduleTagLabel *_preScheduleTagView;
    MVNowPlayingFilmListCellExtendView *_lastSelectExtendView;
}

@property(retain, nonatomic) MVNowPlayingFilmListCellExtendView *lastSelectExtendView; // @synthesize lastSelectExtendView=_lastSelectExtendView;
@property(retain, nonatomic) MVPreScheduleTagLabel *preScheduleTagView; // @synthesize preScheduleTagView=_preScheduleTagView;
@property(retain, nonatomic) NSMutableArray *extendViews; // @synthesize extendViews=_extendViews;
@property(retain, nonatomic) UIView *fakeBackgroundView; // @synthesize fakeBackgroundView=_fakeBackgroundView;
@property(retain, nonatomic) MVLineView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(nonatomic) _Bool isSpecial; // @synthesize isSpecial=_isSpecial;
@property(retain, nonatomic) UILabel *onlineLabel; // @synthesize onlineLabel=_onlineLabel;
@property(retain, nonatomic) MVStarWithRateView *starWithRateView; // @synthesize starWithRateView=_starWithRateView;
@property(retain, nonatomic) MVNowPlayingFilmListCellTagGroupView *tagGroupView; // @synthesize tagGroupView=_tagGroupView;
@property(retain, nonatomic) MVShowVersionLabel *showVersionLabel; // @synthesize showVersionLabel=_showVersionLabel;
@property(retain, nonatomic) UILabel *activityUnderBuyLabel; // @synthesize activityUnderBuyLabel=_activityUnderBuyLabel;
@property(retain, nonatomic) MVBorderedButton *buyButton; // @synthesize buyButton=_buyButton;
@property(retain, nonatomic) UILabel *starringLabel; // @synthesize starringLabel=_starringLabel;
@property(retain, nonatomic) UILabel *directorLabel; // @synthesize directorLabel=_directorLabel;
@property(retain, nonatomic) UILabel *filmNameLabel; // @synthesize filmNameLabel=_filmNameLabel;
@property(retain, nonatomic) MVPosterImageView *posterImageView; // @synthesize posterImageView=_posterImageView;
- (void).cxx_destruct;
- (void)addSpecialActivityView:(id)arg1 showModel:(id)arg2;
- (void)addActivityView:(id)arg1;
- (void)addTagGroupView:(long long)arg1;
- (void)addExtendView:(id)arg1;
- (void)prepareForReuse;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)reuseIdentifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
