//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MAMapViewDelegate-Protocol.h"

@class CNMapRectData, MAMapView, MAObjModelOverlayMoveAnimation, MATraceReplayOverlay, NSString;

@interface CNMapManage : NSObject <MAMapViewDelegate>
{
    _Bool _replayObserver;
    MAMapView *_mapView;
    CDUnknownBlockType _pausedBlock;
    CNMapRectData *_rectData;
    MATraceReplayOverlay *_replayOverlay;
    MAObjModelOverlayMoveAnimation *_moveAnimation;
}

@property(nonatomic) _Bool replayObserver; // @synthesize replayObserver=_replayObserver;
@property(retain, nonatomic) MAObjModelOverlayMoveAnimation *moveAnimation; // @synthesize moveAnimation=_moveAnimation;
@property(retain, nonatomic) MATraceReplayOverlay *replayOverlay; // @synthesize replayOverlay=_replayOverlay;
@property(retain, nonatomic) CNMapRectData *rectData; // @synthesize rectData=_rectData;
@property(nonatomic) __weak CDUnknownBlockType pausedBlock; // @synthesize pausedBlock=_pausedBlock;
@property(retain, nonatomic) MAMapView *mapView; // @synthesize mapView=_mapView;
- (void).cxx_destruct;
- (id)bundleLoadDynamicLibWithPath:(id)arg1;
- (id)loadAMapFramework;
- (void)mapView:(id)arg1 mapWillZoomByUser:(_Bool)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (void)dealloc;
- (void)removeReplayOverlayObserver;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setMoveAnimation:(id)arg1 coordinates:(struct CLLocationCoordinate2D *)arg2 count:(long long)arg3 moveCount:(long long)arg4 duration:(double)arg5;
- (void)showPolyline:(id)arg1;
- (void)showPolylines:(id)arg1;
- (void)showAnnotation:(id)arg1;
- (void)showAnnotations:(id)arg1;
- (void)setMapRect:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
