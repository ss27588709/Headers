//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface MBKDidaHomeStatusCell : UITableViewCell
{
    UIImageView *_iconView;
    UILabel *_statusLabel;
    UILabel *_tipsLabel;
}

+ (id)cellWithTableView:(id)arg1;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)buildUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)init;

@end

