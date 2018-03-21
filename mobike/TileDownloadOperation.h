//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSString;
@protocol TileDownloadOperationDelegate;

@interface TileDownloadOperation : NSOperation
{
    id <TileDownloadOperationDelegate> _delegate;
    NSString *_urlString;
}

@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(nonatomic) __weak id <TileDownloadOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)main;
- (id)requestDataByURLConnection:(id)arg1;
- (id)initWithURLString:(const char *)arg1;

@end
