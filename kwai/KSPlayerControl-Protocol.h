//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIActivityIndicatorView, UIButton, UIView;

@protocol KSPlayerControl <NSObject>
@property(readonly) UIButton *playButton;
@property(readonly) UIButton *closeButton;

@optional
@property(readonly) UIView *progressView;
@property(nonatomic) float progress;
@property(readonly) UIActivityIndicatorView *indicatorView;
@property(readonly) UIButton *nextButton;
@property(readonly) UIButton *prevButton;
- (void)setEnableProgressIndicator:(_Bool)arg1 size:(struct CGSize)arg2;
@end
