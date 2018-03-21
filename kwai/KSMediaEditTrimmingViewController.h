//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "KSAdvanceEditTimeLineSliderLayoutDataSource-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class KSAdvanceEditFrameContainerViewController, KSAdvanceEditTimeLineSliderLayout, KSEThumbnailGenerator, KSMediaEditRuler, KSMediaEditTrimmingRevealViewController, KSPencilMediaProject, NSArray, NSString, UICollectionView, UIImageView, UIScrollView;

@interface KSMediaEditTrimmingViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, KSAdvanceEditTimeLineSliderLayoutDataSource>
{
    double _currentTime;
    CDUnknownBlockType _onTrim;
    KSAdvanceEditFrameContainerViewController *_frameContainerViewController;
    UIScrollView *_rulerScrollView;
    KSMediaEditRuler *_ruler;
    KSEThumbnailGenerator *_generator;
    double _preferredTotalWidth;
    double _edge;
    double _minThumbnailVisibleWidth;
    KSPencilMediaProject *_project;
    KSMediaEditTrimmingRevealViewController *_revealViewController;
    UICollectionView *_cutCollectionView;
    KSAdvanceEditTimeLineSliderLayout *_cutLayout;
    NSArray *_cutItems;
    double _widthPerSecond;
    UIImageView *_trackerView;
    double _revealStart;
    CDStruct_e83c9415 _revealRange;
}

@property(nonatomic) double revealStart; // @synthesize revealStart=_revealStart;
@property(retain, nonatomic) UIImageView *trackerView; // @synthesize trackerView=_trackerView;
@property(nonatomic) double widthPerSecond; // @synthesize widthPerSecond=_widthPerSecond;
@property(retain, nonatomic) NSArray *cutItems; // @synthesize cutItems=_cutItems;
@property(retain, nonatomic) KSAdvanceEditTimeLineSliderLayout *cutLayout; // @synthesize cutLayout=_cutLayout;
@property(retain, nonatomic) UICollectionView *cutCollectionView; // @synthesize cutCollectionView=_cutCollectionView;
@property(retain, nonatomic) KSMediaEditTrimmingRevealViewController *revealViewController; // @synthesize revealViewController=_revealViewController;
@property(retain, nonatomic) KSPencilMediaProject *project; // @synthesize project=_project;
@property(nonatomic) double minThumbnailVisibleWidth; // @synthesize minThumbnailVisibleWidth=_minThumbnailVisibleWidth;
@property(nonatomic) double edge; // @synthesize edge=_edge;
@property(nonatomic) double preferredTotalWidth; // @synthesize preferredTotalWidth=_preferredTotalWidth;
@property(retain, nonatomic) KSEThumbnailGenerator *generator; // @synthesize generator=_generator;
@property(retain, nonatomic) KSMediaEditRuler *ruler; // @synthesize ruler=_ruler;
@property(retain, nonatomic) UIScrollView *rulerScrollView; // @synthesize rulerScrollView=_rulerScrollView;
@property(retain, nonatomic) KSAdvanceEditFrameContainerViewController *frameContainerViewController; // @synthesize frameContainerViewController=_frameContainerViewController;
@property(copy, nonatomic) CDUnknownBlockType onTrim; // @synthesize onTrim=_onTrim;
@property(nonatomic) CDStruct_e83c9415 revealRange; // @synthesize revealRange=_revealRange;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
- (void).cxx_destruct;
- (id)_createAdaptersForItems:(id)arg1 withStyle:(id)arg2;
- (id)_styleForCutItems;
- (id)_createCutAdapters;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (_Bool)isItemAtIndexPathHighlighted:(id)arg1 inLayout:(id)arg2;
- (id)layoutItemForItemAtIndexPath:(id)arg1 inLayout:(id)arg2;
- (double)totalDurationOfTimeLineInLayout:(id)arg1;
- (void)reload;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithProject:(id)arg1 maxTrimmingDuration:(double)arg2 minThumbnailVisibleWidth:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
