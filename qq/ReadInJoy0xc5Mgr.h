//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ReadInJoy0xc5Mgr : NSObject
{
}

+ (id)getInstance;
- (void)updateSubscribeTabTipToHasConsumed;
- (void)updateSubscribeTabTipToHasShown;
- (unsigned long long)getMsgTime:(id)arg1;
- (void)updateMsgTime:(unsigned long long)arg1 msgType:(id)arg2;
- (void)cleanSysMsgTipCount;
- (void)updateSysmMsgCountTo:(unsigned long long)arg1;
- (unsigned long long)getSysMsgCount;
- (void)updateBiuTipToHasShown;
- (void)cleanMsgTipCount;
- (void)updateMsgTipCountTo:(unsigned long long)arg1;
- (unsigned long long)getMsgTipCount;
- (int)getStoredMsgCellRedPointType;
- (void)updateStoredMsgCellRedPointType:(int)arg1;
- (void)cleanMsgWithKey:(id)arg1;
- (id)getMsgWithKey:(id)arg1;
- (void)updateMsg:(id)arg1 Withkey:(id)arg2;
- (void)postNotiWithMsg:(id)arg1 key:(id)arg2;
- (unsigned long long)getSubscribeTabMsgSeq;
- (void)updateSubscribeTabMsgSeq:(unsigned long long)arg1;
- (unsigned long long)getSubscribeTabSeq;
- (void)updateSubscribeTabSeq:(unsigned long long)arg1;
- (unsigned long long)getBiuSeq;
- (void)updateBiuSeq:(unsigned long long)arg1;
- (unsigned long long)getMsgSeq;
- (void)updateMsgSeq:(unsigned long long)arg1;
- (id)createXmlForInsertMsgWithOrangeWord:(id)arg1 summary:(id)arg2 uin:(unsigned long long)arg3;
- (void)processRedPointShowFolder:(unsigned int)arg1 reportUin:(unsigned long long)arg2 summary:(id)arg3 orangeWord:(id)arg4 curType:(int)arg5 msgTime:(unsigned long long)arg6 isSubscribeMsg:(_Bool)arg7;
- (void)parseSubMsgType0xc5:(const void *)arg1 DataLen:(int)arg2 subMsgType:(unsigned int)arg3 sourceType:(unsigned long long)arg4;

@end

