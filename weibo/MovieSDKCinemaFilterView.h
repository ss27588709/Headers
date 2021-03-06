//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MovieSDKCinemaFilterOptionsViewDelegate-Protocol.h"

@class CALayer, MovieSDKCinemaFilterEmptyView, NSMutableArray, NSString, UIButton, UIImageView, UIScrollView;
@protocol MovieSDKCinemaFilterViewDataSource, MovieSDKCinemaFilterViewDelegate;

@interface MovieSDKCinemaFilterView : UIView <MovieSDKCinemaFilterOptionsViewDelegate>
{
    _Bool _beingShowed;
    _Bool _responding;
    id <MovieSDKCinemaFilterViewDelegate> _delegate;
    id <MovieSDKCinemaFilterViewDataSource> _dataSource;
    double _animationInterval;
    NSMutableArray *_optionsViews;
    UIScrollView *_groupView;
    UIImageView *_shadowImageView;
    CALayer *_splitLine;
    UIButton *_cancelBtn;
    UIButton *_okBtn;
    MovieSDKCinemaFilterEmptyView *_emptyView;
}

+ (id)cinemaFilterView;
@property(retain, nonatomic) MovieSDKCinemaFilterEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(nonatomic) _Bool responding; // @synthesize responding=_responding;
@property(retain, nonatomic) UIButton *okBtn; // @synthesize okBtn=_okBtn;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) CALayer *splitLine; // @synthesize splitLine=_splitLine;
@property(retain, nonatomic) UIImageView *shadowImageView; // @synthesize shadowImageView=_shadowImageView;
@property(retain, nonatomic) UIScrollView *groupView; // @synthesize groupView=_groupView;
@property(retain, nonatomic) NSMutableArray *optionsViews; // @synthesize optionsViews=_optionsViews;
@property(nonatomic) _Bool beingShowed; // @synthesize beingShowed=_beingShowed;
@property(nonatomic) double animationInterval; // @synthesize animationInterval=_animationInterval;
@property(nonatomic) __weak id <MovieSDKCinemaFilterViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <MovieSDKCinemaFilterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cinemaFilterOptionsView:(id)arg1 userDidChooseOptionItem:(id)arg2;
- (void)cinemaFilterOptionsViewSizeDidChange:(id)arg1 animationInterval:(double)arg2;
- (void)layoutOptionsSubViews;
- (void)resetScrollViewContentSize;
- (void)clickOK:(id)arg1;
- (void)clickCancel:(id)arg1;
@property(readonly, nonatomic) _Bool hasSelectedOption;
- (void)layoutSubviews;
- (id)selectedOptionItemForRowAtIndex:(unsigned long long)arg1;
- (void)clearAllSelectedOption;
- (void)reloadData;
- (void)dismiss:(CDUnknownBlockType)arg1;
- (void)showInView:(id)arg1 rect:(struct CGRect)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

