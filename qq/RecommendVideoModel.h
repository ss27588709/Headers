//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface RecommendVideoModel : NSObject
{
    unsigned int _onliveNum;
    long long _groupCode;
    NSString *_groupName;
    NSString *_videoUrl;
    NSString *_logoUrl;
}

@property(copy, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
@property(copy, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(nonatomic) unsigned int onliveNum; // @synthesize onliveNum=_onliveNum;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(nonatomic) long long groupCode; // @synthesize groupCode=_groupCode;
- (void)dealloc;

@end
