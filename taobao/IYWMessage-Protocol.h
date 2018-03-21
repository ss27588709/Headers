//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate, NSDictionary, NSString, YWIMCore, YWMessageBody, YWPerson;

@protocol IYWMessage <NSObject>
@property(readonly, copy, nonatomic) NSString *rootMsgId;
@property(readonly, copy, nonatomic) NSDictionary *controlParameters;
@property(readonly, nonatomic) NSDictionary *extraInfo;
@property(readonly, nonatomic) __weak YWIMCore *coreRef;
@property(readonly, copy, nonatomic) NSDate *modifyDate;
@property(readonly, nonatomic) NSString *ownerName;
@property(readonly, nonatomic) _Bool receiverHasReaded;
@property(readonly, nonatomic) _Bool hasReaded;
@property(readonly, nonatomic) _Bool outgoing;
@property(readonly, nonatomic) NSDate *time;
@property(readonly, nonatomic) YWMessageBody *messageBody;
@property(readonly, nonatomic) long long conversationType;
@property(readonly, copy, nonatomic) NSString *conversationId;
@property(readonly, nonatomic) unsigned long long messageSendStatus;
@property(readonly, nonatomic) YWPerson *messageToPerson;
@property(readonly, nonatomic) YWPerson *messageFromPerson;
@property(readonly, copy, nonatomic) NSString *messageId;
@end
