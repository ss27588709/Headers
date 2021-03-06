//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CAAnimationDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class AWEFilterModel, NSArray, NSIndexPath, NSString, UICollectionView, UILabel, UIPanGestureRecognizer, UIView;
@protocol AWEStoryFilterViewControllerDelegate;

@interface AWEStoryFilterViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, CAAnimationDelegate>
{
    _Bool _isLiveMode;
    CDUnknownBlockType _dissmissBlock;
    AWEFilterModel *_selectedFilter;
    id <AWEStoryFilterViewControllerDelegate> _delegate;
    UICollectionView *_filterCollectionView;
    NSArray *_filters;
    UIView *_clearBackGroundView;
    UILabel *_filterNameLabel;
    long long _selectedRow;
    UIView *_containerView;
    UIPanGestureRecognizer *_panGes;
    UIView *_topView;
    long long _switchFilterDerection;
    NSIndexPath *_nextIndexPath;
}

@property(nonatomic) _Bool isLiveMode; // @synthesize isLiveMode=_isLiveMode;
@property(retain, nonatomic) NSIndexPath *nextIndexPath; // @synthesize nextIndexPath=_nextIndexPath;
@property(nonatomic) long long switchFilterDerection; // @synthesize switchFilterDerection=_switchFilterDerection;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) UIPanGestureRecognizer *panGes; // @synthesize panGes=_panGes;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) long long selectedRow; // @synthesize selectedRow=_selectedRow;
@property(retain, nonatomic) UILabel *filterNameLabel; // @synthesize filterNameLabel=_filterNameLabel;
@property(retain, nonatomic) UIView *clearBackGroundView; // @synthesize clearBackGroundView=_clearBackGroundView;
@property(copy, nonatomic) NSArray *filters; // @synthesize filters=_filters;
@property(retain, nonatomic) UICollectionView *filterCollectionView; // @synthesize filterCollectionView=_filterCollectionView;
@property(nonatomic) __weak id <AWEStoryFilterViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AWEFilterModel *selectedFilter; // @synthesize selectedFilter=_selectedFilter;
@property(copy, nonatomic) CDUnknownBlockType dissmissBlock; // @synthesize dissmissBlock=_dissmissBlock;
- (void).cxx_destruct;
- (_Bool)shouldAutorotate;
- (void)p_moveToOffset:(struct CGPoint)arg1;
- (void)p_showOnView:(id)arg1 fromOffset:(struct CGPoint)arg2 animated:(_Bool)arg3 duration:(double)arg4;
- (void)p_dismissWithAnimated:(_Bool)arg1 duration:(double)arg2;
- (void)p_dismiss;
- (void)p_showOnViewController:(id)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (void)showOnViewController:(id)arg1;
- (void)p_onClearBackgroundPress:(id)arg1;
- (void)reset;
- (void)panSwitchFilter:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)restoreSelectFilter:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)_hasSelectItemAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)reloadData;
- (void)dealloc;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

