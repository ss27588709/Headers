//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMSceneBridgeLayer.h"

@class FMFacePoseEffectFilter;

@interface FMFacePoseEffectSceneLayer : FMSceneBridgeLayer
{
    float _scaleFactor;
    FMFacePoseEffectFilter *_poseFilter;
    struct CGPoint _lastPosition;
}

+ (id)sceneWithResource:(id)arg1 materialProvider:(id)arg2 layerName:(id)arg3;
@property(nonatomic) float scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(nonatomic) struct CGPoint lastPosition; // @synthesize lastPosition=_lastPosition;
@property(retain, nonatomic) FMFacePoseEffectFilter *poseFilter; // @synthesize poseFilter=_poseFilter;
- (void).cxx_destruct;
- (id)sceneFilter;
- (_Bool)faceRequired;
- (void)onCameraPositionChanged:(_Bool)arg1;
- (void)setFaces:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2 touchPosition:(struct CGPoint)arg3;

@end

