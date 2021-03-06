//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTVPlayerTracker.h"

@class NSDate;

@interface TTVPlayerTrackerV3 : TTVPlayerTracker
{
    _Bool _hasEnterFullScreen;
    double _oneFrameDuration;
    NSDate *_clickVideoTime;
}

- (void).cxx_destruct;
- (void)actionChangeCallbackWithAction:(id)arg1 state:(id)arg2;
- (void)sendControlViewClickTrack;
- (void)sendVideoFinishUIShowTrack;
- (id)ttv_positionOnVideoOver;
- (void)sendMoveProgressBarTrackFromTime:(double)arg1 toTime:(double)arg2;
- (void)existFullScreenTrack:(long long)arg1;
- (void)sendEnterFullScreenTrack;
- (void)sendContinueTrack;
- (id)commonDicWithEvent:(id)arg1;
- (void)sendPauseTrack;
- (void)ttv_kvo;
- (id)init;

@end

