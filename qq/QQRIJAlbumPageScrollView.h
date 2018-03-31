//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import <QQMainProject/UIScrollViewDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol QQRIJAlbumPageScrollViewDataSource, QQRIJAlbumPageScrollViewDelegate;

@interface QQRIJAlbumPageScrollView : UIScrollView <UIScrollViewDelegate>
{
    _Bool _isScrolling;
    id <QQRIJAlbumPageScrollViewDataSource> _pageDataSource;
    id <QQRIJAlbumPageScrollViewDelegate> _pageDelegate;
    long long _currentIndex;
    double _itemSpace;
    NSMutableDictionary *_reusableItemViews;
    NSMutableArray *_visibleItemViews;
}

@property(retain, nonatomic) NSMutableArray *visibleItemViews; // @synthesize visibleItemViews=_visibleItemViews;
@property(retain, nonatomic) NSMutableDictionary *reusableItemViews; // @synthesize reusableItemViews=_reusableItemViews;
@property(nonatomic) _Bool isScrolling; // @synthesize isScrolling=_isScrolling;
@property(nonatomic) double itemSpace; // @synthesize itemSpace=_itemSpace;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) __weak id <QQRIJAlbumPageScrollViewDelegate> pageDelegate; // @synthesize pageDelegate=_pageDelegate;
@property(nonatomic) __weak id <QQRIJAlbumPageScrollViewDataSource> pageDataSource; // @synthesize pageDataSource=_pageDataSource;
- (void).cxx_destruct;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollToRowAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)scrollToRowAtIndex:(long long)arg1;
- (struct CGRect)rectForContentViewIndex:(long long)arg1;
- (id)dequeueReusableItemWithIdentifier:(id)arg1 index:(long long)arg2;
- (void)enqueueReusableItemView:(id)arg1;
- (void)updateReusableItemViews;
- (id)visibleCells;
- (void)reloadItem:(long long)arg1;
- (void)configItemViews;
- (id)pageScrollViewItemViewAtIndex:(long long)arg1;
- (void)updateVisibleCells;
- (void)updateSelfContentSize;
- (void)reloadData;
- (long long)numberOfItems;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
