//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBGuideBaseCollectionViewCell.h"

@class UIImageView, UILabel, UIView;

@interface TBGuideBaiKeCollectionViewCell : TBGuideBaseCollectionViewCell
{
    UIView *_topicContentView;
    UILabel *_hotLabel;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIImageView *_firstSubImageView;
    UIImageView *_secondSubImageView;
    UIImageView *_thirdSubImageView;
    UIView *_hotBackGroundView;
}

+ (struct CGSize)contentSizeWithRowType:(int)arg1;
+ (struct CGSize)contentSize;
@property(retain, nonatomic) UIView *hotBackGroundView; // @synthesize hotBackGroundView=_hotBackGroundView;
@property(retain, nonatomic) UIImageView *thirdSubImageView; // @synthesize thirdSubImageView=_thirdSubImageView;
@property(retain, nonatomic) UIImageView *secondSubImageView; // @synthesize secondSubImageView=_secondSubImageView;
@property(retain, nonatomic) UIImageView *firstSubImageView; // @synthesize firstSubImageView=_firstSubImageView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *hotLabel; // @synthesize hotLabel=_hotLabel;
@property(retain, nonatomic) UIView *topicContentView; // @synthesize topicContentView=_topicContentView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (void)updateCutLineFrame;
- (void)setCutlineType:(long long)arg1;
- (void)setRowType:(int)arg1;
- (void)setItem:(id)arg1;
- (void)clickMainButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

