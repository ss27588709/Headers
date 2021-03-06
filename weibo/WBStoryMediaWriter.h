//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AVAudioRecorderDelegate-Protocol.h"

@class AVAudioRecorder, NSError, NSString, NSURL, WBStoryVideoWriter;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface WBStoryMediaWriter : NSObject <AVAudioRecorderDelegate>
{
    struct {
        unsigned int isWriting:1;
        unsigned int isSetupStartTime:1;
    } _flags;
    _Bool _microphoneEnabled;
    float _speedRate;
    NSURL *_outputURL;
    CDUnknownBlockType _progressBlock;
    unsigned long long _status;
    WBStoryVideoWriter *_videoWriter;
    NSError *_error;
    NSURL *_videoOutputURL;
    NSURL *_audioOutputURL;
    NSObject<OS_dispatch_queue> *_audioQueue;
    AVAudioRecorder *_audioRecorder;
    NSObject<OS_dispatch_semaphore> *_audioFinishSemaphore;
}

@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *audioFinishSemaphore; // @synthesize audioFinishSemaphore=_audioFinishSemaphore;
@property(retain, nonatomic) AVAudioRecorder *audioRecorder; // @synthesize audioRecorder=_audioRecorder;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *audioQueue; // @synthesize audioQueue=_audioQueue;
@property(retain, nonatomic) NSURL *audioOutputURL; // @synthesize audioOutputURL=_audioOutputURL;
@property(retain, nonatomic) NSURL *videoOutputURL; // @synthesize videoOutputURL=_videoOutputURL;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) WBStoryVideoWriter *videoWriter; // @synthesize videoWriter=_videoWriter;
@property(nonatomic) float speedRate; // @synthesize speedRate=_speedRate;
@property(nonatomic, getter=isMicrophoneEnabled) _Bool microphoneEnabled; // @synthesize microphoneEnabled=_microphoneEnabled;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(retain, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
- (void).cxx_destruct;
- (void)audioRecorderEncodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioRecorderDidFinishRecording:(id)arg1 successfully:(_Bool)arg2;
- (void)finishVideoClipWritingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancleVideoClipWritingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)finishWritingWithCompletionHandler2:(CDUnknownBlockType)arg1;
- (void)cancleWritingWithCompletionHandler2:(CDUnknownBlockType)arg1;
- (void)clean;
- (void)processTexture:(unsigned int)arg1 time:(CDStruct_1b6d18a9)arg2;
- (void)processVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)resetAudioSeesion;
- (void)configAudioSession;
- (void)stopAudioRecorder;
- (void)startAudioRecorderIfNeeded;
- (_Bool)startWriting;
@property(readonly, nonatomic) _Bool isWriting;
- (id)_metadataArray;
- (void)setupAudioRecorder;
- (id)initWithURL:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

