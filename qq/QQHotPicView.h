//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/HotPicBottomBarDelegate-Protocol.h>
#import <QQMainProject/HotPicCollectionDelegate-Protocol.h>
#import <QQMainProject/IHotPicLibraryEngineDelegate-Protocol.h>
#import <QQMainProject/UIScrollViewDelegate-Protocol.h>

@class HotPicBottomBar, HotPicGuideView, HotPicLoadingView, NSMutableArray, NSString, QQTabWithInPageControl, UIScrollView;
@protocol QQHotPicViewDelegate;

@interface QQHotPicView : UIView <UIScrollViewDelegate, HotPicCollectionDelegate, IHotPicLibraryEngineDelegate, HotPicBottomBarDelegate>
{
    HotPicLoadingView *_loadingView;
    _Bool _isHotFirstEnter;
    _Bool _isRecentFirstEnter;
    QQTabWithInPageControl *_tabControlBar;
    unsigned long long _selectedIndex;
    _Bool _hasGetTagList;
    id <QQHotPicViewDelegate> _delegate;
    HotPicBottomBar *_bottomBar;
    HotPicGuideView *_guideView;
    NSMutableArray *_tagList;
    NSMutableArray *_cviewList;
    unsigned long long _selectedId;
    UIScrollView *_scrollView;
    NSMutableArray *_lastViewsToClear;
    unsigned long long _initialId;
}

@property(nonatomic) unsigned long long initialId; // @synthesize initialId=_initialId;
@property(retain, nonatomic) NSMutableArray *lastViewsToClear; // @synthesize lastViewsToClear=_lastViewsToClear;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) unsigned long long selectedId; // @synthesize selectedId=_selectedId;
@property(nonatomic) _Bool hasGetTagList; // @synthesize hasGetTagList=_hasGetTagList;
@property(retain, nonatomic) NSMutableArray *cviewList; // @synthesize cviewList=_cviewList;
@property(retain, nonatomic) NSMutableArray *tagList; // @synthesize tagList=_tagList;
@property(retain, nonatomic) HotPicGuideView *guideView; // @synthesize guideView=_guideView;
@property(retain, nonatomic) HotPicBottomBar *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(nonatomic) __weak id <QQHotPicViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)changeFrameOnScroll:(_Bool)arg1;
- (_Bool)isSupportRightDragToGoBack;
- (void)hotPicInfoImgReadyImg:(id)arg1 tagId:(unsigned long long)arg2 picInfo:(id)arg3 loadStatus:(int)arg4 isThumbPicFile:(_Bool)arg5;
- (void)hotPicInfoListReadyPicTag:(unsigned long long)arg1 infoList:(id)arg2;
- (void)hotPicTagListReady:(id)arg1;
- (_Bool)hotPicOpenPredownload;
- (struct CGRect)getHotPicCollectionViewFrame:(unsigned long long)arg1;
- (void)getImage:(id)arg1 picTag:(unsigned long long)arg2 isPreDownload:(_Bool)arg3 isThumb:(_Bool)arg4;
- (void)getList:(unsigned long long)arg1 startIndex:(unsigned long long)arg2 endIndex:(unsigned long long)arg3 isFirst:(_Bool)arg4;
- (void)sendHotPic:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)getCViewByTag:(unsigned long long)arg1;
- (id)createCViewByTag:(unsigned long long)arg1;
- (void)switchFrom:(unsigned long long)arg1 toTag:(unsigned long long)arg2 needScroll:(_Bool)arg3;
- (void)onBottomBarClicked:(unsigned long long)arg1 tagType:(unsigned long long)arg2 oldTag:(unsigned long long)arg3 oldTagType:(unsigned long long)arg4;
- (void)onBottomBarTouchCancel:(unsigned long long)arg1;
- (void)onBottomBarTouchDown:(unsigned long long)arg1;
- (void)initSegmentedControl;
- (void)layoutSubviews;
- (void)hotPicViewHidden;
- (void)hotPicViewShown;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
