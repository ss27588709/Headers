//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

@class SSThemedLabel, TTRecommendUserCollectionView;

@interface TTRecommendUserCollectionViewWrapper : SSThemedView
{
    SSThemedLabel *_titleLabel;
    TTRecommendUserCollectionView *_collectionView;
}

@property(retain, nonatomic) TTRecommendUserCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) SSThemedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 isWeitoutiao:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
