//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/DBAccountChangedProtocol-Protocol.h>
#import <QQMainProject/DBAsyncCallbackProtocol-Protocol.h>
#import <QQMainProject/IQQDBOperationBase-Protocol.h>

@class NSString;

@interface ReadInJoyModelBase : NSObject <IQQDBOperationBase, DBAsyncCallbackProtocol, DBAccountChangedProtocol>
{
    _Bool _tableCreated;
}

+ (_Bool)supportMultiTable;
+ (id)tableName;
+ (id)createTableString;
- (id)packBlock:(CDUnknownBlockType)arg1;
- (id)specificCreateTableSQLCommand;
- (id)specificTableName;
- (id)saveEntityList:(id)arg1 deletePrevious:(_Bool)arg2 toDb:(id)arg3;
- (void)onDbAsyncCallback:(id)arg1 userdata:(id)arg2 workID:(int)arg3;
- (unsigned long long)getTableSign;
- (_Bool)updateEntityList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)saveEntityList:(id)arg1 deletePrevious:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)createTableIfNeededInDb:(id)arg1;
- (void)onDBChanged:(id)arg1;
- (void)createTableIfNeeded;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
