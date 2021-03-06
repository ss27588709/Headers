//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSString, UICollectionView, UIPageControl;
@protocol TTUGCEmojiInputViewDelegate;

@interface TTUGCEmojiInputView : SSThemedView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    NSArray *_textAttachments;
    id <TTUGCEmojiInputViewDelegate> _delegate;
    NSString *_source;
    SSThemedView *_contentView;
    UICollectionView *_collectionView;
    UIPageControl *_pageControl;
    SSThemedView *_groupView;
}

@property(retain, nonatomic) SSThemedView *groupView; // @synthesize groupView=_groupView;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) SSThemedView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(nonatomic) __weak id <TTUGCEmojiInputViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *textAttachments; // @synthesize textAttachments=_textAttachments;
- (void).cxx_destruct;
- (id)flowLayout;
- (double)itemSpacing;
- (double)lineSpacing;
- (double)emojiSize;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)themeChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

