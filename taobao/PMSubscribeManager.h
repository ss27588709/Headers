//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSRecursiveLock;

@interface PMSubscribeManager : NSObject
{
    NSMutableArray *_processorArray;
    NSRecursiveLock *_lock;
}

+ (void)unsubscribe:(id)arg1 bizKey:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
+ (void)subscribe:(id)arg1 bizKey:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
+ (id)sharedInstance;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableArray *processorArray; // @synthesize processorArray=_processorArray;
- (void).cxx_destruct;
- (id)getProcessor:(id)arg1;

@end
