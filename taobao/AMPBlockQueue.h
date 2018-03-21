//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSLock, NSMutableArray;

@interface AMPBlockQueue : NSObject
{
    NSMutableArray *_blockQueue;
    NSLock *_mutexLock;
}

- (void).cxx_destruct;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeAllTask;
- (unsigned long long)size;
- (id)popFront;
- (void)pushFront:(id)arg1;
- (void)pushBack:(id)arg1;
- (id)end;
- (id)front;
- (id)init;

@end
