//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface MBKBaseService : NSObject
{
    NSObject<OS_dispatch_queue> *_processQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processQueue; // @synthesize processQueue=_processQueue;
- (void).cxx_destruct;
- (id)init;

@end

