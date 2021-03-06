//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MovieSDKTableViewController.h"

#import "UIAlertViewDelegate-Protocol.h"

@class MovieSDKCalendarEventData, MovieSDKNavigationBar, MovieSDKRefreshTableView, MovieSDKRootViewController, NSMutableArray, NSString, UIButton, UIView;

@interface MovieSDKTicketsViewController : MovieSDKTableViewController <UIAlertViewDelegate>
{
    _Bool _noMoreData;
    MovieSDKCalendarEventData *_eventData;
    MovieSDKRefreshTableView *_tableview;
    UIButton *_getTicketBtn;
    NSMutableArray *_datas;
    long long _page;
    MovieSDKNavigationBar *_navigationBar;
    double _naviHeight;
    MovieSDKRootViewController *_rootVc;
    UIView *_emptyView;
}

@property(nonatomic) _Bool noMoreData; // @synthesize noMoreData=_noMoreData;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(nonatomic) __weak MovieSDKRootViewController *rootVc; // @synthesize rootVc=_rootVc;
@property(nonatomic) double naviHeight; // @synthesize naviHeight=_naviHeight;
@property(retain, nonatomic) MovieSDKNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(nonatomic) long long page; // @synthesize page=_page;
@property(retain, nonatomic) NSMutableArray *datas; // @synthesize datas=_datas;
@property(retain, nonatomic) UIButton *getTicketBtn; // @synthesize getTicketBtn=_getTicketBtn;
@property(retain, nonatomic) MovieSDKRefreshTableView *tableview; // @synthesize tableview=_tableview;
@property(retain, nonatomic) MovieSDKCalendarEventData *eventData; // @synthesize eventData=_eventData;
- (void).cxx_destruct;
- (void)onAppEnterForegound;
- (void)dealloc;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showWarnningToastViewWithText:(id)arg1;
- (void)saveCalendarEvent;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)tableView:(id)arg1 didStartRefreshData:(long long)arg2;
- (_Bool)tableView:(id)arg1 willStartRefreshData:(long long)arg2;
- (Class)sdkTableView:(id)arg1 classForRowAtIndexPath:(id)arg2 data:(id)arg3;
- (id)sdkTableView:(id)arg1 dataForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)requestData;
- (void)onBack;
- (void)gotoTab;
- (void)onGetTicket;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithRootViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

