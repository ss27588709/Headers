//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliDetailComponent.h"

@class AliDetailSKUBannerModel, UILabel, UITapGestureRecognizer;

@interface AliDetailSKUComponent : AliDetailComponent
{
    _Bool _hiddenRightArrow;
    UILabel *_titleLabel;
    UILabel *_tipLabel;
    UILabel *_sizeChartLabel;
    UITapGestureRecognizer *_tap;
    AliDetailSKUBannerModel *_skuModel;
}

+ (double)componentHeightForObj:(id)arg1 preferredWidth:(double)arg2;
@property(nonatomic) __weak AliDetailSKUBannerModel *skuModel; // @synthesize skuModel=_skuModel;
@property(retain, nonatomic) UITapGestureRecognizer *tap; // @synthesize tap=_tap;
@property(retain, nonatomic) UILabel *sizeChartLabel; // @synthesize sizeChartLabel=_sizeChartLabel;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool hiddenRightArrow; // @synthesize hiddenRightArrow=_hiddenRightArrow;
- (void).cxx_destruct;
- (void)popSKUBtnClick:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setObject:(id)arg1;

@end

