//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/VRBFaceGameBaseModel.h>

@interface VRBFaceGameEmoji : VRBFaceGameBaseModel
{
    _Bool _isBigEmoji;
    int _faceId;
    int _eventType;
    int _trackNum;
    int _emojiFallSeq;
    int _fallDownDuration;
    long long _startTime;
}

@property(nonatomic) int fallDownDuration; // @synthesize fallDownDuration=_fallDownDuration;
@property(nonatomic) _Bool isBigEmoji; // @synthesize isBigEmoji=_isBigEmoji;
@property(nonatomic) int emojiFallSeq; // @synthesize emojiFallSeq=_emojiFallSeq;
@property(nonatomic) int trackNum; // @synthesize trackNum=_trackNum;
@property(nonatomic) int eventType; // @synthesize eventType=_eventType;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) int faceId; // @synthesize faceId=_faceId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end
