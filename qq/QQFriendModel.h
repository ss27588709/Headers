//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

#import <QQMainProject/IQQModelLabel-Protocol.h>
#import <QQMainProject/NSCopying-Protocol.h>
#import <QQMainProject/NSMutableCopying-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;

@interface QQFriendModel : QQModel <IQQModelLabel, NSCopying, NSMutableCopying>
{
    NSString *_fuin;
    NSString *_nick;
    NSString *_dateNick;
    NSString *_sig;
    NSString *_nearFriendInfo;
    int _status;
    int _memberLevel;
    int _supportVideo;
    int _head;
    int _groupId;
    int _priority;
    BOOL _sqq;
    BOOL _QQRobert;
    BOOL _cSpecialFlag;
    BOOL _isMsfUser;
    BOOL _locationAbility;
    int _lastLoginType;
    int _lastLoginClient;
    NSString *_mappingAccount;
    NSString *_remarkPinyin;
    NSString *_remarkFullPinyin;
    NSArray *_remarkFullPinyinLocation;
    NSString *_nickPinyin;
    NSString *_nickFullPinyin;
    NSArray *_nickFullPinyinLocation;
    NSString *_sortkeyStr;
    struct _NSRange _matchRange;
    _Bool _isMatchUIN;
    _Bool _isMatchRealNick;
    _Bool _isRemark;
    _Bool _isEnglishName;
    NSString *_realNickName;
    NSMutableDictionary *_vipInfoDic;
    int _topIdentityInfo;
    NSString *_ringId;
    _Bool _isFriendMask;
    long long _faceAddonId;
    unsigned int _vipFontId;
    unsigned int _colorRingId;
    double _lastGetOnlineInfoTime;
    double _maxGetOnlineInfoInterval;
    _Bool _specialCareZone;
    _Bool _isSpecialCareOpen;
    unsigned int _abiFlag;
    int _network;
    int _eIconType;
    int _ctType;
    _Bool _bNotShowNetWorkIcon;
    _Bool _isWifi;
    _Bool _holdFlag;
    _Bool _recommendHoldFlag;
    unsigned long long _fontIdUpdateTime;
    unsigned long long _pendantIdUpdateTime;
    unsigned long long _magicFontOpenFlagUpdateTime;
    unsigned int _gameAppId;
    unsigned int _gameLastLoginTime;
    _Bool _isQimFriend;
    int _xo;
    _Bool _needShipAnimation;
    int sex;
    int age;
    unsigned int _praiseHotLevel;
    unsigned int _chatHotLevel;
    unsigned int _closeLevel;
    unsigned int _praiseHotDays;
    unsigned int _chatHotDays;
    unsigned int _closeDays;
    unsigned int _qzoneLevel;
    unsigned int _qzoneDays;
    unsigned int _loverFlag;
    unsigned int _gameIconShowFlag;
    unsigned int _gameRank;
    unsigned int _avatarId;
    NSString *terminalDescription;
    NSString *_sortKeyStr;
    unsigned long long _dstUin;
    unsigned long long _lastChatTime;
    unsigned long long _lastPraiseTime;
    unsigned long long _lastQzoneTime;
    unsigned long long _avatarIdUpdateTime;
    NSString *_campusNick;
    NSString *_qdMasterUin;
}

