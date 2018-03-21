//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet, QQLockDictionary, QQOIDBSSORequest, WerewolfInvitationViewController;

@interface QQGroupGameManager : NSObject
{
    QQOIDBSSORequest *_enterRoomRequest;
    QQOIDBSSORequest *_leaveRoomRequest;
    QQOIDBSSORequest *_inviteInfoRequest;
    QQOIDBSSORequest *_enterInviteRequest;
    QQOIDBSSORequest *_leaveInviteRequest;
    QQLockDictionary *_rolesInfo;
    NSMutableSet *_judgeUins;
    _Bool _isAnotherGame;
    WerewolfInvitationViewController *_inviteViewController;
}

+ (void)excludeInvitedGList:(id)arg1 isGroup:(_Bool)arg2;
+ (id)parserHotChatModel:(struct WifiPOIInfo *)arg1;
+ (id)sharedInstance;
@property(nonatomic) _Bool isAnotherGame; // @synthesize isAnotherGame=_isAnotherGame;
@property(nonatomic) __weak WerewolfInvitationViewController *inviteViewController; // @synthesize inviteViewController=_inviteViewController;
- (void).cxx_destruct;
- (_Bool)isMyFriendUin:(id)arg1;
- (id)shuffleArray:(id)arg1;
- (id)shuffleNumbersCount:(unsigned long long)arg1 maxValue:(unsigned long long)arg2;
- (id)getfriendNick:(id)arg1;
- (id)inviteFriendListCat;
- (id)inviteGroupMemberCatWithFilter:(id)arg1;
- (id)inviteListCat:(id)arg1;
- (void)setGameRoomPlayerRoles:(id)arg1 ofGroupCode:(unsigned long long)arg2;
- (void)leaveRoomWithGroupCode:(unsigned long long)arg1;
- (void)_gotoInviteViewControllerWithParam:(id)arg1;
- (void)_enterInvateReqWithId:(id)arg1 param:(id)arg2;
- (void)leaveInvateWithId:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)enterInvitationWithId:(id)arg1 param:(id)arg2;
- (void)requestInvite;
- (void)requestInviteInfoIfNeed;
- (id)_inviteInfoSaveKey;
- (_Bool)isJudgeOfUin:(id)arg1;
- (void)addJudge:(id)arg1;
- (void)sendInvitationRoomPushData:(id)arg1 toGameOfType:(unsigned long long)arg2;
- (void)sendGameRoomPushData:(id)arg1 toGameOfType:(unsigned long long)arg2;
- (void)leaveRoomWithGroupCode:(unsigned long long)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (id)roleOfPlayer:(unsigned long long)arg1 inGroup:(unsigned long long)arg2;
- (void)enterRoomWithInviteId:(id)arg1 roomType:(int)arg2 zoneId:(int)arg3 completeBlock:(CDUnknownBlockType)arg4;
- (void)enterRoomWithParam:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)enterRoomWithInviteId:(id)arg1 roomType:(int)arg2 zoneId:(int)arg3;
- (void)enterRandomRoomWithType:(int)arg1 zoneId:(int)arg2;
- (void)accountDidLogout;
- (id)init;

@end
