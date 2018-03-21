//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBViewController.h"

#import "TBAMPModifyNameDelegate-Protocol.h"
#import "TBIMRelationServiceDelegate-Protocol.h"
#import "TBIMSimpleProfileDelegate-Protocol.h"
#import "TBNewFriendViewCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AMPNewFriendObject, NSString, TBModelStatusHandler, TBMoreDataTableViewCell, UITableView;

@interface TBNewFriendViewController : TBViewController <UITableViewDataSource, UITableViewDelegate, TBNewFriendViewCellDelegate, TBIMRelationServiceDelegate, TBAMPModifyNameDelegate, TBIMSimpleProfileDelegate>
{
    _Bool _isNeedLoadInterface;
    UITableView *_tableView;
    TBMoreDataTableViewCell *_moreDataTableViewCell;
    AMPNewFriendObject *_dataModel;
    TBModelStatusHandler *_statusHandler;
    TBModelStatusHandler *_errorHandler;
    NSString *_cursor;
    struct CGPoint _contentOffset;
}

@property(retain, nonatomic) NSString *cursor; // @synthesize cursor=_cursor;
@property(nonatomic) _Bool isNeedLoadInterface; // @synthesize isNeedLoadInterface=_isNeedLoadInterface;
@property(retain, nonatomic) TBModelStatusHandler *errorHandler; // @synthesize errorHandler=_errorHandler;
@property(retain, nonatomic) TBModelStatusHandler *statusHandler; // @synthesize statusHandler=_statusHandler;
@property(nonatomic) struct CGPoint contentOffset; // @synthesize contentOffset=_contentOffset;
@property(retain, nonatomic) AMPNewFriendObject *dataModel; // @synthesize dataModel=_dataModel;
@property(retain, nonatomic) TBMoreDataTableViewCell *moreDataTableViewCell; // @synthesize moreDataTableViewCell=_moreDataTableViewCell;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)buttonTap:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)friendRequestDelete:(id)arg1 success:(_Bool)arg2;
- (void)friendRequestAgree:(id)arg1 friendName:(id)arg2 success:(_Bool)arg3;
- (void)newFriendRequestData:(id)arg1 success:(_Bool)arg2 error:(id)arg3;
- (void)updateNameSuccess:(id)arg1 newName:(id)arg2;
- (void)popSelf;
- (void)agreeFriendRequest;
- (_Bool)isMoreCellWithIndexPath:(id)arg1;
- (_Bool)hasMore;
- (void)reflushStyle;
- (_Bool)tbfestival_isFestivalEnable;
- (void)loadData;
- (void)gotoAddTaoFriends;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
