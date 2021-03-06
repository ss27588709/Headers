//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"
#import "TTVArticleProtocol-Protocol.h"

@class Article, ArticleDetail, NSArray, NSDictionary, NSNumber, NSString, TTAdVideoRelateAdModel, TTVADCell, TTVTopWebCell, TTVVideoCell;
@protocol TTAdFeedModel;

@interface TTVFeedItem : GPBMessage <TTVArticleProtocol, NSSecureCoding, NSCopying>
{
}

+ (id)descriptor;
+ (id)FeedItemListWithFeedItemStructList:(id)arg1;
+ (void)configAdWithType:(unsigned long long)arg1 adCell:(id)arg2 content:(id)arg3;
+ (id)FeedItemWithContentStruct:(id)arg1;
+ (unsigned long long)adTypeWithWithContentStruct:(id)arg1;
+ (id)FeedItemWithTopWebCellStruct:(id)arg1;
+ (void)setVideoBusinessTypeWithFeedItem:(id)arg1 isVideo:(_Bool)arg2 adType:(unsigned long long)arg3;
+ (_Bool)supportsSecureCoding;
- (id)mointerInfo;
- (_Bool)couldAutoPlay;
- (_Bool)couldContinueAutoPlay;
- (_Bool)autoPlayServerEnabled;
- (_Bool)isAutoPlayFlagEnabled;
- (_Bool)isVideoPGCCard;
- (_Bool)isPlayInDetailView;
- (_Bool)isListShowPlayVideoButton;
- (id)rawAdData;
@property(readonly, nonatomic) NSArray *commoditys;
@property(readonly, copy, nonatomic) NSString *adIDStr;
@property(copy, nonatomic) NSString *logExtra;
@property(readonly, nonatomic) NSDictionary *novelData;
@property(readonly, nonatomic) NSDictionary *logPbDic;
- (id)ttv_convertedArticle;
- (void)updateFollowed:(_Bool)arg1;
- (_Bool)isImageSubject;
- (id)managedObjectContext;
- (_Bool)isContentFetchedWithForceLoadNative:(_Bool)arg1;
- (_Bool)isVideoSubject;
- (_Bool)isContentFetched;
- (_Bool)showExtendLink;
@property(readonly, nonatomic) NSDictionary *h5Extra;
@property(readonly, retain, nonatomic) id <TTAdFeedModel> adModel;
- (id)videoIDOfVideoDetailInfo;
- (_Bool)isVideoUrlValid;
- (_Bool)hasVideoPlayInfoUrl;
- (_Bool)hasVideoSubjectID;
- (id)relatedLogExtra;
- (_Bool)directPlay;
- (_Bool)shouldDirectShowVideoSubject;
- (id)videoSubjectID;
- (id)zzCommentsIDString;
- (_Bool)isVideoSourceUGCVideoOrHuoShan;
- (_Bool)isVideoSourceHuoShan;
- (_Bool)isVideoSourceUGCVideo;
@property(readonly, retain, nonatomic) NSString *articleURLString;
- (id)articleDetailContent;
- (id)firstZzCommentMediaId;
@property(readonly, nonatomic) NSString *displayURL;
@property(readonly, retain, nonatomic) NSString *shareURL;
@property(readonly, copy, nonatomic) NSString *sourceAvatar;
@property(readonly, nonatomic) unsigned long long preloadWeb;
@property(readonly, retain, nonatomic) NSNumber *banDigg;
@property(readonly, retain, nonatomic) NSNumber *banBury;
@property(nonatomic) _Bool userDigg;
@property(nonatomic) _Bool userBury;
@property(nonatomic) int diggCount;
@property(nonatomic) int buryCount;
@property(readonly, nonatomic) double articlePublishTime;
@property(readonly, retain, nonatomic) NSNumber *isOriginal;
@property(readonly, nonatomic) ArticleDetail *detail;
- (void)setDetail:(id)arg1;
@property(readonly, copy, nonatomic) NSString *mediaUserID;
@property(readonly, nonatomic) NSString *source;
@property(readonly, retain, nonatomic) TTAdVideoRelateAdModel *videoAdExtra;
@property(readonly, retain, nonatomic) NSArray *zzComments;
@property(readonly, nonatomic) NSDictionary *detailUserInfo;
@property(readonly, nonatomic) NSDictionary *userInfo;
@property(readonly, nonatomic) NSDictionary *detailMediaInfo;
@property(readonly, retain, nonatomic) NSDictionary *mediaInfo;
@property(readonly, nonatomic) _Bool hasImage;
@property(readonly, nonatomic) _Bool banComment;
@property(readonly, retain, nonatomic) NSDictionary *videoExtendLink;
@property(readonly, retain, nonatomic) NSNumber *videoDuration;
@property(readonly, retain, nonatomic) NSDictionary *videoPlayInfo;
@property(readonly, retain, nonatomic) NSDictionary *largeImageDict;
@property(readonly, retain, nonatomic) NSString *title;
@property(readonly, retain, nonatomic) NSString *videoID;
@property(readonly, copy, nonatomic) NSString *videoLocalURL;
@property(readonly, nonatomic) _Bool detailShowPortrait;
@property(readonly, retain, nonatomic) NSDictionary *videoDetailInfo;
@property(readonly, nonatomic) NSDictionary *relatedVideoExtraInfo;
@property(readonly, retain, nonatomic) NSDictionary *comment;
@property(readonly, nonatomic) NSNumber *detailVideoProportion;
@property(nonatomic) int commentCount;
@property(nonatomic) _Bool userRepined;
@property(readonly, retain, nonatomic) NSNumber *articleDeleted;
@property(readonly, retain, nonatomic) NSNumber *videoType;
@property(readonly, retain, nonatomic) NSNumber *natantLevel;
@property(readonly, nonatomic) int articleType;
@property(readonly, retain, nonatomic) NSNumber *aggrType;
@property(readonly, nonatomic) NSNumber *groupFlags;
@property(readonly, copy, nonatomic) NSString *itemID;
- (id)groupModel;
@property(readonly, nonatomic) long long uniqueID;
- (void)setExtend:(id)arg1;
- (id)extend;
@property(retain, nonatomic) Article *savedConvertedArticle;
- (_Bool)isPlayInDetailView;
- (_Bool)isVideoSubject;
- (_Bool)isVideoAd;
- (_Bool)isPicAd;
- (_Bool)isAd;
- (_Bool)isNormalVideo;
- (double)expireSeconds;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)videoUserInfo;
- (id)article;
- (id)adInfo;
- (id)uniqueIDStr;
- (id)openUrl;
- (_Bool)isAppAd;
- (id)cell;
- (_Bool)hideIfExists;
- (id)adIDNumber;
- (_Bool)hasADID;
- (id)adID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) _Bool isNewFromRemote;
@property(nonatomic) _Bool hasBeenSeen;
@property(nonatomic) double requestTime;
@property(nonatomic) _Bool notInteresting;
@property(nonatomic) _Bool hasRead;

