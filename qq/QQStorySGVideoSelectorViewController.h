//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/MQZoneTableFootLoadingViewDelegate-Protocol.h>
#import <QQMainProject/QQStorySGVideoSelectorCellDelegate-Protocol.h>
#import <QQMainProject/TBBizNetworkLogicDelegate-Protocol.h>
#import <QQMainProject/UIAlertViewDelegate-Protocol.h>
#import <QQMainProject/UITableViewDataSource-Protocol.h>
#import <QQMainProject/UITableViewDelegate-Protocol.h>

@class MQZoneTableFootLoadingView, NSString, ODRefreshControl, QQAlertView, QQStoryEmptyView, QQStorySGVideoSelectorHandler, UILabel, UITableView;
@protocol QQStorySGVideoSelectorViewControllerDelegate;

@interface QQStorySGVideoSelectorViewController : QQViewController <UITableViewDelegate, UITableViewDataSource, TBBizNetworkLogicDelegate, QQStorySGVideoSelectorCellDelegate, MQZoneTableFootLoadingViewDelegate, UIAlertViewDelegate>
{
    UITableView *_tableView;
    MQZoneTableFootLoadingView *_loadMoreFooter;
    ODRefreshControl *_refreshControl;
    QQAlertView *_alertView;
    UILabel *_loadingLabel;
    QQStoryEmptyView *_emptyView;
    _Bool _popManually;
    _Bool _end;
    _Bool _dragToBack;
    unsigned long long _entry;
    NSString *_shareGroupName;
    id <QQStorySGVideoSelectorViewControllerDelegate> _delegate;
    NSString *_unionID;
    NSString *_cookie;
    unsigned long long _seq;
    QQStorySGVideoSelectorHandler *_handler;
}

@property(nonatomic) QQStorySGVideoSelectorHandler *handler; // @synthesize handler=_handler;
@property(nonatomic, getter=isDragToBack) _Bool dragToBack; // @synthesize dragToBack=_dragToBack;
@property(nonatomic) unsigned long long seq; // @synthesize seq=_seq;
@property(nonatomic, getter=isEnd) _Bool end; // @synthesize end=_end;
@property(copy, nonatomic) NSString *cookie; // @synthesize cookie=_cookie;
@property(copy, nonatomic) NSString *unionID; // @synthesize unionID=_unionID;
@property(nonatomic) _Bool popManually; // @synthesize popManually=_popManually;
@property(nonatomic) __weak id <QQStorySGVideoSelectorViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *shareGroupName; // @synthesize shareGroupName=_shareGroupName;
@property(nonatomic) unsigned long long entry; // @synthesize entry=_entry;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)p_finish;
- (void)didFinishOptionSetting:(id)arg1;
- (void)configureRightButtonTitle;
- (void)playVideoWithUin:(id)arg1 itemInfo:(id)arg2;
- (void)shareGroupVideoSelectorCellVCEnableDragToBack:(_Bool)arg1;
- (void)shareGroupVideoSelectorCellDidClickShareGroupVideo:(id)arg1;
- (_Bool)shareGroupVideoSelectorCellDidSelectShareGroupVideo:(id)arg1;
- (void)shareGroupVideoSelectorCellDidScrollEndToRight;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)leftButtonClick:(id)arg1;
- (_Bool)isSupportRightDragToGoBack;
- (void)finishSelectingFromPreview:(id)arg1;
- (void)updateUI:(_Bool)arg1 selectType:(unsigned long long)arg2;
- (void)updateUIFromNotification:(id)arg1;
- (void)didRequestFail:(unsigned long long)arg1 requestModel:(id)arg2 error:(id)arg3;
- (void)didReceivedData:(unsigned long long)arg1 requestModel:(id)arg2 classModel:(id)arg3;
- (void)stopLoadingWithErr:(_Bool)arg1;
- (void)tableFootLoadingViewDidTriggerLoading:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)stopRefreshCtrlAnimate:(_Bool)arg1 isShowFailedTips:(_Bool)arg2;
- (void)refreshDataRequest;
- (void)failedToConnect;
- (void)loadMoreData;
- (void)showConfirmAlert;
- (void)showMaxSelectionAlert;
- (void)showLoadingLabel;
- (void)hideLoadingLabel;
- (void)hideEmptyView;
- (void)showEmptyView;
- (void)configureDataSourceFromCollectionList:(id)arg1;
- (void)handleDateVideoCollectionList:(id)arg1;
- (void)loadCacheData;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithUnionID:(id)arg1 selectedVideos:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

