//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSIndexPath, NSString, TBSNSTableViewButtonsView, UIPanGestureRecognizer, UITableView, UIView;
@protocol TBSNSTableViewDelegate;

@interface TBSNSTableViewCell : UITableViewCell <UIGestureRecognizerDelegate>
{
    id <TBSNSTableViewDelegate> _delegate;
    UITableView *_relatedTableView;
    UIView *_panView;
    UIPanGestureRecognizer *_panGestureRecognizer;
    long long _cellState;
    TBSNSTableViewButtonsView *_leftUtilityButtonsView;
    TBSNSTableViewButtonsView *_rightUtilityButtonsView;
    long long _prevState;
    UIPanGestureRecognizer *_tableViewPanGestureRecognizer;
}

@property(retain, nonatomic) UIPanGestureRecognizer *tableViewPanGestureRecognizer; // @synthesize tableViewPanGestureRecognizer=_tableViewPanGestureRecognizer;
@property(nonatomic) long long prevState; // @synthesize prevState=_prevState;
@property(retain, nonatomic) TBSNSTableViewButtonsView *rightUtilityButtonsView; // @synthesize rightUtilityButtonsView=_rightUtilityButtonsView;
@property(retain, nonatomic) TBSNSTableViewButtonsView *leftUtilityButtonsView; // @synthesize leftUtilityButtonsView=_leftUtilityButtonsView;
@property(nonatomic) long long cellState; // @synthesize cellState=_cellState;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) UIView *panView; // @synthesize panView=_panView;
@property(nonatomic) __weak UITableView *relatedTableView; // @synthesize relatedTableView=_relatedTableView;
@property(nonatomic) __weak id <TBSNSTableViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)changeCellState:(long long)arg1 animated:(_Bool)arg2;
- (void)hideUtilityButtonsWithAnimated:(_Bool)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)prepareForReuse;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) NSIndexPath *indexPath;
- (void)didMoveToSuperview;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)utilityButtonsForState:(long long)arg1;
- (void)didChangeUtilityButtonsToState:(long long)arg1 fromState:(long long)arg2 animationFinish:(_Bool)arg3;
- (void)willChangeUtilityButtonsToState:(long long)arg1 fromState:(long long)arg2;
- (void)updateCellState:(long long)arg1 completed:(_Bool)arg2;
- (_Bool)shouldChangeUtilityButtonsToState:(long long)arg1 fromState:(long long)arg2;
- (void)didClickUtilityButton:(id)arg1;
- (void)movePanViewToFrame:(struct CGRect)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)movePanViewToFrame:(struct CGRect)arg1;
- (void)panViewAction:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (double)maxUtilityButtonsViewWidthForState:(long long)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
- (void)removeOldTableViewPanObserver;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

