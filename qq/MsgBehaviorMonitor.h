//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface MsgBehaviorMonitor : NSObject
{
    NSString *_chatUIN;
    int _chatType;
    int _friendStatus;
    int _clientType;
    int _entryType;
    int _picEntryType;
    int _msgType;
    _Bool _isFirstMsg;
    int _size;
}

- (void)actionSendMsgWithLength:(unsigned long long)arg1 bodyType:(int)arg2;
- (void)doReportLog;
- (void)actionOpenAIOWithChatViewController:(id)arg1;
- (void)actionChatWithUIN:(id)arg1 chatType:(int)arg2;
- (void)dealloc;
- (id)init;

@end

