//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class CALayer, NSArray, NSMutableArray, NSString, UIButton, UIImageView, UIScrollView, WBSlideGradientColorView;
@protocol WBFreshNaviBarViewDelegate;

@interface WBFreshNaviBarView : UIView <UIScrollViewDelegate>
{
    _Bool _isNavigateMode;
    _Bool _bounces;
    _Bool _needScroll;
    _Bool _isFirstLoaded;
    NSMutableArray *_channelButtons;
    NSArray *_channelModels;
    id <WBFreshNaviBarViewDelegate> _delegate;
    long long _selectedIndex;
    long long _willSelectIndex;
    UIScrollView *_scrollPannel;
    WBSlideGradientColorView *_slider;
    UIButton *_currentClickedButton;
    UIImageView *_backgroundView;
    NSArray *_sliderColorArray;
    unsigned long long _defaultIndex;
    CALayer *_splitLineLayer;
    UIView *_sepBackgroundView;
    double _slideBarOutsideSpace;
    struct UIEdgeInsets _scrollContentInsets;
}

+ (id)segmentChannelsViewWithFrame:(struct CGRect)arg1;
@property(nonatomic) double slideBarOutsideSpace; // @synthesize slideBarOutsideSpace=_slideBarOutsideSpace;
@property(retain, nonatomic) UIView *sepBackgroundView; // @synthesize sepBackgroundView=_sepBackgroundView;
@property(retain, nonatomic) CALayer *splitLineLayer; // @synthesize splitLineLayer=_splitLineLayer;
@property(nonatomic) unsigned long long defaultIndex; // @synthesize defaultIndex=_defaultIndex;
@property(retain, nonatomic) NSArray *sliderColorArray; // @synthesize sliderColorArray=_sliderColorArray;
@property(nonatomic) _Bool isFirstLoaded; // @synthesize isFirstLoaded=_isFirstLoaded;
@property(nonatomic) _Bool needScroll; // @synthesize needScroll=_needScroll;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak UIButton *currentClickedButton; // @synthesize currentClickedButton=_currentClickedButton;
@property(retain, nonatomic) WBSlideGradientColorView *slider; // @synthesize slider=_slider;
@property(retain, nonatomic) UIScrollView *scrollPannel; // @synthesize scrollPannel=_scrollPannel;
@property(nonatomic) _Bool isNavigateMode; // @synthesize isNavigateMode=_isNavigateMode;
@property(nonatomic) struct UIEdgeInsets scrollContentInsets; // @synthesize scrollContentInsets=_scrollContentInsets;
@property(nonatomic) long long willSelectIndex; // @synthesize willSelectIndex=_willSelectIndex;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) __weak id <WBFreshNaviBarViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *channelModels; // @synthesize channelModels=_channelModels;
@property(retain, nonatomic) NSMutableArray *channelButtons; // @synthesize channelButtons=_channelButtons;
@property(nonatomic) _Bool bounces; // @synthesize bounces=_bounces;
- (void).cxx_destruct;
- (void)movetoIndex:(long long)arg1 forced:(_Bool)arg2;
- (_Bool)blockPanNavigationGesture:(id)arg1 withTouch:(id)arg2;
- (void)selectChannelAtIndex:(long long)arg1;
- (void)scrollCurrentButtonToCenter:(id)arg1;
- (void)moveSlideBarToIndex:(unsigned long long)arg1 scrollOffset:(double)arg2 animation:(_Bool)arg3;
- (void)moveSlideBarToIndex:(unsigned long long)arg1 byOffset:(double)arg2;
- (void)moveSliderToIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)channelButtonClick:(id)arg1;
- (void)setSelectedIndex:(long long)arg1 animated:(_Bool)arg2 forced:(_Bool)arg3;
- (void)setupChannelButtons:(unsigned long long)arg1;
- (void)setChannelModels:(id)arg1 defaultIndex:(unsigned long long)arg2;
- (void)layoutSubviews;
- (void)relayoutBarItems;
- (void)resetItemPositonsWithOffset:(double)arg1 itemSpace:(double)arg2 needScroll:(_Bool)arg3;
- (_Bool)caculateOffset:(double *)arg1 itemSpace:(double *)arg2;
- (void)resetButtonsChannelModels:(id)arg1;
- (double)barItemTitleFontSize;
- (id)getColorFromHexString:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

