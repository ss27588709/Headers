//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/UITableViewDataSource-Protocol.h>
#import <QQMainProject/UITableViewDelegate-Protocol.h>

@class NSMutableArray, NSString, QQStoryMainPageTableView;

@interface QQStoryMainPageTableViewData : NSObject <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _scrollToEnd;
    _Bool _enableHeightCache;
    NSMutableArray *_dataSource;
    QQStoryMainPageTableView *_tableView;
}

@property(nonatomic, getter=isEnableHeightCache) _Bool enableHeightCache; // @synthesize enableHeightCache=_enableHeightCache;
@property(nonatomic, getter=isScrollToEnd) _Bool scrollToEnd; // @synthesize scrollToEnd=_scrollToEnd;
@property(nonatomic) __weak QQStoryMainPageTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 selfExpandCellForModel:(id)arg2;
- (id)tableView:(id)arg1 storyTitleCellForModel:(id)arg2;
- (id)tableView:(id)arg1 videoCellForModel:(id)arg2;
- (id)tableView:(id)arg1 timeCellForModel:(id)arg2;
- (void)reportRecomendData:(id)arg1;
- (id)tableView:(id)arg1 feedCellForStoryModel:(id)arg2;
- (id)tableView:(id)arg1 greetingsCellForModel:(id)arg2;
- (id)tableView:(id)arg1 memoryCellForModel:(id)arg2;
- (id)tableView:(id)arg1 selfStoryCellForModel:(id)arg2;
- (id)tableView:(id)arg1 unreadMessageCellForModel:(id)arg2;
- (id)tableView:(id)arg1 storyEmptyPageCellForModel:(id)arg2;
- (id)tableView:(id)arg1 interactiveCellForModel:(id)arg2;
- (id)createDefaultTableViewCell:(id)arg1;
- (id)createTableViewCell:(id)arg1 WithModel:(id)arg2;
- (void)analyseISScrollToEnd:(id)arg1;
- (double)getInteractiveCellHeight:(id)arg1;
- (id)getModelFromDataSource:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

