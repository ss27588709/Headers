//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class Ant3DBlock, NSThread;

@interface Ant3DSingleThread : NSObject
{
    NSThread *_thread;
    Ant3DBlock *_block;
    _Bool _finished;
}

- (void).cxx_destruct;
- (void)runInternal:(id)arg1;
- (void)main;
- (void)stop;
- (void)run:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)init;

@end
