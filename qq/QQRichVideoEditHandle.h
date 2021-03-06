//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQRichTinyVideoHandle.h>

@class NSDictionary, NSTimer;

@interface QQRichVideoEditHandle : QQRichTinyVideoHandle
{
    _Bool _keepWhenCompress;
    NSDictionary *_editInfo;
    NSTimer *_progressTimer;
}

+ (id)addOverlayImage:(id)arg1 toVideoThumbImage:(id)arg2;
+ (id)getVideoThumb:(id)arg1;
+ (long long)videoOrientationForEditInfo:(id)arg1;
+ (_Bool)videDidEdit:(id)arg1;
+ (id)videoEditReportInfo:(id)arg1;
@property(retain, nonatomic) NSTimer *progressTimer; // @synthesize progressTimer=_progressTimer;
@property(retain, nonatomic) NSDictionary *editInfo; // @synthesize editInfo=_editInfo;
@property(nonatomic) _Bool keepWhenCompress; // @synthesize keepWhenCompress=_keepWhenCompress;
- (void)makeVideoMixMusic:(id)arg1 withType:(int)arg2 musicModel:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (_Bool)addSubtitleToVideoAsynchronously:(id)arg1 subtitleData:(id)arg2 outputPath:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (_Bool)addOverlayToVideoAsynchronously:(id)arg1 overlay:(id)arg2 outputPath:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)didFinishProcessWithVideoPath:(id)arg1 editInfo:(id)arg2;
- (void)adjustVideoWithVideoFrom:(id)arg1 editInfo:(id)arg2 from:(unsigned long long)arg3;
- (id)getTmpPath;
- (void)compressVideo:(id)arg1 editInfo:(id)arg2;
- (void)addOverlayToVideo:(id)arg1 videoInputPath:(id)arg2 from:(unsigned long long)arg3;
- (void)addSubtitleToVideo:(id)arg1 videoInputPath:(id)arg2 from:(unsigned long long)arg3;
- (id)scaleImageWithCoverImage:(id)arg1;
- (void)processVideo:(id)arg1 videoPath:(id)arg2;
- (void)handleEditVideo;
- (void)updateProcessProgress:(double)arg1;
- (_Bool)mergeVideo;
- (id)getVideoThumb;
- (void)progressTimerFire;
- (_Bool)startProcess;
- (void)onVideoProcessEvent:(id)arg1 tag:(long long)arg2 status:(int)arg3;
- (void)dealloc;
- (id)initWithTinyVideoClips:(id)arg1 andQQViewController:(id)arg2 editInfo:(id)arg3;

@end

