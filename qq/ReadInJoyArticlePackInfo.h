//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FriendRecommendInfo, SpecialTopicInfo;

@interface ReadInJoyArticlePackInfo : NSObject
{
    unsigned long long _packId;
    unsigned long long _packType;
    FriendRecommendInfo *_friendRecommendInfo;
    SpecialTopicInfo *_specialTopicInfo;
}

+ (_Bool)isValidWithPackInfo:(id)arg1;
+ (id)PackInfoFromPbData:(id)arg1;
@property(retain, nonatomic) SpecialTopicInfo *specialTopicInfo; // @synthesize specialTopicInfo=_specialTopicInfo;
@property(retain, nonatomic) FriendRecommendInfo *friendRecommendInfo; // @synthesize friendRecommendInfo=_friendRecommendInfo;
@property(nonatomic) unsigned long long packType; // @synthesize packType=_packType;
@property(nonatomic) unsigned long long packId; // @synthesize packId=_packId;
- (void).cxx_destruct;
- (id)description;

@end
