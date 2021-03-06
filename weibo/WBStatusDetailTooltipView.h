//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface WBStatusDetailTooltipView : UIView
{
    _Bool _animating;
    UIImageView *_tooltipImageView;
    UIImageView *_handImageView;
}

@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(retain, nonatomic) UIImageView *handImageView; // @synthesize handImageView=_handImageView;
@property(retain, nonatomic) UIImageView *tooltipImageView; // @synthesize tooltipImageView=_tooltipImageView;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)dealloc;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_startAnimating;
- (void)startAnimating;
- (id)initWithFrame:(struct CGRect)arg1;

@end

