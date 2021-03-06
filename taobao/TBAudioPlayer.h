//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AVAudioPlayerDelegate-Protocol.h"

@class AVAudioPlayer, NSString;
@protocol TBAudioPlayerDelegate;

@interface TBAudioPlayer : NSObject <AVAudioPlayerDelegate>
{
    NSString *amrPath;
    AVAudioPlayer *player;
    float _volume;
    unsigned long long _numberOfLoops;
    id <TBAudioPlayerDelegate> _delegate;
}

+ (_Bool)isAmr:(id)arg1;
@property(nonatomic) id <TBAudioPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) unsigned long long numberOfLoops; // @synthesize numberOfLoops=_numberOfLoops;
- (void).cxx_destruct;
- (void)audioPlayerEndInterruption:(id)arg1;
- (void)audioPlayerBeginInterruption:(id)arg1;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
@property(readonly, nonatomic) double currentTime;
@property(readonly, nonatomic) double duration;
- (void)stop;
- (void)pause;
- (void)playAtTime:(double)arg1;
- (void)play;
- (id)initWithFilePath:(id)arg1 andDelegate:(id)arg2;
- (id)initWithData:(id)arg1 andDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

