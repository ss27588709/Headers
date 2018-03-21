//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APTableViewBaseCell.h"

@class UIImageView, UILabel;

@interface CCRTableViewDoubleLineCell : APTableViewBaseCell
{
    int _cellHeight;
    UILabel *_titleLabel;
    UILabel *_infoLabel;
    UIImageView *_portraitImage;
}

@property(nonatomic) int cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) UIImageView *portraitImage; // @synthesize portraitImage=_portraitImage;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setLogo:(id)arg1;
- (void)setLogoAndInfo:(id)arg1;
- (void)hideOldElement;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
