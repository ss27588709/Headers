//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface QZPhotoDownloadFlowReport : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    unsigned long long _reportCnt;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)getIPListFromArray:(id)arg1;
- (_Bool)shouldReprotDownload:(_Bool)arg1;
- (void)reportToCompass:(_Bool)arg1 session:(id)arg2 withErrorCode:(long long)arg3 url:(id)arg4 attachInfo:(id)arg5 apn:(long long)arg6 resType:(int)arg7 getImgFrom:(long long)arg8;
- (id)init;

@end

