//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBSearchJSONModel.h"

@class NSString;

@interface TBSearchItemVideo : TBSearchJSONModel
{
    NSString *_videoId;
    NSString *_videoUrl;
    NSString *_videoDimension;
    NSString *_iconUrl;
    NSString *_coverUrl;
    double _dimension;
    NSString *_parsedCoverUrl;
}

@property(retain, nonatomic) NSString *parsedCoverUrl; // @synthesize parsedCoverUrl=_parsedCoverUrl;
@property(nonatomic) double dimension; // @synthesize dimension=_dimension;
@property(retain, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *videoDimension; // @synthesize videoDimension=_videoDimension;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(retain, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
- (void).cxx_destruct;
- (_Bool)shouldShowVideoIcon;
- (_Bool)isValid;

@end
