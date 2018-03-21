//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/DBAccountChangedProtocol-Protocol.h>

@class NSString, QQGroupGrayTipsTableOperation;

@interface QQGroupGrayTipsTable : NSObject <DBAccountChangedProtocol>
{
    QQGroupGrayTipsTableOperation *_dbOperation;
    struct CGroupDBMaxMsgIdManager *_msgIdManager;
}

- (_Bool)asyncClearAllOverdueGrayTipsMsg;
- (_Bool)clearAllOverdueGrayTipsMsg;
- (_Bool)asyncUpdateGrayTipsMsgArray:(id)arg1;
- (_Bool)updateGrayTipsMsgArray:(id)arg1;
- (_Bool)insertGrayTipsMsgArray:(id)arg1;
- (id)getGrayTipsMsgOfGroup:(long long)arg1 Type:(int)arg2 Seq:(int)arg3;
- (id)getGrayTipsMsgOfGroup:(long long)arg1 Type:(int)arg2 AscOrder:(_Bool)arg3 HadReaded:(_Bool)arg4;
- (id)getUnreadAndTimeRangeGrayTipsMsgOfGroup:(long long)arg1 typeArray:(id)arg2 ascOrder:(_Bool)arg3 startTime:(long long)arg4 endTime:(long long)arg5;
- (id)getGrayTipsMsgOfGroup:(long long)arg1 TypeArray:(id)arg2 AscOrder:(_Bool)arg3 StartTime:(long long)arg4 EndTime:(long long)arg5;
- (void)onDBChanged:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
