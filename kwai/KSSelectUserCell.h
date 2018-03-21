//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class KSRoundedImageAsset, KSSwitchButton, NSString, UIImageView, UILabel;

@interface KSSelectUserCell : UITableViewCell
{
    _Bool _fullLineStyle;
    UIImageView *_userHeaderView;
    UILabel *_userName;
    KSSwitchButton *_selectBtn;
    NSString *_head;
    UIImageView *_line;
    KSRoundedImageAsset *_headerImageAsset;
}

+ (double)cellHeight;
@property(nonatomic) _Bool fullLineStyle; // @synthesize fullLineStyle=_fullLineStyle;
@property(retain, nonatomic) KSRoundedImageAsset *headerImageAsset; // @synthesize headerImageAsset=_headerImageAsset;
@property(retain, nonatomic) UIImageView *line; // @synthesize line=_line;
@property(retain, nonatomic) NSString *head; // @synthesize head=_head;
@property(retain, nonatomic) KSSwitchButton *selectBtn; // @synthesize selectBtn=_selectBtn;
@property(retain, nonatomic) UILabel *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) UIImageView *userHeaderView; // @synthesize userHeaderView=_userHeaderView;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)drawWithUserDic:(id)arg1 fullLineStyle:(_Bool)arg2;
- (id)init;

@end
