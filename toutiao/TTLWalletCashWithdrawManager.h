//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSDateFormatter, NSMutableArray, NSString, TTLWalletCashWithdrawService;

@interface TTLWalletCashWithdrawManager : NSObject <UITableViewDelegate, UITableViewDataSource>
{
    TTLWalletCashWithdrawService *_withdrawService;
    long long _count;
    long long _maxTime;
    NSDateFormatter *_formatter;
    NSMutableArray *_dataSource;
}

@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSDateFormatter *formatter; // @synthesize formatter=_formatter;
@property(nonatomic) long long maxTime; // @synthesize maxTime=_maxTime;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) TTLWalletCashWithdrawService *withdrawService; // @synthesize withdrawService=_withdrawService;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)featchWithdrawRecord:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
