//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, TBEditionPositionInfo, UITableView;

@interface TBESPositionSelectView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    NSMutableArray *_displayedItems;
    NSArray *_firstScreenItems;
    _Bool _firstAppear;
    TBEditionPositionInfo *_selectedPositionInfo;
    unsigned long long _currentEdition;
    NSArray *_displayInfos;
    UITableView *_tableView;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *displayInfos; // @synthesize displayInfos=_displayInfos;
@property(nonatomic) unsigned long long currentEdition; // @synthesize currentEdition=_currentEdition;
@property(retain, nonatomic) TBEditionPositionInfo *selectedPositionInfo; // @synthesize selectedPositionInfo=_selectedPositionInfo;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)layoutSubviews;
- (void)prepareDisplayInfosWithSelectedInfo:(id)arg1;
- (void)initCurrentEditionWithPositionInfo:(id)arg1;
- (void)initSubview;
- (id)initWithFrame:(struct CGRect)arg1 positionInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

