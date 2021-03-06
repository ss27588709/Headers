//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class AWEBodyDanceGuideImageView, AWEBodyDanceGuideJSONAlphaModel, AWEBodyDanceGuideJSONResourcesModel, AWEBodyDanceRectModel, NSNumber, NSString, NSValue, UIImage;

@interface AWEBodyDanceGuideJSONContentModel : MTLModel <MTLJSONSerializing>
{
    _Bool __noNeedShow;
    _Bool __needStop;
    _Bool __hasRecognized;
    _Bool __hasMakeScaleAnimation;
    _Bool __hasPassedRecogniseInCrazy;
    int _template;
    NSString *_name;
    double _timeStart;
    double _timeDuration;
    AWEBodyDanceRectModel *_rect;
    AWEBodyDanceGuideJSONAlphaModel *_alpha;
    AWEBodyDanceGuideJSONResourcesModel *_resources;
    double _speed;
    long long _direction;
    long long _guideIndex;
    AWEBodyDanceGuideImageView *__imageView;
    NSValue *__rectInDevice;
    NSNumber *__endTime;
    UIImage *__image;
    long long __matchedType;
    long long __comboCount;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) _Bool _hasPassedRecogniseInCrazy; // @synthesize _hasPassedRecogniseInCrazy=__hasPassedRecogniseInCrazy;
@property(nonatomic) _Bool _hasMakeScaleAnimation; // @synthesize _hasMakeScaleAnimation=__hasMakeScaleAnimation;
@property(nonatomic) _Bool _hasRecognized; // @synthesize _hasRecognized=__hasRecognized;
@property(nonatomic) _Bool _needStop; // @synthesize _needStop=__needStop;
@property(nonatomic) _Bool _noNeedShow; // @synthesize _noNeedShow=__noNeedShow;
@property(nonatomic) long long _comboCount; // @synthesize _comboCount=__comboCount;
@property(nonatomic) long long _matchedType; // @synthesize _matchedType=__matchedType;
@property(retain, nonatomic) UIImage *_image; // @synthesize _image=__image;
@property(retain, nonatomic) NSNumber *_endTime; // @synthesize _endTime=__endTime;
@property(retain, nonatomic) NSValue *_rectInDevice; // @synthesize _rectInDevice=__rectInDevice;
@property(retain, nonatomic) AWEBodyDanceGuideImageView *_imageView; // @synthesize _imageView=__imageView;
@property(nonatomic) long long guideIndex; // @synthesize guideIndex=_guideIndex;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) int template; // @synthesize template=_template;
@property(retain, nonatomic) AWEBodyDanceGuideJSONResourcesModel *resources; // @synthesize resources=_resources;
@property(retain, nonatomic) AWEBodyDanceGuideJSONAlphaModel *alpha; // @synthesize alpha=_alpha;
@property(retain, nonatomic) AWEBodyDanceRectModel *rect; // @synthesize rect=_rect;
@property(nonatomic) double timeDuration; // @synthesize timeDuration=_timeDuration;
@property(nonatomic) double timeStart; // @synthesize timeStart=_timeStart;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

