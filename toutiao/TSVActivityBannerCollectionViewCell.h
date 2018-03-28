//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class ExploreOrderedData, TSVActivityBannerCollectionViewCellViewModel, TSVAnimatedImageView;

@interface TSVActivityBannerCollectionViewCell : UICollectionViewCell
{
    TSVActivityBannerCollectionViewCellViewModel *_viewModel;
    ExploreOrderedData *_cellData;
    TSVAnimatedImageView *_coverImageView;
}

@property(retain, nonatomic) TSVAnimatedImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) ExploreOrderedData *cellData; // @synthesize cellData=_cellData;
@property(retain, nonatomic) TSVActivityBannerCollectionViewCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)bindWithViewModel;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
