//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ExploreCellViewBase.h"

@class ExploreOrderedData, NSDate, ResurfaceData, SSThemedImageView, SSThemedLabel, SSThemedView, TTAlphaThemedButton;

@interface TTResurfaceCellView : ExploreCellViewBase
{
    ExploreOrderedData *_orderedData;
    SSThemedImageView *_imageView;
    SSThemedLabel *_describeLabel;
    TTAlphaThemedButton *_goButton;
    TTAlphaThemedButton *_unInterestedButton;
    NSDate *_showTime;
    SSThemedView *_topSeparateView;
    SSThemedView *_bottomSeparateView;
    ResurfaceData *_resurfaceData;
}

+ (double)cellViewHeight;
+ (double)imageViewHeight;
+ (double)heightForData:(id)arg1 cellWidth:(double)arg2 listType:(unsigned long long)arg3;
@property(retain, nonatomic) ResurfaceData *resurfaceData; // @synthesize resurfaceData=_resurfaceData;
@property(retain, nonatomic) SSThemedView *bottomSeparateView; // @synthesize bottomSeparateView=_bottomSeparateView;
@property(retain, nonatomic) SSThemedView *topSeparateView; // @synthesize topSeparateView=_topSeparateView;
@property(retain, nonatomic) NSDate *showTime; // @synthesize showTime=_showTime;
@property(retain, nonatomic) TTAlphaThemedButton *unInterestedButton; // @synthesize unInterestedButton=_unInterestedButton;
@property(retain, nonatomic) TTAlphaThemedButton *goButton; // @synthesize goButton=_goButton;
@property(retain, nonatomic) SSThemedLabel *describeLabel; // @synthesize describeLabel=_describeLabel;
@property(retain, nonatomic) SSThemedImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) ExploreOrderedData *orderedData; // @synthesize orderedData=_orderedData;
- (void).cxx_destruct;
- (void)exploreDislikeViewOKBtnClicked:(id)arg1;
- (void)unInterestedAction:(id)arg1;
- (void)goButtonClicked;
- (void)didSelectWithContext:(id)arg1;
- (void)willAppear;
- (void)refreshWithData:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
