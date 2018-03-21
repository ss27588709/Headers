//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class EAGLContext;
@protocol OS_dispatch_queue;

@interface TTFOpenGLContext : NSObject
{
    NSObject<OS_dispatch_queue> *_contextQueue;
    EAGLContext *_context;
}

+ (id)sharedContextQueue;
+ (id)sharedContext;
+ (void *)contextKey;
@property(retain, nonatomic) EAGLContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *contextQueue; // @synthesize contextQueue=_contextQueue;
- (void).cxx_destruct;
- (void)useAsCurrentContext;
- (id)createContext;
- (id)init;

@end
