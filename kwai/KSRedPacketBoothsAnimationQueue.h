//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface KSRedPacketBoothsAnimationQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_backQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *backQueue; // @synthesize backQueue=_backQueue;
- (void).cxx_destruct;
- (void)addBarrierAnimation:(CDUnknownBlockType)arg1;
- (void)addAnimation:(CDUnknownBlockType)arg1;
- (id)init;

@end
