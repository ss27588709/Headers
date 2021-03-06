//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSTimer;

@interface HeartBeatModel : NSObject
{
    NSArray *_feedIdList;
    NSString *_consumedFeedIdsPath;
    int _newFollowFeedCount;
    NSTimer *_heartBeatTimer;
    NSString *_latestFollowPhotoId;
    NSString *_latestLiveStreamId;
}

+ (void)migrateOldConfigPath;
+ (id)getInstance;
@property(nonatomic) int newFollowFeedCount; // @synthesize newFollowFeedCount=_newFollowFeedCount;
@property(retain, nonatomic) NSString *latestLiveStreamId; // @synthesize latestLiveStreamId=_latestLiveStreamId;
@property(retain, nonatomic) NSString *latestFollowPhotoId; // @synthesize latestFollowPhotoId=_latestFollowPhotoId;
@property(retain, nonatomic) NSTimer *heartBeatTimer; // @synthesize heartBeatTimer=_heartBeatTimer;
- (void).cxx_destruct;
- (id)consumedFeedIdsPath;
- (_Bool)needShowFollowFirstDot;
- (_Bool)needShowFollowLiveBadge;
- (void)consumeFollowNotifyWithFeedIdList:(id)arg1;
- (void)clearLatestFollowFeedId;
- (void)stopTimers;
- (void)didBecomeActivity;
- (void)didEnterBackground;
- (void)heartBeat;
- (void)startHeartBeat;
- (void)reset;
- (void)dealloc;
- (id)init;

@end