// Remaining properties
@property(copy, nonatomic) NSString *activity; // @dynamic activity;
@property(retain, nonatomic) TTVADCell *adCell; // @dynamic adCell;
@property(nonatomic) double behotTime; // @dynamic behotTime;
@property(copy, nonatomic) NSString *cellCtrls; // @dynamic cellCtrls;
@property(nonatomic) int cellFlag; // @dynamic cellFlag;
@property(nonatomic) int cellType; // @dynamic cellType;
@property(nonatomic) long long cursor; // @dynamic cursor;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasAdCell; // @dynamic hasAdCell;
@property(nonatomic) _Bool hasVideoCell; // @dynamic hasVideoCell;
@property(nonatomic) _Bool hasWebCell; // @dynamic hasWebCell;
@property(copy, nonatomic) NSString *logPb; // @dynamic logPb;
@property(nonatomic) _Bool needClientImprRecycle; // @dynamic needClientImprRecycle;
@property(readonly) Class superclass;
@property(nonatomic) int videoBusinessType; // @dynamic videoBusinessType;
@property(retain, nonatomic) TTVVideoCell *videoCell; // @dynamic videoCell;
@property(nonatomic) int videoChannelAdType; // @dynamic videoChannelAdType;
@property(retain, nonatomic) TTVTopWebCell *webCell; // @dynamic webCell;

@end

