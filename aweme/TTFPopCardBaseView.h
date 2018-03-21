//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class NSString, UIButton, UILabel;

@interface TTFPopCardBaseView : UIView <CAAnimationDelegate>
{
    _Bool _isShowing;
    UILabel *_titleLabel;
    UIView *_containerView;
    UIView *_backgroundMaskView;
    UIButton *_closeButton;
    double _bottomPadding;
    double _horizonPadding;
}

+ (void)linearAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) double horizonPadding; // @synthesize horizonPadding=_horizonPadding;
@property(nonatomic) double bottomPadding; // @synthesize bottomPadding=_bottomPadding;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *backgroundMaskView; // @synthesize backgroundMaskView=_backgroundMaskView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)configDefaultAnimation:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)hide;
- (void)showInView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setContainerBottomPadding:(double)arg1;
- (void)initComponents;
- (id)initWithFrame:(struct CGRect)arg1 bottomPadding:(double)arg2 horizonPadding:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
