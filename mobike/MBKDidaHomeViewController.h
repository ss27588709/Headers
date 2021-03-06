//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKBaseViewController.h"

#import "MBKAddressPickerViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class BMKMapTip, MBKAddressPickerView, MBKBoardAccessoryView, MBKDidaHomeViewModel, MBKPanelCardView, NSString, UITableView, UIView;

@interface MBKDidaHomeViewController : MBKBaseViewController <MBKAddressPickerViewDelegate, UITableViewDataSource, UITableViewDelegate>
{
    MBKDidaHomeViewModel *_viewModel;
    MBKPanelCardView *_bannerView;
    MBKPanelCardView *_addressPickerCardView;
    MBKPanelCardView *_carpoolBriefCardView;
    BMKMapTip *_startMapTip;
    BMKMapTip *_endMapTip;
    UITableView *_tableView;
    UIView *_headerView;
}

@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) BMKMapTip *endMapTip; // @synthesize endMapTip=_endMapTip;
@property(retain, nonatomic) BMKMapTip *startMapTip; // @synthesize startMapTip=_startMapTip;
@property(retain, nonatomic) MBKPanelCardView *carpoolBriefCardView; // @synthesize carpoolBriefCardView=_carpoolBriefCardView;
@property(retain, nonatomic) MBKPanelCardView *addressPickerCardView; // @synthesize addressPickerCardView=_addressPickerCardView;
@property(retain, nonatomic) MBKPanelCardView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) MBKDidaHomeViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (_Bool)addressPickerView:(id)arg1 shouldSelectAtIndex:(long long)arg2;
- (void)addressPickerView:(id)arg1 didSelectAtIndex:(long long)arg2 address:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(readonly, nonatomic) MBKBoardAccessoryView *carpoolBriefView;
@property(readonly, nonatomic) MBKAddressPickerView *addressPickerView;
- (void)setupViewModel;
- (void)reloadHeader;
- (void)reloadSubviews;
- (_Bool)shouldHideNavigationBarShadow;
- (void)setupSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

