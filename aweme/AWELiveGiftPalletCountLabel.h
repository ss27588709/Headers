//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSAttributedString, UILabel;

@interface AWELiveGiftPalletCountLabel : UIView
{
    UILabel *_blueLabel;
    UILabel *_redLabel;
    UILabel *_whiteLabel;
    NSAttributedString *_stringX;
}

@property(retain, nonatomic) NSAttributedString *stringX; // @synthesize stringX=_stringX;
@property(retain, nonatomic) UILabel *whiteLabel; // @synthesize whiteLabel=_whiteLabel;
@property(retain, nonatomic) UILabel *redLabel; // @synthesize redLabel=_redLabel;
@property(retain, nonatomic) UILabel *blueLabel; // @synthesize blueLabel=_blueLabel;
- (void).cxx_destruct;
- (void)_setupUI;
- (void)setText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
