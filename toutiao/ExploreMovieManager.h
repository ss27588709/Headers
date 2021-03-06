//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, TTHttpTask, TTVideoURLRequestInfo;
@protocol ExploreMovieManagerDelegate;

@interface ExploreMovieManager : NSObject
{
    _Bool _isFeedUrl;
    int _retryCount;
    id <ExploreMovieManagerDelegate> _delegate;
    NSString *_videoRequestUrl;
    TTHttpTask *_videoUrlRequest;
    TTVideoURLRequestInfo *_requestInfo;
    NSMutableDictionary *_retryErrorDict;
}

+ (_Bool)isRetryLoadWhenFailed;
+ (void)setRetryLoadWhenFailed:(_Bool)arg1;
+ (void)saveVideoPlayTimeoutInterval:(long long)arg1;
+ (long long)videoPlayTimeoutInterval;
+ (void)saveVideoPlayRetryPolicy:(long long)arg1;
+ (long long)videoPlayRetryPolicy;
+ (void)saveVideoPlayRetryInterval:(long long)arg1;
+ (long long)videoPlayRetryInterval;
+ (void)saveToutiaoVideoSecretKey:(id)arg1;
+ (id)toutiaoVideoSecretKey;
+ (void)saveToutiaoVideoUserKey:(id)arg1;
+ (id)toutiaoVideoUser;
+ (void)saveLeTVSecretKey:(id)arg1;
+ (id)LeTVSecretKey;
+ (void)saveleTVUserKey:(id)arg1;
+ (id)leTVUser;
+ (id)videoTypeForSP:(unsigned long long)arg1;
+ (id)secertForSP:(unsigned long long)arg1;
+ (id)userForSP:(unsigned long long)arg1;
+ (long long)currentTs;
+ (id)toutiaoVideoType;
+ (id)leTVVideoType;
+ (id)leTVSignFromVideoID:(id)arg1 ts:(long long)arg2 sp:(unsigned long long)arg3;
@property(nonatomic) int retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSMutableDictionary *retryErrorDict; // @synthesize retryErrorDict=_retryErrorDict;
@property(retain, nonatomic) TTVideoURLRequestInfo *requestInfo; // @synthesize requestInfo=_requestInfo;
@property(retain, nonatomic) TTHttpTask *videoUrlRequest; // @synthesize videoUrlRequest=_videoUrlRequest;
@property(nonatomic) _Bool isFeedUrl; // @synthesize isFeedUrl=_isFeedUrl;
@property(copy, nonatomic) NSString *videoRequestUrl; // @synthesize videoRequestUrl=_videoRequestUrl;
@property(nonatomic) __weak id <ExploreMovieManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)apiForSP:(unsigned long long)arg1;
- (void)parseVideoADList:(id)arg1 forVideoModel:(id)arg2;
- (void)handleLeTVRequestFinished:(id)arg1 forPlayType:(unsigned long long)arg2;
- (id)handleVideoPlayTypeLiveWithLiveInfo:(id)arg1;
- (id)handleVideoPlayTypeNormalWithVideoInfo:(id)arg1 videoADList:(id)arg2;
- (void)notifyError:(id)arg1;
- (id)requestUserInfo;
- (void)checkLoadingTimeout;
- (void)cancelOperation;
- (void)retryFetchRequestIfNeeded:(id)arg1 andURLStatus:(id)arg2;
- (void)fetchURLInfoWithRequestInfo:(id)arg1 retryInfex:(int)arg2;
- (void)fetchURLInfoWithRequestInfo:(id)arg1;
- (void)dealloc;

@end

