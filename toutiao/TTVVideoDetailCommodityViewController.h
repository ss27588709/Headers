//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TTVPlayerContext-Protocol.h"
#import "TTVVideoDetailCommodityItemDelegate-Protocol.h"

@class NSMutableArray, NSString, TTVCommodityEntity, TTVDetailPlayControl, TTVVideoDetailArrowButton, TTVVideoPlayerStateStore, TTVWhiteBoard, UIView;

@interface TTVVideoDetailCommodityViewController : UIViewController <TTVVideoDetailCommodityItemDelegate, TTVPlayerContext>
{
    _Bool _isFlod;
    _Bool _isChangingAnimation;
    _Bool _isFlodAnimation;
    double _pgcHeight;
    TTVWhiteBoard *_whiteboard;
    TTVVideoPlayerStateStore *_playerStateStore;
    NSMutableArray *_itemViews;
    TTVVideoDetailArrowButton *_arrowButton;
    TTVCommodityEntity *_currentCommodityEntity;
    TTVDetailPlayControl *_playControl;
    UIView *_contentView;
    long long _itemViewHeight;
    long long _itemViewTopSpace;
}

@property(nonatomic) _Bool isFlodAnimation; // @synthesize isFlodAnimation=_isFlodAnimation;
@property(nonatomic) _Bool isChangingAnimation; // @synthesize isChangingAnimation=_isChangingAnimation;
@property(nonatomic) long long itemViewTopSpace; // @synthesize itemViewTopSpace=_itemViewTopSpace;
@property(nonatomic) long long itemViewHeight; // @synthesize itemViewHeight=_itemViewHeight;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) TTVDetailPlayControl *playControl; // @synthesize playControl=_playControl;
@property(retain, nonatomic) TTVCommodityEntity *currentCommodityEntity; // @synthesize currentCommodityEntity=_currentCommodityEntity;
@property(nonatomic) _Bool isFlod; // @synthesize isFlod=_isFlod;
@property(retain, nonatomic) TTVVideoDetailArrowButton *arrowButton; // @synthesize arrowButton=_arrowButton;
@property(retain, nonatomic) NSMutableArray *itemViews; // @synthesize itemViews=_itemViews;
@property(retain, nonatomic) TTVVideoPlayerStateStore *playerStateStore; // @synthesize playerStateStore=_playerStateStore;
@property(retain, nonatomic) TTVWhiteBoard *whiteboard; // @synthesize whiteboard=_whiteboard;
@property(nonatomic) double pgcHeight; // @synthesize pgcHeight=_pgcHeight;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)ttv_didOpenCommodityByWeb:(_Bool)arg1;
- (void)refreshView;
- (void)layoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)ttv_kvo;
- (void)actionChangeCallbackWithAction:(id)arg1 state:(id)arg2;
- (void)dealloc;
- (void)doneUnflodAction;
- (void)unflodAction;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

