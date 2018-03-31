//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <QQMainProject/IODGiftPlayListener-Protocol.h>
#import <QQMainProject/UIWebViewDelegate-Protocol.h>

@class AVPlayer, AVPlayerItem, AVPlayerItemVideoOutput, CADisplayLink, LOTAnimationView, NSString, NSURL, ODH264GiftPlayView, ODLOTImageReplaceMgr;
@protocol ODH264ProtocolDelegate;

@interface ODGiftH264ViewController : UIViewController <IODGiftPlayListener, UIWebViewDelegate>
{
    AVPlayerItemVideoOutput *_videoOutput;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    CADisplayLink *_displayLink;
    _Bool _sendSize;
    _Bool _isVideoPlaying;
    _Bool _isLottiePlaying;
    id <ODH264ProtocolDelegate> _h264Delegate;
    ODH264GiftPlayView *_playView;
    LOTAnimationView *_lotAniView;
    NSURL *_url;
    ODLOTImageReplaceMgr *_imgReplaceMgr;
    NSString *_replaceJson;
}

@property(copy, nonatomic) NSString *replaceJson; // @synthesize replaceJson=_replaceJson;
@property(retain, nonatomic) ODLOTImageReplaceMgr *imgReplaceMgr; // @synthesize imgReplaceMgr=_imgReplaceMgr;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) LOTAnimationView *lotAniView; // @synthesize lotAniView=_lotAniView;
@property(retain, nonatomic) ODH264GiftPlayView *playView; // @synthesize playView=_playView;
@property(nonatomic) __weak id <ODH264ProtocolDelegate> h264Delegate; // @synthesize h264Delegate=_h264Delegate;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
