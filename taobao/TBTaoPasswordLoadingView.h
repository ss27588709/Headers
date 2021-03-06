//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBTaoPasswordBaseView.h"

@class CAGradientLayer, UIView;

@interface TBTaoPasswordLoadingView : TBTaoPasswordBaseView
{
    UIView *_grayView;
    UIView *_bigLineView1;
    UIView *_bigLineView2;
    UIView *_smallLineView;
    CAGradientLayer *_slidingBlock;
}

@property(retain, nonatomic) CAGradientLayer *slidingBlock; // @synthesize slidingBlock=_slidingBlock;
@property(retain, nonatomic) UIView *smallLineView; // @synthesize smallLineView=_smallLineView;
@property(retain, nonatomic) UIView *bigLineView2; // @synthesize bigLineView2=_bigLineView2;
@property(retain, nonatomic) UIView *bigLineView1; // @synthesize bigLineView1=_bigLineView1;
@property(retain, nonatomic) UIView *grayView; // @synthesize grayView=_grayView;
- (void).cxx_destruct;
- (void)stopLoadingAnimation;
- (void)addLoadingAnimation;
- (struct CGPoint)getCloseButtonOrigin;
- (struct CGRect)getShowViewRect;
- (void)clearUI;
- (void)showUI;
- (void)createUI;
- (id)init;

@end

