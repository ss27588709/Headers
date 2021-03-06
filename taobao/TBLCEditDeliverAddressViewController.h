//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSString, TBLSPOIEntity, UIButton, UIImageView, UILabel, UITableView, UITextField;

@interface TBLCEditDeliverAddressViewController : TBViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate>
{
    UITableView *_tableView;
    UITextField *_nameTextField;
    UITextField *_cellphoneTextField;
    UILabel *_currLocationLabel;
    UIImageView *_arrowImageView;
    UITextField *_detailInfoTextField;
    UIButton *_editDeliverAddressButton;
    TBLSPOIEntity *_poiEntity;
    CDUnknownBlockType _callback;
}

@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) TBLSPOIEntity *poiEntity; // @synthesize poiEntity=_poiEntity;
@property(retain, nonatomic) UIButton *editDeliverAddressButton; // @synthesize editDeliverAddressButton=_editDeliverAddressButton;
@property(retain, nonatomic) UITextField *detailInfoTextField; // @synthesize detailInfoTextField=_detailInfoTextField;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *currLocationLabel; // @synthesize currLocationLabel=_currLocationLabel;
@property(retain, nonatomic) UITextField *cellphoneTextField; // @synthesize cellphoneTextField=_cellphoneTextField;
@property(retain, nonatomic) UITextField *nameTextField; // @synthesize nameTextField=_nameTextField;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidChanged:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)requestAutoFillItems;
- (void)setupSubViews;
- (void)poiSelected:(id)arg1;
- (void)editDeliverAddressAction:(id)arg1;
- (void)setItems;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)backItemClicked:(id)arg1;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

