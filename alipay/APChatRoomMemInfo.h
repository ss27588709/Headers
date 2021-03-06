//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "APCommonItemProtocol-Protocol.h"
#import "APSearchDataProtocol-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface APChatRoomMemInfo : NSObject <APSearchDataProtocol, NSCopying, APCommonItemProtocol>
{
    NSString *_memberId;
    NSString *_userID;
    NSString *_groupId;
    NSString *_account;
    NSString *_name;
    NSString *_nick;
    NSString *_headUrl;
    NSString *_gender;
    NSString *_tag;
    NSString *_role;
    NSString *_operationType;
    NSString *_realName;
    NSString *_groupNickName;
    NSString *_province;
    NSString *_area;
    NSString *_memo;
    NSString *_hintName;
    NSString *_memoName;
    NSString *_pyString;
    NSString *_indexChar;
    NSString *_title;
    NSString *_subTitle;
}

@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *indexChar; // @synthesize indexChar=_indexChar;
@property(retain, nonatomic) NSString *pyString; // @synthesize pyString=_pyString;
@property(retain, nonatomic) NSString *memoName; // @synthesize memoName=_memoName;
@property(retain, nonatomic) NSString *hintName; // @synthesize hintName=_hintName;
@property(retain, nonatomic) NSString *memo; // @synthesize memo=_memo;
@property(retain, nonatomic) NSString *area; // @synthesize area=_area;
@property(retain, nonatomic) NSString *province; // @synthesize province=_province;
@property(retain, nonatomic) NSString *groupNickName; // @synthesize groupNickName=_groupNickName;
@property(retain, nonatomic) NSString *realName; // @synthesize realName=_realName;
@property(retain, nonatomic) NSString *operationType; // @synthesize operationType=_operationType;
@property(retain, nonatomic) NSString *role; // @synthesize role=_role;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(retain, nonatomic) NSString *headUrl; // @synthesize headUrl=_headUrl;
@property(retain, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *account; // @synthesize account=_account;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) NSString *memberId; // @synthesize memberId=_memberId;
- (void).cxx_destruct;
- (_Bool)isStillInTheRoom;
- (id)adaptedToContactInfo;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSimpleProfileRecordPB:(id)arg1 groupId:(id)arg2;
- (id)initWithSyncDict:(id)arg1 groupId:(id)arg2;
- (id)initWithGroupMemVO:(id)arg1 groupId:(id)arg2;
- (id)initWithContactInfo:(id)arg1 groupId:(id)arg2;
- (id)initWithPullChatMessage:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)secondarySearchData;
- (id)primarySearchData;
- (id)iconUrl;
- (id)commonSubTitle;
- (id)commonTitle;
- (id)commonType;
- (id)commonID;
@property(readonly, nonatomic) NSString *displayName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

