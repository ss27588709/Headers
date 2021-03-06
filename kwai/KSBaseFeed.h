//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class KS_ext_params, KS_location, KS_user_info, NSArray, NSDate, NSDictionary, NSNumber, NSString;

@interface KSBaseFeed : NSObject <NSCoding>
{
    KS_ext_params *_ext_params;
    NSArray *_cover_thumbnail_urls;
    NSArray *_jpegCoverThumbnailUrls;
    NSArray *_thumbnail_urls;
    NSString *_thumbnail_url;
    NSArray *_override_cover_thumbnail_urls;
    NSDictionary *_override_cover_size;
    NSNumber *_type;
    KS_user_info *_user;
    NSNumber *_like_count;
    NSNumber *_timestamp;
    NSDate *_date;
    NSString *_timeString;
    id _displayTime;
    NSString *_caption;
    NSString *_exp_tag;
    NSDictionary *_forward_stats_params;
    NSString *_reco_reason;
    KS_location *_location;
    NSString *_llsid;
    NSString *_cover_preview;
    NSString *_share_info;
    unsigned long long _relationType;
    CDUnknownBlockType _getJpegCoverUrlBlock;
    NSString *_disclaimerMessage;
}

+ (id)mj_objectClassInArray;
+ (Class)mj_realClassWithKeyValues:(id)arg1;
+ (id)mj_ignoredCodingPropertyNames;
+ (id)mj_ignoredPropertyNames;
+ (_Bool)mj_conformsToCodingProtocolValidation;
+ (id)llsidWithExpTag:(id)arg1;
+ (id)uniqueFeeds:(id)arg1 notInFeedList:(id)arg2;
+ (double)maxCoverHeightWidthRatio;
@property(copy, nonatomic) NSString *disclaimerMessage; // @synthesize disclaimerMessage=_disclaimerMessage;
@property(copy, nonatomic) CDUnknownBlockType getJpegCoverUrlBlock; // @synthesize getJpegCoverUrlBlock=_getJpegCoverUrlBlock;
@property(nonatomic) unsigned long long relationType; // @synthesize relationType=_relationType;
@property(retain, nonatomic) NSString *share_info; // @synthesize share_info=_share_info;
@property(retain, nonatomic) NSString *cover_preview; // @synthesize cover_preview=_cover_preview;
@property(retain, nonatomic) NSString *llsid; // @synthesize llsid=_llsid;
@property(retain, nonatomic) KS_location *location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *reco_reason; // @synthesize reco_reason=_reco_reason;
@property(retain, nonatomic) NSDictionary *forward_stats_params; // @synthesize forward_stats_params=_forward_stats_params;
@property(retain, nonatomic) NSString *exp_tag; // @synthesize exp_tag=_exp_tag;
@property(retain, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(retain, nonatomic) id displayTime; // @synthesize displayTime=_displayTime;
@property(retain, nonatomic) NSString *timeString; // @synthesize timeString=_timeString;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSNumber *like_count; // @synthesize like_count=_like_count;
@property(retain, nonatomic) KS_user_info *user; // @synthesize user=_user;
@property(retain, nonatomic) NSNumber *type; // @synthesize type=_type;
@property(retain, nonatomic) NSDictionary *override_cover_size; // @synthesize override_cover_size=_override_cover_size;
@property(retain, nonatomic) NSArray *override_cover_thumbnail_urls; // @synthesize override_cover_thumbnail_urls=_override_cover_thumbnail_urls;
@property(retain, nonatomic) NSString *thumbnail_url; // @synthesize thumbnail_url=_thumbnail_url;
@property(retain, nonatomic) NSArray *thumbnail_urls; // @synthesize thumbnail_urls=_thumbnail_urls;
@property(retain, nonatomic) NSArray *jpegCoverThumbnailUrls; // @synthesize jpegCoverThumbnailUrls=_jpegCoverThumbnailUrls;
@property(retain, nonatomic) NSArray *cover_thumbnail_urls; // @synthesize cover_thumbnail_urls=_cover_thumbnail_urls;
@property(retain, nonatomic) KS_ext_params *ext_params; // @synthesize ext_params=_ext_params;
- (void).cxx_destruct;
- (_Bool)isValid;
- (id)overrideThumbnailUrl;
- (id)overrideThumbnailUrls;
- (_Bool)hasOverrideCover;
- (struct CGSize)sizeThatFitsWidth:(double)arg1;
- (struct CGSize)sizeForPlaceholder;
- (struct CGSize)sizeForWaterFlow;
- (id)feedId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)ks_displayTime;
- (id)ks_backgroundColor;
- (void)ks_setFeedUssid:(id)arg1;
- (id)ks_feedUssid;
- (id)feedLogNode;
- (_Bool)preferFullScreenDisplayWithEdgeInsets:(struct UIEdgeInsets)arg1;
- (id)coverPreviewCachedkey;
- (id)thumbnailPageURL;
- (void)ks_cancelPreloadResource;
- (void)ks_startPreloadResource;
- (_Bool)ks_hasCacheOfResource;
- (struct CGSize)coverSizeWithWidth:(double)arg1;
- (id)placeholderImageCachedKey;
- (id)thumbnailCachedKey;

@end

