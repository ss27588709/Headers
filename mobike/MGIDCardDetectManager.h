//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MGIDCardQualityAssessment;
@protocol MGIDCardDetectDelegate;

@interface MGIDCardDetectManager : NSObject
{
    _Bool _detectFinish;
    id <MGIDCardDetectDelegate> _delegate;
    unsigned long long _IDCardSide;
    unsigned long long _screenOrientation;
    MGIDCardQualityAssessment *_mgCardQA;
    CDStruct_ada9a10e _IDCardScaleRect;
}

+ (id)idCardManagerWithCardSide:(unsigned long long)arg1 screenOrientation:(unsigned long long)arg2;
+ (id)idCardCheckWithDelegate:(id)arg1 cardSide:(unsigned long long)arg2 screenOrientation:(unsigned long long)arg3;
@property(nonatomic) _Bool detectFinish; // @synthesize detectFinish=_detectFinish;
@property(retain, nonatomic) MGIDCardQualityAssessment *mgCardQA; // @synthesize mgCardQA=_mgCardQA;
@property(nonatomic) unsigned long long screenOrientation; // @synthesize screenOrientation=_screenOrientation;
@property(nonatomic) unsigned long long IDCardSide; // @synthesize IDCardSide=_IDCardSide;
@property(nonatomic) CDStruct_39925896 IDCardScaleRect; // @synthesize IDCardScaleRect=_IDCardScaleRect;
@property(nonatomic) id <MGIDCardDetectDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGRect)expandFaceRect:(struct CGRect)arg1 imageSize:(struct CGSize)arg2 scale:(double)arg3;
- (struct CGRect)expandFaceWithImageSize:(struct CGSize)arg1;
- (id)getErrorShowString:(unsigned long long)arg1;
- (struct CGRect)droppedCardImgRect:(struct CGSize)arg1;
- (_Bool)isQualifiedWithInbound:(double)arg1 isCard:(double)arg2;
- (void)stopDetect;
- (void)reset;
- (void)checkWithImage:(id)arg1;
- (void)detectWithImage:(id)arg1;
- (id)init;
- (void)dealloc;

@end

