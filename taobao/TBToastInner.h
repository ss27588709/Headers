//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, UILabel;

@interface TBToastInner : UIView
{
    _Bool _isTouchDown;
    UILabel *_iconLabel;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    NSDictionary *_styles;
}

@property(nonatomic) _Bool isTouchDown; // @synthesize isTouchDown=_isTouchDown;
@property(retain, nonatomic) NSDictionary *styles; // @synthesize styles=_styles;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *iconLabel; // @synthesize iconLabel=_iconLabel;
- (void).cxx_destruct;
- (struct CGSize)calculateSize;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)startDisappearAnimation:(double)arg1;
- (void)show:(id)arg1 duration:(double)arg2;
- (void)setupStyles:(id)arg1;
- (void)setIcon:(id)arg1 title:(id)arg2 subTitle:(id)arg3 styles:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

@end

