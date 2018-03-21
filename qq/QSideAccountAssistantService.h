//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QQSideAccountDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSTimer;
@protocol IAccountMsgModel;

@interface QSideAccountAssistantService : NSObject <QQSideAccountDelegate>
{
    NSTimer *_timer;
    NSMutableArray *_accounts;
    long long _currentUin;
    long long _tempBindUin;
    int _getMsgInterval;
    _Bool _changingAccount;
    int _switchReason;
    long long _mainUin;
    NSMutableArray *_loginedAccounts;
    double _requestInterval;
    double _lastRequestTime;
    id <IAccountMsgModel> _showingMsg;
    _Bool _bShouldClearUnreadWhenMsgListShow;
    NSMutableDictionary *_partialPackageMsgDic;
    _Bool _bShouldReqUnread;
    int _vaildPurpose;
    NSMutableDictionary *_chatList;
}

+ (id)shareInstance;
+ (id)pairDPCConfig:(id)arg1;
@property(retain, nonatomic) id <IAccountMsgModel> showingMsg; // @synthesize showingMsg=_showingMsg;
@property(retain, nonatomic) NSMutableDictionary *chatList; // @synthesize chatList=_chatList;
@property(nonatomic) int vaildPurpose; // @synthesize vaildPurpose=_vaildPurpose;
@property(nonatomic) long long currentUin; // @synthesize currentUin=_currentUin;
@property(retain, nonatomic) NSMutableArray *accounts; // @synthesize accounts=_accounts;
@property(nonatomic) _Bool changingAccount; // @synthesize changingAccount=_changingAccount;
@property(nonatomic) long long tempBindUin; // @synthesize tempBindUin=_tempBindUin;
- (void)tryToClearUnread;
- (void)logShouldClearUnread;
- (id)getShouldShowModel;
- (void)refreshShowingModelOnDeleLoginedAccount:(long long)arg1;
- (void)refreshShowingModelOnUnbind:(long long)arg1;
- (void)refreshShowingModelOnReceiveLoginedAccontUnreadInfo;
- (void)refreshShowingModelOnReceiveSideAccount:(unsigned long long)arg1;
- (void)refreshShowingModelOnSideAccountMsgRecall:(unsigned long long)arg1;
- (void)clearShowingModel;
- (id)getMsgListShowingModel;
- (void)onDeleLoginedAccount:(id)arg1;
- (void)requestSideAccountFavoriteList:(long long)arg1;
- (void)onGetSideAccountFavoriteList:(id)arg1;
- (void)clearAllUnreadMsgCount;
- (void)clearLoginedAccountUnreadMsgCount:(long long)arg1;
- (id)getLoginedAccounts;
- (void)onGetLoginedAccountUnreadInfo:(id)arg1;
- (void)requestLoginedAccountUnreadInfo:(int)arg1;
- (id)refreshLoginedAccount;
- (_Bool)checkShouldRequsetLoginedAccountUnreadInfo;
- (void)tryToRequsetLoginedAccountUnreadInfo;
- (void)requestLoginedAccountUnreadInfoForTimer;
- (void)startLoginedAccountUnreadInfoRequestTimer:(double)arg1;
- (void)onAccountLogout:(id)arg1;
- (void)handleSideAccountRecallNotify:(id)arg1 bindUin:(unsigned long long)arg2;
- (void)handleSideAccountPush:(char *)arg1 bufferLen:(int)arg2;
- (void)_appWillBecomeForeGround:(id)arg1;
- (void)_appDidEnterBackGround:(id)arg1;
- (void)_actionGetSimpleInfoNotification:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showBindTipsAlertView;
- (void)refreshSideAccountNick:(id)arg1 WithSAccount:(id)arg2;
- (void)handleBindUinMsgReadedConfirm:(int)arg1 cookie:(id)arg2 WithSUin:(long long)arg3;
- (void)handleSideAccountPushIsBind:(_Bool)arg1 uin:(long long)arg2 bindUin:(long long)arg3 time:(unsigned int)arg4;
- (void)handleGetBindMessage:(int)arg1 msgdata:(id)arg2;
- (id)cachePartialPackegeMsgList:(id)arg1 withBindUin:(long long)arg2 syncFlag:(int)arg3;
- (void)handleDeleteAccount:(long long)arg1;
- (void)handleBindAccountRevalidate:(long long)arg1;
- (void)handleBindRelationShip:(int)arg1 msg:(id)arg2 uins:(id)arg3 msgData:(id)arg4;
- (void)handleUnbind:(int)arg1 msg:(id)arg2 msgData:(id)arg3;
- (void)handleBind:(int)arg1 msg:(id)arg2 msgData:(id)arg3;
- (void)markAllSideMsgRead;
- (void)saveSideAccountData;
- (id)loadShowingAccountInfo;
- (id)loadLoginedAccountInfo;
- (id)loadSideAccountInfo;
- (void)saveAccountsInfo;
- (void)saveSideAccountChatListData;
- (void)deleteChatListDataWithBindUin:(long long)arg1;
- (id)loadChatListDataWithBindUin:(long long)arg1;
- (void)clearChatListDataAndSave:(long long)arg1;
- (id)getPatchWithFormat:(id)arg1 fileName:(id)arg2;
- (id)getShowingMsgPath;
- (id)getLoginedAccountInfoPath;
- (id)getSideAccountInfoPath;
- (id)getChatListPathWithBindUin:(long long)arg1;
- (void)reportSideAccountOfflineAfterLogout:(int)arg1 withBindUin:(long long)arg2;
- (void)reportSideAccountCmd:(int)arg1 WithSUin:(long long)arg2;
- (void)reportAllSideAccountOffline;
- (void)getBindSideAccountProfile;
- (void)requestReadedConfirm:(id)arg1 WithBindUin:(long long)arg2;
- (void)requestReadedConfirm:(id)arg1;
- (void)requestSideAccountRelationship;
- (void)changeAccount;
- (_Bool)isAllAccountVaild;
- (_Bool)hasAccount;
- (_Bool)hasValidAccount;
- (_Bool)isAccountValidWithSUin:(long long)arg1;
- (_Bool)requestBindMessage;
- (void)stopGetSideAccountMessage;
- (void)startGetSideAccountsMessageTimer;
- (_Bool)getSideAccountMessage;
- (void)clearAllSideAccount;
- (void)clearSideAccountWithSUin:(long long)arg1;
- (void)updateSideAccountStatus:(int)arg1 WithSUin:(long long)arg2;
- (void)updateSideAccountLastestTime:(int)arg1 WithSUin:(long long)arg2;
- (void)updateSideAccountA2WithSUin:(long long)arg1;
- (void)addSideAccount:(long long)arg1;
- (void)outofUseSideAccountWithSUin:(long long)arg1;
- (void)updateSideAccountChatList:(id)arg1 lastReadInfo:(id)arg2 WithSUin:(long long)arg3;
- (void)updateSideAccountQzoneFeedList:(id)arg1;
- (void)clearSideAccountQzoneSpecialFeedListByUin:(long long)arg1;
- (void)clearSideAccountQzoneFeedListByUin:(long long)arg1;
- (void)recordClearSideAccountFeedMsgTheLastTime:(long long)arg1 forKey:(id)arg2;
- (void)recordClearSideAccountFeedMsgTheLastTime:(long long)arg1;
- (void)recordClearSideAccountFeedMsgUnreadCountTheLastTime:(long long)arg1;
- (void)clearAllSideAccountUnreadMsgCount;
- (void)clearSideAccountUnreadMsgCountInSUin:(long long)arg1;
- (void)clearSideAccountChatFromList:(id)arg1 inSuin:(long long)arg2;
- (void)clearAllSideAccountChatList;
- (void)clearAllMsg;
- (int)unReadSideMsgCountWithSUin:(long long)arg1;
- (int)getUnreadLoginedAccountCount;
- (int)getAllLoginedAccountMsgUnreadCount;
- (int)getLoginedAccountMsgUnreadCount:(long long)arg1;
- (int)getAllSideMsgUnreadCount;
- (int)getSideAccountLastMsgTime:(long long)arg1;
- (_Bool)isFavoritFriend:(long long)arg1 forSUin:(long long)arg2;
- (id)getSideAccountLastUnreadMsgWithSUin:(long long)arg1;
- (id)getSideAccountChatListWithSUin:(long long)arg1;
- (void)gotoAccountWithUin:(long long)arg1 forReason:(int)arg2;
- (void)gotoSAWithUin:(long long)arg1 forReason:(int)arg2 purpose:(int)arg3;
- (void)delayChangeAccount:(id)arg1;
- (void)doLoginSuccessHandle:(id)arg1;
- (int)validBindingSideAccountWithPhone:(id)arg1 andCountry:(id)arg2 andSUin:(long long)arg3;
- (long long)validBindingSideAccount:(id)arg1 pwd:(id)arg2;
- (void)sendAllReadConfirm;
- (void)sendReadConfirmWithSUin:(long long)arg1;
- (void)getBindSideAccountRelationship;
- (_Bool)bindingSideAccount:(long long)arg1;
- (long long)getSideAccountUin;
- (id)getSideAccountWithSUin:(long long)arg1;
- (id)getUnReadSideAccounts;
- (id)getSideAccounts;
- (_Bool)isBindingSideAccountWithSUin:(long long)arg1;
- (void)handleCookieChange:(id)arg1;
- (void)setupNotification;
- (id)refreshLoginedAccounts:(id)arg1 forAll:(_Bool)arg2;
- (void)loadData;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
