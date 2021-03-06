//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "netNoneFreshDelegate-Protocol.h"

@class NSMutableArray, NSNumber, NSString, NoNetWrokViewController, UITableView, UIView;

@interface RechargeRecordViewController : MBKBaseViewController <UITableViewDataSource, UITableViewDelegate, netNoneFreshDelegate>
{
    NSMutableArray *dataArr;
    NSNumber *lastTimes;
    UITableView *_mTableView;
    NoNetWrokViewController *_netWorkView;
    UIView *_noMessagesBack;
}

@property(retain) UIView *noMessagesBack; // @synthesize noMessagesBack=_noMessagesBack;
@property(retain) NoNetWrokViewController *netWorkView; // @synthesize netWorkView=_netWorkView;
@property(retain, nonatomic) UITableView *mTableView; // @synthesize mTableView=_mTableView;
@property(retain, nonatomic) NSNumber *lastTimes; // @synthesize lastTimes;
- (void).cxx_destruct;
- (void)noMessages;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)netNoneFresh:(long long)arg1;
- (void)requestRechargeRecordsFailed:(id)arg1;
- (void)requestRechargeRecordsSucc:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)getRechargeRecords;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setupController;
- (void)loadNetNormal;
- (void)setRefundBarButton;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

