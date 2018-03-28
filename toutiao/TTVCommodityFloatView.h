//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TTVCommodityItemViewDelegate-Protocol.h"
#import "TTVPlayerContext-Protocol.h"

@class NSArray, NSString, TTVCommodityItemView, TTVDemandPlayer, TTVVideoPlayerStateStore;

@interface TTVCommodityFloatView : UIView <TTVCommodityItemViewDelegate, TTVPlayerContext>
{
    _Bool _isAnimationing;
    _Bool _didHidden;
    TTVVideoPlayerStateStore *_playerStateStore;
    TTVDemandPlayer *_player;
    UIView *_animationToView;
    UIView *_animationSuperView;
    NSArray *_commoditys;
    TTVCommodityItemView *_itemView;
}

@property(retain, nonatomic) TTVCommodityItemView *itemView; // @synthesize itemView=_itemView;
@property(nonatomic) _Bool didHidden; // @synthesize didHidden=_didHidden;
@property(nonatomic) _Bool isAnimationing; // @synthesize isAnimationing=_isAnimationing;
@property(retain, nonatomic) NSArray *commoditys; // @synthesize commoditys=_commoditys;
@property(retain, nonatomic) UIView *animationSuperView; // @synthesize animationSuperView=_animationSuperView;
@property(retain, nonatomic) UIView *animationToView; // @synthesize animationToView=_animationToView;
@property(nonatomic) __weak TTVDemandPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) TTVVideoPlayerStateStore *playerStateStore; // @synthesize playerStateStore=_playerStateStore;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (struct CGPoint)itemViewOrigin;
- (_Bool)ttv_shouldDismissToMoreButton;
- (void)ttv_increaseDismissToMoreButtonTimes;
- (void)ttv_zoomOutMoreButton;
- (void)ttv_dismissToTargetView;
- (void)ttv_dismissCommodityView;
- (void)ttv_dismissNormal;
- (void)displayCommodityViewWithEntity:(id)arg1;
- (void)ttv_dimissItemViewWithTargetAnimation:(_Bool)arg1;
- (void)ttv_didOpenCommodityByWeb:(_Bool)arg1;
- (void)ttv_clickCommodityTrack;
- (void)ttv_showCommodityTrack;
- (id)commonDic;
- (id)ttv_position;
- (void)ttv_kvo;
- (void)actionChangeCallbackWithAction:(id)arg1 state:(id)arg2;
- (id)backgroundView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
