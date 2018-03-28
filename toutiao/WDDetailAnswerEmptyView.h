//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WDDetailAnswerEmptyCellDelegate-Protocol.h"

@class NSError, NSString, SSThemedTableView;
@protocol WDDetailAnswerEmptyViewDelegate;

@interface WDDetailAnswerEmptyView : SSThemedView <UITableViewDataSource, UITableViewDelegate, WDDetailAnswerEmptyCellDelegate>
{
    SSThemedTableView *_tableView;
    id <WDDetailAnswerEmptyViewDelegate> _delegate;
    long long _index;
    double _currentOffsetY;
    long long _emptyReason;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long emptyReason; // @synthesize emptyReason=_emptyReason;
@property(nonatomic) double currentOffsetY; // @synthesize currentOffsetY=_currentOffsetY;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) __weak id <WDDetailAnswerEmptyViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SSThemedTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)wd_detailAnswerEmptyCellReloadContent;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setEmptyTypeReason:(long long)arg1 error:(id)arg2;
- (void)startShow;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
