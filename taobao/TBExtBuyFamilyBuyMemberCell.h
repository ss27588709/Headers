//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBExtBuyBaseCell.h"

@class NSDictionary, UIButton, UIImageView, UILabel;
@protocol TBExtBuyFamilyBuyMemberCellDelegate;

@interface TBExtBuyFamilyBuyMemberCell : TBExtBuyBaseCell
{
    id <TBExtBuyFamilyBuyMemberCellDelegate> _delegate;
    UIImageView *_headIcon;
    UIButton *_familyBuyButton;
    UILabel *_relationLabel;
    UILabel *_remarkLabel;
    NSDictionary *_data;
}

@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(retain, nonatomic) UILabel *remarkLabel; // @synthesize remarkLabel=_remarkLabel;
@property(retain, nonatomic) UILabel *relationLabel; // @synthesize relationLabel=_relationLabel;
@property(retain, nonatomic) UIButton *familyBuyButton; // @synthesize familyBuyButton=_familyBuyButton;
@property(retain, nonatomic) UIImageView *headIcon; // @synthesize headIcon=_headIcon;
@property(nonatomic) __weak id <TBExtBuyFamilyBuyMemberCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)clickFamilyButton;
- (void)bindData:(id)arg1;
- (void)initCell;

@end

