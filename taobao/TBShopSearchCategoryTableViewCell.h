//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class TBShopSearchCategoryButton, UILabel, UIView;

@interface TBShopSearchCategoryTableViewCell : UITableViewCell
{
    TBShopSearchCategoryButton *_leftCheckButton;
    TBShopSearchCategoryButton *_rightCheckButton;
    UILabel *_leftTitleLabel;
    UILabel *_rightTitleLabel;
    UIView *_selectStateView;
}

+ (id)cell;
@property(retain, nonatomic) UIView *selectStateView; // @synthesize selectStateView=_selectStateView;
@property(retain, nonatomic) UILabel *rightTitleLabel; // @synthesize rightTitleLabel=_rightTitleLabel;
@property(retain, nonatomic) UILabel *leftTitleLabel; // @synthesize leftTitleLabel=_leftTitleLabel;
@property(retain, nonatomic) TBShopSearchCategoryButton *rightCheckButton; // @synthesize rightCheckButton=_rightCheckButton;
@property(retain, nonatomic) TBShopSearchCategoryButton *leftCheckButton; // @synthesize leftCheckButton=_leftCheckButton;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)rightCheckButtondoSelected:(_Bool)arg1;
- (void)leftCheckButtondoSelected:(_Bool)arg1;
- (void)config;

@end

