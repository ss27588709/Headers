//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AEMessageQueue.h"

@class AEAudioController;

@interface AEAudioControllerMessageQueue : AEMessageQueue
{
    AEAudioController *_audioController;
}

@property(nonatomic) __weak AEAudioController *audioController; // @synthesize audioController=_audioController;
- (void).cxx_destruct;
- (_Bool)performSynchronousMessageExchangeWithBlock:(CDUnknownBlockType)arg1;
- (void)performAsynchronousMessageExchangeWithBlock:(CDUnknownBlockType)arg1 responseBlock:(CDUnknownBlockType)arg2;

@end

