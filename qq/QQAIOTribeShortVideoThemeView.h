//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface QQAIOTribeShortVideoThemeView : UIView
{
    _Bool _isTheme;
    UIImageView *_imageView;
    UILabel *_textLabel;
}

@property(nonatomic) _Bool isTheme; // @synthesize isTheme=_isTheme;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setTextLabelStr:(id)arg1 isTheme:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
