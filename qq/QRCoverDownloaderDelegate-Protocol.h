//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class QRBookInfo, QRCoverDownloader;

@protocol QRCoverDownloaderDelegate <NSObject>
- (void)coverDownloadFailed:(QRCoverDownloader *)arg1;
- (void)coverDownloadFinished:(QRCoverDownloader *)arg1 bookInfo:(QRBookInfo *)arg2;
@end

