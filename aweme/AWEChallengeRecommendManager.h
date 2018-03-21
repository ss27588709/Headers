//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSNumber;

@interface AWEChallengeRecommendManager : NSObject
{
    _Bool _hasMore;
    NSMutableArray *_recommendChallenges;
    NSNumber *_minCursor;
    NSNumber *_maxCursor;
}

@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSNumber *maxCursor; // @synthesize maxCursor=_maxCursor;
@property(retain, nonatomic) NSNumber *minCursor; // @synthesize minCursor=_minCursor;
@property(retain, nonatomic) NSMutableArray *recommendChallenges; // @synthesize recommendChallenges=_recommendChallenges;
- (void).cxx_destruct;
- (_Bool)canLoadMore;
- (void)loadMore:(CDUnknownBlockType)arg1;
- (void)refresh:(CDUnknownBlockType)arg1;
- (id)totalRecommendChallenges;
- (id)init;

@end
