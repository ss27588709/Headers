//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEMusicModel, NSArray;

@interface AWEMusicDetailResponse : AWEBaseApiModel
{
    AWEMusicModel *_musicInfo;
    NSArray *_relatedList;
    NSArray *_topBodydanceAvatars;
}

+ (id)topBodydanceAvatarsJSONTransformer;
+ (id)relatedListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSArray *topBodydanceAvatars; // @synthesize topBodydanceAvatars=_topBodydanceAvatars;
@property(copy, nonatomic) NSArray *relatedList; // @synthesize relatedList=_relatedList;
@property(retain, nonatomic) AWEMusicModel *musicInfo; // @synthesize musicInfo=_musicInfo;
- (void).cxx_destruct;

@end
