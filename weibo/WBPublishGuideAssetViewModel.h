//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface WBPublishGuideAssetViewModel : NSObject
{
    _Bool _playMark;
    _Bool _videoMark;
    _Bool _lastOne;
    UIImage *_image;
    NSString *_imageUrl;
    NSString *_duration;
}

@property(nonatomic) _Bool lastOne; // @synthesize lastOne=_lastOne;
@property(retain, nonatomic) NSString *duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool videoMark; // @synthesize videoMark=_videoMark;
@property(nonatomic) _Bool playMark; // @synthesize playMark=_playMark;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;

@end

