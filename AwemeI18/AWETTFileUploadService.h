//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTVideoUploadEventManagerProtocol-Protocol.h"

@class NSProgress, NSString, NSURL;

@interface AWETTFileUploadService : NSObject <TTVideoUploadEventManagerProtocol>
{
    NSProgress *_progress;
    NSURL *_fileURL;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)eventManagerDidUpdate:(id)arg1;
- (void)resetProgress:(id *)arg1;
- (id)getCookies;
- (void)startUploading;
- (void)uploadFileWithProgress:(id *)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithFileURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

