//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTUGCBaseCellView.h"

#import "TTShareManagerDelegate-Protocol.h"
#import "TTVDemandPlayerDelegate-Protocol.h"

@class Article, ExploreOrderedData, NSMutableDictionary, NSString, SSThemedButton, TTShareManager, TTThreadImageViewCell, TTVPlayVideo;

@interface TTUGCVideoCellView : TTUGCBaseCellView <TTVDemandPlayerDelegate, TTShareManagerDelegate>
{
    ExploreOrderedData *_orderedData;
    TTThreadImageViewCell *_picView;
    Article *_article;
    SSThemedButton *_playButton;
    TTVPlayVideo *_movieView;
    NSMutableDictionary *_videoShareLogDic;
    TTShareManager *_shareManager;
}

@property(retain, nonatomic) TTShareManager *shareManager; // @synthesize shareManager=_shareManager;
@property(retain, nonatomic) NSMutableDictionary *videoShareLogDic; // @synthesize videoShareLogDic=_videoShareLogDic;
@property(retain, nonatomic) TTVPlayVideo *movieView; // @synthesize movieView=_movieView;
@property(retain, nonatomic) SSThemedButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) Article *article; // @synthesize article=_article;
@property(retain, nonatomic) TTThreadImageViewCell *picView; // @synthesize picView=_picView;
@property(retain, nonatomic) ExploreOrderedData *orderedData; // @synthesize orderedData=_orderedData;
- (void).cxx_destruct;
- (void)shareLogV3WithEventName:(id)arg1 params:(id)arg2;
- (void)shareManager:(id)arg1 completedWith:(id)arg2 sharePanel:(id)arg3 error:(id)arg4 desc:(id)arg5;
- (id)imageWithView:(id)arg1;
- (id)wechatTimelineCotentItem;
- (id)videoShareImage;
- (id)videoShareUrl;
- (id)videoShareDesc;
- (id)videoTimeLineTitle;
- (id)videoShareTitle;
- (void)directShareActionWithActivityType:(id)arg1;
- (void)playingDirectShareActionWithActivityType:(id)arg1;
- (void)playFinishDirectShareActionWithActivityType:(id)arg1;
- (unsigned long long)cellSubStyle;
- (unsigned long long)cellStyle;
- (void)cellInListWillDisappear:(long long)arg1;
- (void)invalidateMovieView;
- (void)stopMovieViewPlay:(id)arg1;
- (struct CGRect)ttv_movieViewFrameAfterExitFullscreen;
- (void)actionChangeCallbackWithAction:(id)arg1;
- (void)playerPlaybackState:(long long)arg1;
- (void)movieViewPlayFinished;
- (void)removeMovieViewNotification;
- (void)registerMovieViewNotification;
- (void)addUrlTracker;
- (void)ttv_configADFinishedView:(id)arg1;
- (void)playButtonClicked;
- (void)layoutVideoComponent;
- (void)refreshWithLayoutModel:(id)arg1;
- (void)willAppear;
- (void)layoutComponents;
- (void)didDisappear;
- (void)createComponents;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
