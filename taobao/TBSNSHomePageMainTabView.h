//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSMutableDictionary, TBSNSSegmentView, UIViewController;
@protocol TBSNSHomePageMainTabDelegate;

@interface TBSNSHomePageMainTabView : UIView
{
    _Bool _is2thFloorAnimation;
    _Bool _isDiscover;
    float _tabbarExpandCursor;
    NSMutableArray *_items;
    NSMutableDictionary *_tabViews;
    TBSNSSegmentView *_segmentView;
    long long _mainTabIndex;
    long long _curTabIndex;
    UIViewController *_vc;
    id <TBSNSHomePageMainTabDelegate> _delegate;
    struct CGPoint _oldListPos;
}

@property(nonatomic) __weak id <TBSNSHomePageMainTabDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *vc; // @synthesize vc=_vc;
@property(nonatomic) _Bool isDiscover; // @synthesize isDiscover=_isDiscover;
@property(nonatomic) _Bool is2thFloorAnimation; // @synthesize is2thFloorAnimation=_is2thFloorAnimation;
@property(nonatomic) float tabbarExpandCursor; // @synthesize tabbarExpandCursor=_tabbarExpandCursor;
@property(nonatomic) struct CGPoint oldListPos; // @synthesize oldListPos=_oldListPos;
@property(nonatomic) long long curTabIndex; // @synthesize curTabIndex=_curTabIndex;
@property(nonatomic) long long mainTabIndex; // @synthesize mainTabIndex=_mainTabIndex;
@property(retain, nonatomic) TBSNSSegmentView *segmentView; // @synthesize segmentView=_segmentView;
@property(retain, nonatomic) NSMutableDictionary *tabViews; // @synthesize tabViews=_tabViews;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)onMemoryWarning;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)onListScroll:(long long)arg1 contentOffset:(struct CGPoint)arg2;
- (void)onTabHide;
- (void)onTabShow;
- (_Bool)isJumpEnable:(long long)arg1;
- (void)setCurrentTabById:(long long)arg1;
- (id)curTab;
- (void)onChangeTab:(long long)arg1;
- (void)changeTab:(long long)arg1;
- (void)removeAllTabsExceptCurrent:(_Bool)arg1;
- (void)clear;
- (void)setTabs:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withVC:(id)arg2;

@end

