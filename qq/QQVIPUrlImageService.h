//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSLock, NSMutableArray;

@interface QQVIPUrlImageService : NSObject
{
    NSMutableArray *_taskArray;
    NSLock *_taskLock;
    _Bool _tasksComplete;
}

+ (id)getInstance;
- (void).cxx_destruct;
- (void)downloadImageFailed:(id)arg1;
- (void)downloadImageFinish:(id)arg1;
- (void)performNextRequest;
- (id)createRequestInfo:(id)arg1;
- (void)reportDataFlow:(id)arg1;
- (void)downloadReceivedBytes:(double)arg1 andContentLength:(double)arg2 withURL:(id)arg3;
- (_Bool)cancelRequest:(id)arg1;
- (id)findRequestInfo:(id)arg1;
- (id)downloadImage:(id)arg1;
- (id)imageForUrl:(id)arg1;
- (void)dealloc;
- (id)init;

@end
