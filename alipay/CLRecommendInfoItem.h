//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "APCommonItemProtocol-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDate, NSString;

@interface CLRecommendInfoItem : NSObject <APCommonItemProtocol, NSCopying>
{
    _Bool _quite;
    _Bool _notDisturb;
    _Bool _highlightBiz;
    NSString *_clubId;
    NSString *_clubName;
    NSString *_iconUrl;
    NSString *_bizMemo;
    unsigned long long _unreadCount;
    NSDate *_createTime;
    NSDate *_topDate;
    NSString *_jumpUrl;
    NSString *_markAction;
    NSString *_bizRemind;
}

@property(nonatomic) _Bool highlightBiz; // @synthesize highlightBiz=_highlightBiz;
@property(retain, nonatomic) NSString *bizRemind; // @synthesize bizRemind=_bizRemind;
@property(nonatomic) _Bool notDisturb; // @synthesize notDisturb=_notDisturb;
@property(retain, nonatomic) NSString *markAction; // @synthesize markAction=_markAction;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(retain, nonatomic) NSDate *topDate; // @synthesize topDate=_topDate;
@property(retain, nonatomic) NSDate *createTime; // @synthesize createTime=_createTime;
@property(nonatomic) _Bool quite; // @synthesize quite=_quite;
@property(nonatomic) unsigned long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property(retain, nonatomic) NSString *bizMemo; // @synthesize bizMemo=_bizMemo;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *clubName; // @synthesize clubName=_clubName;
@property(retain, nonatomic) NSString *clubId; // @synthesize clubId=_clubId;
- (void).cxx_destruct;
- (id)actionUrl;
- (id)commonSubTitle;
- (id)commonType;
- (id)commonTitle;
- (id)commonID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDic:(id)arg1;
- (id)initWithAPContact:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

