//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWETTFileUploadService.h"

#import "TTVideoUploadClientProtocol-Protocol.h"
#import "TTVideoUploadEventManagerProtocol-Protocol.h"

@class AWEVideoUploadParametersResponseModel, NSString, TTVideoUploadClient;

@interface AWETTVideoUploadService : AWETTFileUploadService <TTVideoUploadClientProtocol, TTVideoUploadEventManagerProtocol>
{
    AWEVideoUploadParametersResponseModel *_videoUploadParameters;
    TTVideoUploadClient *_videoUploadClient;
}

@property(retain, nonatomic) TTVideoUploadClient *videoUploadClient; // @synthesize videoUploadClient=_videoUploadClient;
@property(retain, nonatomic) AWEVideoUploadParametersResponseModel *videoUploadParameters; // @synthesize videoUploadParameters=_videoUploadParameters;
- (void).cxx_destruct;
- (void)eventManagerDidUpdate:(id)arg1;
- (void)uploadProgressDidUpdate:(long long)arg1;
- (void)uploadDidFinish:(id)arg1 error:(id)arg2;
- (void)startUploading;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
