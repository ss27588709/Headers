//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIControl.h"

#import "MMDragDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "WCFacadeExt-Protocol.h"

@class MMDragManager, NSString, SightIconView, UIDragInteraction, UIImageView, WCDataItem, WCMediaItem, WCSightViewController;
@protocol WCSNSNodeVideoViewDelegate;

@interface WCSNSNodeVideoView : MMUIControl <WCFacadeExt, UIActionSheetDelegate, MMDragDelegate>
{
    _Bool _bIsLongPressHandled;
    WCDataItem *_dataItem;
    UIImageView *_thumbImageView;
    WCSightViewController *_videoPlayerVC;
    SightIconView *_playIconView;
    MMDragManager *dragManager;
    UIImageView *tmp_liftingImgView;
    UIDragInteraction *dragInteraction;
    _Bool _isImageReady;
    _Bool _bIgnoreLongPress;
    id <WCSNSNodeVideoViewDelegate> _delegate;
    WCMediaItem *_mediaData;
    NSString *_sightPath;
    NSString *_cpKey;
    unsigned long long _scene;
}

@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool bIgnoreLongPress; // @synthesize bIgnoreLongPress=_bIgnoreLongPress;
@property(retain, nonatomic) NSString *cpKey; // @synthesize cpKey=_cpKey;
@property(retain, nonatomic) NSString *sightPath; // @synthesize sightPath=_sightPath;
@property(readonly, nonatomic) _Bool isImageReady; // @synthesize isImageReady=_isImageReady;
@property(readonly, nonatomic) WCMediaItem *mediaData; // @synthesize mediaData=_mediaData;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) __weak id <WCSNSNodeVideoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)exitFullScreenPlay;
- (void)playInFullScreen:(_Bool)arg1;
- (void)silencePlay;
- (_Bool)tryDownloadForOperateMode:(unsigned int)arg1;
- (void)LongPressEvents:(id)arg1;
- (void)onMediaItemSizeDidChange:(id)arg1;
- (void)onDownloadFail:(id)arg1 downloadType:(int)arg2;
- (void)onDownloadFinish:(id)arg1 downloadType:(int)arg2;
- (void)updateThumbImage:(id)arg1;
- (void)onClickWCSight:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithMediaData:(id)arg1 withFrame:(struct CGRect)arg2;
- (id)initWithMediaData:(id)arg1;
- (void)initData:(id)arg1;
- (void)liftingImageNeedRemove;
- (id)liftingItemWithImage:(id)arg1 parameters:(id)arg2;
- (void)reloadSightPreviewImage;
- (id)getImage;
- (_Bool)isSightVideoExist;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

