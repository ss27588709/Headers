//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class TBStoryMusicModel;

@protocol TBStoryMusicViewPlayDelegate <NSObject>

@optional
- (void)setFreshMusicModel:(TBStoryMusicModel *)arg1;
- (void)QQMusicSelectShow:(_Bool)arg1;
- (void)audioPlayerUpdate;
- (void)audioPlayerStart;
- (void)audioPlayerStop;
- (void)storyVideoStart;
- (void)storyVideoPause;
- (void)storyVideoMute:(_Bool)arg1;
@end

