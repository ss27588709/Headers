//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTVPlayerContext-Protocol.h"
#import "TTVPlayerTracker-Protocol.h"

@class NSDictionary, NSHashTable, NSString, TTVADPlayerTracker, TTVDataPlayerTracker, TTVDemanderPlayerTracker, TTVPlayerStateStore, TTVPlayerTrackerV3;

@interface TTVDemanderTrackerManager : NSObject <TTVPlayerTracker, TTVPlayerContext>
{
    NSString *_videoSubjectID;
    TTVPlayerStateStore *_playerStateStore;
    NSString *_trackLabel;
    NSString *_itemID;
    NSString *_groupID;
    NSString *_categoryID;
    long long _aggrType;
    NSString *_adID;
    NSString *_logExtra;
    NSDictionary *_logPb;
    NSString *_categoryName;
    NSString *_enterFrom;
    NSString *_authorId;
    TTVADPlayerTracker *_adTracker;
    TTVDataPlayerTracker *_dataTracker;
    TTVDemanderPlayerTracker *_commonTracker;
    NSHashTable *_map;
    TTVPlayerTrackerV3 *_logV3;
}

@property(retain, nonatomic) TTVPlayerTrackerV3 *logV3; // @synthesize logV3=_logV3;
@property(retain, nonatomic) NSHashTable *map; // @synthesize map=_map;
@property(retain, nonatomic) TTVDemanderPlayerTracker *commonTracker; // @synthesize commonTracker=_commonTracker;
@property(retain, nonatomic) TTVDataPlayerTracker *dataTracker; // @synthesize dataTracker=_dataTracker;
@property(retain, nonatomic) TTVADPlayerTracker *adTracker; // @synthesize adTracker=_adTracker;
@property(copy, nonatomic) NSString *authorId; // @synthesize authorId=_authorId;
@property(copy, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(copy, nonatomic) NSDictionary *logPb; // @synthesize logPb=_logPb;
@property(copy, nonatomic) NSString *logExtra; // @synthesize logExtra=_logExtra;
@property(copy, nonatomic) NSString *adID; // @synthesize adID=_adID;
@property(nonatomic) long long aggrType; // @synthesize aggrType=_aggrType;
@property(copy, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(copy, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(copy, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
@property(copy, nonatomic) NSString *trackLabel; // @synthesize trackLabel=_trackLabel;
@property(retain, nonatomic) TTVPlayerStateStore *playerStateStore; // @synthesize playerStateStore=_playerStateStore;
@property(copy, nonatomic) NSString *videoSubjectID; // @synthesize videoSubjectID=_videoSubjectID;
- (void).cxx_destruct;
- (void)registerTracker:(id)arg1;
- (void)addExtra:(id)arg1 forEvent:(id)arg2;
- (void)configureTracker:(id)arg1;
- (void)configureData;
- (void)sendEndTrack;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

