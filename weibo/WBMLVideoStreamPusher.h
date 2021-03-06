//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LivePublisherDelegate-Protocol.h"

@class NSString, UIView, YXSDKLivePublisher;
@protocol WBMLVideoStreamPusherDelegate;

@interface WBMLVideoStreamPusher : NSObject <LivePublisherDelegate>
{
    _Bool _lopiccaEnabled;
    _Bool _mirrorEnabled;
    _Bool _starInitialed;
    int _cameraPosition;
    id <WBMLVideoStreamPusherDelegate> _delegate;
    UIView *_renderView;
    YXSDKLivePublisher *_publisher;
    NSString *_pushUrl;
    unsigned long long _stopStatus;
}

@property(nonatomic) unsigned long long stopStatus; // @synthesize stopStatus=_stopStatus;
@property(retain, nonatomic) NSString *pushUrl; // @synthesize pushUrl=_pushUrl;
@property(nonatomic) _Bool starInitialed; // @synthesize starInitialed=_starInitialed;
@property(retain, nonatomic) YXSDKLivePublisher *publisher; // @synthesize publisher=_publisher;
@property(nonatomic) int cameraPosition; // @synthesize cameraPosition=_cameraPosition;
@property(readonly, nonatomic) UIView *renderView; // @synthesize renderView=_renderView;
@property(readonly, nonatomic) _Bool mirrorEnabled; // @synthesize mirrorEnabled=_mirrorEnabled;
@property(readonly, nonatomic) _Bool lopiccaEnabled; // @synthesize lopiccaEnabled=_lopiccaEnabled;
@property(nonatomic) __weak id <WBMLVideoStreamPusherDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned int)onRenderViewPreProcess:(struct __CVBuffer *)arg1 cameraId:(int)arg2 pts:(CDStruct_1b6d18a9)arg3;
- (int)onRawAudioData:(char **)arg1 sampleCount:(int)arg2 sampleRate:(int)arg3 channel:(int)arg4;
- (void)onRenderViewDestory;
- (void)onRenderViewCreated;
- (void)onEventCallback:(int)arg1 msg:(id)arg2;
- (void)updateRenderViewTransform;
- (void)setPreviewFrame:(struct CGRect)arg1;
- (_Bool)enableMirror:(_Bool)arg1;
- (void)enableLopicca:(_Bool)arg1;
- (void)switchCamera;
- (void)clean;
- (void)stopPreview;
- (void)stopPush;
- (void)startPushWithURL:(id)arg1;
- (void)startPreview:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

