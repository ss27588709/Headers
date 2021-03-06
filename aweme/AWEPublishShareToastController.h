//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BTDShareActionDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class AWEAwemeModel, NSString, UIImageView, UILabel, UIScrollView, UIView;

@interface AWEPublishShareToastController : UIViewController <BTDShareActionDelegate, UIGestureRecognizerDelegate>
{
    AWEAwemeModel *_model;
    unsigned long long _toastType;
    UIView *_coverImageWrapperView;
    UIImageView *_coverImageView;
    UIView *_slideIndicatorView;
    UIScrollView *_scrollView;
    UILabel *_label;
    UILabel *_uploadLabel;
    UILabel *_uploadSubLabel;
    UIImageView *_checkLastesRankButton;
    CDUnknownBlockType _closeBlock;
    CDUnknownBlockType _animatedCloseBlock;
    CDUnknownBlockType _cancelAnimatedCloseBlock;
}

@property(copy, nonatomic) CDUnknownBlockType cancelAnimatedCloseBlock; // @synthesize cancelAnimatedCloseBlock=_cancelAnimatedCloseBlock;
@property(copy, nonatomic) CDUnknownBlockType animatedCloseBlock; // @synthesize animatedCloseBlock=_animatedCloseBlock;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(retain, nonatomic) UIImageView *checkLastesRankButton; // @synthesize checkLastesRankButton=_checkLastesRankButton;
@property(retain, nonatomic) UILabel *uploadSubLabel; // @synthesize uploadSubLabel=_uploadSubLabel;
@property(retain, nonatomic) UILabel *uploadLabel; // @synthesize uploadLabel=_uploadLabel;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *slideIndicatorView; // @synthesize slideIndicatorView=_slideIndicatorView;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UIView *coverImageWrapperView; // @synthesize coverImageWrapperView=_coverImageWrapperView;
@property(nonatomic) unsigned long long toastType; // @synthesize toastType=_toastType;
@property(retain, nonatomic) AWEAwemeModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)p_checkLastestRank_IMP:(id)arg1;
- (void)p_checkLastestRank:(id)arg1;
- (void)_onCoverImageClicked_IMP:(id)arg1;
- (void)_onCoverImageClicked:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)performAnimatedCloseBlock;
- (void)updateViewFrame:(id)arg1;
- (void)_onSwipeToTop;
- (void)trackEventWithType:(long long)arg1 itemID:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)shareAweme:(id)arg1 forShareType:(long long)arg2;
- (void)clicked:(id)arg1;
- (void)addBodydanceBackgroundDecoratedLayer;
- (void)addGradientBackGroundForView;
- (void)viewDidLoad;
- (id)initWithModel:(id)arg1 type:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