+ (int)getPriority:(int)arg1 vipType:(int)arg2 lastLoginType:(int)arg3;
+ (int)convertFriendInfoStatus:(unsigned char)arg1 itermType:(int)arg2;
+ (void)setSearchModelPriority:(int)arg1;
+ (id)getNetworkWording:(int)arg1;
+ (int)convertFriendInfoIconToNetStatus:(int)arg1;
+ (int)convertFriendTerminalType:(unsigned char)arg1 itermType:(int)arg2;
@property(retain, nonatomic) NSString *qdMasterUin; // @synthesize qdMasterUin=_qdMasterUin;
@property(retain, nonatomic) NSString *campusNick; // @synthesize campusNick=_campusNick;
@property(nonatomic) unsigned long long avatarIdUpdateTime; // @synthesize avatarIdUpdateTime=_avatarIdUpdateTime;
@property(nonatomic) unsigned int avatarId; // @synthesize avatarId=_avatarId;
@property(nonatomic) _Bool isQimFriend; // @synthesize isQimFriend=_isQimFriend;
@property(nonatomic) unsigned int gameRank; // @synthesize gameRank=_gameRank;
@property(nonatomic) unsigned int gameIconShowFlag; // @synthesize gameIconShowFlag=_gameIconShowFlag;
@property(nonatomic) unsigned int gameLastLoginTime; // @synthesize gameLastLoginTime=_gameLastLoginTime;
@property(nonatomic) unsigned int gameAppId; // @synthesize gameAppId=_gameAppId;
@property(nonatomic) unsigned long long magicFontOpenFlagUpdateTime; // @synthesize magicFontOpenFlagUpdateTime=_magicFontOpenFlagUpdateTime;
@property(nonatomic) unsigned long long pendantIdUpdateTime; // @synthesize pendantIdUpdateTime=_pendantIdUpdateTime;
@property(nonatomic) unsigned long long fontIdUpdateTime; // @synthesize fontIdUpdateTime=_fontIdUpdateTime;
@property(nonatomic) double maxGetOnlineInfoInterval; // @synthesize maxGetOnlineInfoInterval=_maxGetOnlineInfoInterval;
@property(nonatomic) double lastGetOnlineInfoTime; // @synthesize lastGetOnlineInfoTime=_lastGetOnlineInfoTime;
@property(nonatomic) _Bool recommendHoldFlag; // @synthesize recommendHoldFlag=_recommendHoldFlag;
@property(nonatomic) _Bool holdFlag; // @synthesize holdFlag=_holdFlag;
@property(nonatomic) _Bool isFriendMask; // @synthesize isFriendMask=_isFriendMask;
@property(nonatomic) _Bool isWifi; // @synthesize isWifi=_isWifi;
@property(nonatomic) _Bool bNotShowNetWorkIcon; // @synthesize bNotShowNetWorkIcon=_bNotShowNetWorkIcon;
@property(nonatomic) int ctType; // @synthesize ctType=_ctType;
@property(nonatomic) int eIconType; // @synthesize eIconType=_eIconType;
@property(nonatomic) int network; // @synthesize network=_network;
@property(nonatomic) unsigned int colorRingId; // @synthesize colorRingId=_colorRingId;
@property(nonatomic) unsigned int vipFontId; // @synthesize vipFontId=_vipFontId;
@property(nonatomic) long long faceAddonId; // @synthesize faceAddonId=_faceAddonId;
@property(nonatomic) unsigned int abiFlag; // @synthesize abiFlag=_abiFlag;
@property(nonatomic) _Bool needShipAnimation; // @synthesize needShipAnimation=_needShipAnimation;
@property(nonatomic) unsigned int loverFlag; // @synthesize loverFlag=_loverFlag;
@property(nonatomic) unsigned long long lastQzoneTime; // @synthesize lastQzoneTime=_lastQzoneTime;
@property(nonatomic) unsigned int qzoneDays; // @synthesize qzoneDays=_qzoneDays;
@property(nonatomic) unsigned int qzoneLevel; // @synthesize qzoneLevel=_qzoneLevel;
@property(nonatomic) unsigned long long lastPraiseTime; // @synthesize lastPraiseTime=_lastPraiseTime;
@property(nonatomic) unsigned long long lastChatTime; // @synthesize lastChatTime=_lastChatTime;
@property(nonatomic) unsigned int closeDays; // @synthesize closeDays=_closeDays;
@property(nonatomic) unsigned int chatHotDays; // @synthesize chatHotDays=_chatHotDays;
@property(nonatomic) unsigned int praiseHotDays; // @synthesize praiseHotDays=_praiseHotDays;
@property(nonatomic) unsigned int closeLevel; // @synthesize closeLevel=_closeLevel;
@property(nonatomic) unsigned int chatHotLevel; // @synthesize chatHotLevel=_chatHotLevel;
@property(nonatomic) unsigned int praiseHotLevel; // @synthesize praiseHotLevel=_praiseHotLevel;
@property(nonatomic) unsigned long long dstUin; // @synthesize dstUin=_dstUin;
@property(nonatomic) _Bool isSpecialCareOpen; // @synthesize isSpecialCareOpen=_isSpecialCareOpen;
@property(nonatomic) _Bool specialCareZone; // @synthesize specialCareZone=_specialCareZone;
@property(retain, nonatomic) NSString *ringId; // @synthesize ringId=_ringId;
@property _Bool isMatchRealNick; // @synthesize isMatchRealNick=_isMatchRealNick;
@property _Bool isMatchUIN; // @synthesize isMatchUIN=_isMatchUIN;
@property(nonatomic) struct _NSRange matchRange; // @synthesize matchRange=_matchRange;
@property(nonatomic) int topIdentityInfo; // @synthesize topIdentityInfo=_topIdentityInfo;
@property(retain, nonatomic) NSMutableDictionary *vipInfoDic; // @synthesize vipInfoDic=_vipInfoDic;
@property(copy, nonatomic) NSString *realNickName; // @synthesize realNickName=_realNickName;
@property(nonatomic) _Bool isEnglishName; // @synthesize isEnglishName=_isEnglishName;
@property(nonatomic) int priority; // @synthesize priority=_priority;
@property(nonatomic) _Bool isRemark; // @synthesize isRemark=_isRemark;
@property(retain, nonatomic, getter=getSortkeyStr) NSString *sortKeyStr; // @synthesize sortKeyStr=_sortKeyStr;
@property(retain, nonatomic) NSArray *nickFullPinyinLocation; // @synthesize nickFullPinyinLocation=_nickFullPinyinLocation;
@property(retain, nonatomic) NSArray *remarkFullPinyinLocation; // @synthesize remarkFullPinyinLocation=_remarkFullPinyinLocation;
@property(nonatomic) int lastLoginClient; // @synthesize lastLoginClient=_lastLoginClient;
@property(nonatomic) int lastLoginType; // @synthesize lastLoginType=_lastLoginType;
@property(nonatomic) BOOL locationAbility; // @synthesize locationAbility=_locationAbility;
@property(nonatomic) BOOL isMsfUser; // @synthesize isMsfUser=_isMsfUser;
@property(nonatomic) BOOL cSpecialFlag; // @synthesize cSpecialFlag=_cSpecialFlag;
@property(nonatomic) BOOL QQRobert; // @synthesize QQRobert=_QQRobert;
@property(retain, nonatomic) NSString *mappingAccount; // @synthesize mappingAccount=_mappingAccount;
@property(nonatomic) BOOL sqq; // @synthesize sqq=_sqq;
@property(copy, nonatomic) NSString *nearFriendInfo; // @synthesize nearFriendInfo=_nearFriendInfo;
@property(copy, nonatomic) NSString *sig; // @synthesize sig=_sig;
@property(nonatomic) int groupId; // @synthesize groupId=_groupId;
@property(nonatomic) int head; // @synthesize head=_head;
@property(nonatomic) int supportVideo; // @synthesize supportVideo=_supportVideo;
@property(nonatomic) int memberLevel; // @synthesize memberLevel=_memberLevel;
@property(nonatomic) int status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *dateNick; // @synthesize dateNick=_dateNick;
@property(copy, nonatomic) NSString *fuin; // @synthesize fuin=_fuin;
@property(retain, nonatomic) NSString *terminalDescription; // @synthesize terminalDescription;
@property(retain, nonatomic, getter=getNickFullPinyin) NSString *nickFullPinyin; // @synthesize nickFullPinyin=_nickFullPinyin;
@property(retain, nonatomic, getter=getNickPinyin) NSString *nickPinyin; // @synthesize nickPinyin=_nickPinyin;
@property(retain, nonatomic, getter=getRemarkFullPinyin) NSString *remarkFullPinyin; // @synthesize remarkFullPinyin=_remarkFullPinyin;
@property(retain, nonatomic, getter=getRemarkPinyin) NSString *remarkPinyin; // @synthesize remarkPinyin=_remarkPinyin;
@property int age; // @synthesize age;
@property int sex; // @synthesize sex;
- (int)getLastLoginClientType;
- (long long)compareFriendModel:(id)arg1;
- (long long)compareByNick:(id)arg1;
- (long long)comparebyPriorityAndNick:(id)arg1;
- (int)getVipPriority:(id)arg1;
- (_Bool)isQidianMaster;
- (long long)compareByStatusDesc:(id)arg1;
- (_Bool)isEnterpriseQQ;
- (_Bool)isMatchString:(id)arg1;
- (_Bool)isNickAreRemark;
- (_Bool)isString:(id)arg1 matchString:(id)arg2;
- (int)GetValue:(id)arg1;
- (id)getNetStateVoiceStr;
- (id)getNetWorkIconTypeImageForQCall:(_Bool)arg1;
- (id)getNetWorkIconTypeImage:(_Bool)arg1;
- (id)getIconTypeString;
- (id)getNetWorkStatusImage:(_Bool)arg1;
- (id)getStatusImage:(int)arg1 highlighted:(_Bool)arg2;
- (long long)compareLabel:(id)arg1;
- (int)getSearchModelPriority;
- (int)getSearchModelType;
- (_Bool)isVip;
- (_Bool)isSuperVip;
- (struct _NSRange)getModelLabelMatchRange;
- (id)getShowAccount;
- (id)getRemarkLabel;
- (id)getModelLabel;
- (id)allPropertMD5;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)setMagicFontOpenFlag:(_Bool)arg1;
- (_Bool)isMagicFontOpen;
- (long long)compareByTimeAsc:(id)arg1;
@property(copy, nonatomic) NSString *nick;
- (id)init:(id)arg1:(id)arg2:(int)arg3:(int)arg4:(int)arg5:(id)arg6:(id)arg7;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1 withPinyin:(_Bool)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 withPinyin:(_Bool)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)showEmojiEgg;
- (id)getNetWorkStringForAIO;
- (id)getPhoneDesscriptionForAIOWhenNetSwitchOff;
- (id)getPhoneDescription:(int)arg1 isIphone:(_Bool)arg2;
- (id)getStrWithStatus;
- (int)getNetWorkStatueForQcallAndCard;
- (id)getNetWorkIconForFriendListForQCall:(_Bool)arg1;
- (id)getNetWorkIconForFriendList:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
