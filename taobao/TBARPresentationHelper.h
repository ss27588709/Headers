//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString, TBAREventInfo, TBARMarker, TBARMaterialConfig, TBARPresentationObject, TBARRecognitionManager;

@interface TBARPresentationHelper : NSObject
{
    TBARPresentationObject *_curPresentation;
    _Bool _recogReady;
    _Bool _firstImageProcessed;
    int _width;
    int _height;
    NSString *_resourceRootPath;
    NSString *_localT3dPath;
    TBAREventInfo *_eventInfo;
    long long _recoType;
    TBARRecognitionManager *_recognitionManager;
    TBARMarker *_trackingMarker;
    TBARMaterialConfig *_playingMaterialConfig;
    long long _recogStatus;
    CDUnknownBlockType _statusCallback;
    CDUnknownBlockType _recognitionStatusCallback;
    CDUnknownBlockType _finishCallback;
    NSArray *_markerList;
    CDUnknownBlockType _updateEventInfoCallback;
}

@property(copy, nonatomic) CDUnknownBlockType updateEventInfoCallback; // @synthesize updateEventInfoCallback=_updateEventInfoCallback;
@property(nonatomic) _Bool firstImageProcessed; // @synthesize firstImageProcessed=_firstImageProcessed;
@property(copy, nonatomic) NSArray *markerList; // @synthesize markerList=_markerList;
@property(copy, nonatomic) CDUnknownBlockType finishCallback; // @synthesize finishCallback=_finishCallback;
@property(copy, nonatomic) CDUnknownBlockType recognitionStatusCallback; // @synthesize recognitionStatusCallback=_recognitionStatusCallback;
@property(copy, nonatomic) CDUnknownBlockType statusCallback; // @synthesize statusCallback=_statusCallback;
@property(nonatomic) long long recogStatus; // @synthesize recogStatus=_recogStatus;
@property(retain, nonatomic) TBARMaterialConfig *playingMaterialConfig; // @synthesize playingMaterialConfig=_playingMaterialConfig;
@property(retain, nonatomic) TBARMarker *trackingMarker; // @synthesize trackingMarker=_trackingMarker;
@property(retain, nonatomic) TBARRecognitionManager *recognitionManager; // @synthesize recognitionManager=_recognitionManager;
@property(nonatomic) long long recoType; // @synthesize recoType=_recoType;
@property(nonatomic) int height; // @synthesize height=_height;
@property(nonatomic) int width; // @synthesize width=_width;
@property(nonatomic) _Bool recogReady; // @synthesize recogReady=_recogReady;
@property(retain, nonatomic) TBAREventInfo *eventInfo; // @synthesize eventInfo=_eventInfo;
@property(copy, nonatomic) NSString *localT3dPath; // @synthesize localT3dPath=_localT3dPath;
@property(copy, nonatomic) NSString *resourceRootPath; // @synthesize resourceRootPath=_resourceRootPath;
@property(retain, nonatomic) TBARPresentationObject *curPresentation; // @synthesize curPresentation=_curPresentation;
- (void).cxx_destruct;
- (id)findMaterialConfigWithResourceName:(id)arg1;
- (id)findMarkerConfigWithMarkerName:(id)arg1;
- (void)reloadMarkers;
- (void)loadMarkers;
- (void)removeMarkers;
- (void)addRecognitionListener;
- (void)presentationWithMarkerConfig:(id)arg1;
- (void)showT3dView;
- (_Bool)isT3dObject;
- (void)stopTracking;
- (void)startTracking;
- (void)stopRunning;
- (void)startRunning;
- (void)setPlayFinishBlock:(CDUnknownBlockType)arg1;
- (void)setRecognitionStatusBlock:(CDUnknownBlockType)arg1;
- (void)setPlayStatusBlock:(CDUnknownBlockType)arg1;
- (void)inputVideo:(char **)arg1 width:(int)arg2 height:(int)arg3;
- (void)updateEventInfo:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)initWithRecogType:(long long)arg1 width:(int)arg2 height:(int)arg3 t3dPath:(id)arg4;
- (void)dealloc;

@end

