//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSArray, NSNumber;

@interface AWESearchMusicResponse : AWEBaseApiModel
{
    _Bool _hasMore;
    NSNumber *_cursor;
    NSArray *_musicList;
}

+ (id)hasMoreJSONTransformer;
+ (id)musicListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSArray *musicList; // @synthesize musicList=_musicList;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSNumber *cursor; // @synthesize cursor=_cursor;
- (void).cxx_destruct;

@end

