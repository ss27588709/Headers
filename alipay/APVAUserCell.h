//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIImageView, UILabel;

@interface APVAUserCell : UITableViewCell
{
    _Bool _isFirstCell;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIImageView *_iconImageView;
    UIImageView *_genderImageView;
    NSString *_schema;
}

+ (id)reuseIdentifier;
@property(nonatomic) _Bool isFirstCell; // @synthesize isFirstCell=_isFirstCell;
@property(retain, nonatomic) NSString *schema; // @synthesize schema=_schema;
@property(retain, nonatomic) UIImageView *genderImageView; // @synthesize genderImageView=_genderImageView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)layoutWithDescText:(_Bool)arg1;
- (void)setModel:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)customInit;
- (void)dealloc;
- (id)init;

@end
