//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTFoldableLayoutProtocol-Protocol.h"

@class NSArray, NSLayoutConstraint, NSString, UIColor, UIView, UIViewController;
@protocol TTFoldableLayoutDelegate;

@interface TTFoldableLayout : NSObject <TTFoldableLayoutProtocol>
{
    _Bool _lockHeaderAutoFolded;
    UIView *_headerView;
    UIView *_tabView;
    UIViewController *_pageViewController;
    double _minHeaderHeight;
    double _maxHeaderHeight;
    UIViewController *_headerViewController;
    double _tabViewHeight;
    UIColor *_bottomViewColor;
    id <TTFoldableLayoutDelegate> _layoutDelegate;
    NSArray *_items;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomHeightConstraint;
    UIViewController *_targetViewController;
    struct UIEdgeInsets _tabViewOffset;
}

@property(nonatomic) __weak UIViewController *targetViewController; // @synthesize targetViewController=_targetViewController;
@property(retain, nonatomic) NSLayoutConstraint *bottomHeightConstraint; // @synthesize bottomHeightConstraint=_bottomHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(nonatomic) _Bool lockHeaderAutoFolded; // @synthesize lockHeaderAutoFolded=_lockHeaderAutoFolded;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <TTFoldableLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
@property(retain, nonatomic) UIColor *bottomViewColor; // @synthesize bottomViewColor=_bottomViewColor;
@property(nonatomic) double tabViewHeight; // @synthesize tabViewHeight=_tabViewHeight;
@property(nonatomic) struct UIEdgeInsets tabViewOffset; // @synthesize tabViewOffset=_tabViewOffset;
@property(retain, nonatomic) UIViewController *headerViewController; // @synthesize headerViewController=_headerViewController;
@property(nonatomic) double maxHeaderHeight; // @synthesize maxHeaderHeight=_maxHeaderHeight;
@property(nonatomic) double minHeaderHeight; // @synthesize minHeaderHeight=_minHeaderHeight;
@property(retain, nonatomic) UIViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
@property(retain, nonatomic) UIView *tabView; // @synthesize tabView=_tabView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)beginAnimationWithScrollView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)layoutDidAddToTargetViewController:(id)arg1;
- (void)layoutWillAddToTargetViewController:(id)arg1;
- (id)currentScrollView;
- (void)resetLayoutToMaxHeader:(_Bool)arg1;
- (void)resetLayoutToMinHeader:(_Bool)arg1;
- (void)resetLayoutSubItems;
- (id)initWithItems:(id)arg1 delegate:(id)arg2;
- (id)initWithItems:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
