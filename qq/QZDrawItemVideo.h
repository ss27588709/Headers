//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZDrawItemImage.h>

@class NSString;

@interface QZDrawItemVideo : QZDrawItemImage
{
    _Bool _showDurationInView;
    _Bool _showDynamicEffectIcon;
    _Bool _showPlayCountView;
    unsigned long long _videoTime;
    NSString *_currentGaussPicUrl;
    long long _videoWidth;
    long long _videoHeight;
    NSString *_remarkText;
}

@property(retain, nonatomic) NSString *remarkText; // @synthesize remarkText=_remarkText;
@property(nonatomic) long long videoHeight; // @synthesize videoHeight=_videoHeight;
@property(nonatomic) long long videoWidth; // @synthesize videoWidth=_videoWidth;
@property(retain, nonatomic) NSString *currentGaussPicUrl; // @synthesize currentGaussPicUrl=_currentGaussPicUrl;
@property(nonatomic) _Bool showPlayCountView; // @synthesize showPlayCountView=_showPlayCountView;
@property(nonatomic) _Bool showDynamicEffectIcon; // @synthesize showDynamicEffectIcon=_showDynamicEffectIcon;
@property(nonatomic) _Bool showDurationInView; // @synthesize showDurationInView=_showDurationInView;
@property(nonatomic) unsigned long long videoTime; // @synthesize videoTime=_videoTime;
- (id)init;

@end

