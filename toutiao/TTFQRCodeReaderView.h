//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AVCaptureMetadataOutputObjectsDelegate-Protocol.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"

@class AVCaptureSession, AVCaptureVideoDataOutput, NSString, UIImageView, UILabel;
@protocol TTFQRCodeReaderViewDelegate;

@interface TTFQRCodeReaderView : UIView <AVCaptureMetadataOutputObjectsDelegate, AVCaptureVideoDataOutputSampleBufferDelegate>
{
    id <TTFQRCodeReaderViewDelegate> _delegate;
    AVCaptureSession *_captureSession;
    AVCaptureVideoDataOutput *_dataOutput;
    UIView *_maskView;
    UIImageView *_scanImageView;
    UIView *_scanAnimatedView;
    UIView *_msgContainerView;
    UILabel *_msgLabel;
    struct CGRect _scanZoneRect;
}

@property(retain, nonatomic) UILabel *msgLabel; // @synthesize msgLabel=_msgLabel;
@property(retain, nonatomic) UIView *msgContainerView; // @synthesize msgContainerView=_msgContainerView;
@property(retain, nonatomic) UIView *scanAnimatedView; // @synthesize scanAnimatedView=_scanAnimatedView;
@property(retain, nonatomic) UIImageView *scanImageView; // @synthesize scanImageView=_scanImageView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) struct CGRect scanZoneRect; // @synthesize scanZoneRect=_scanZoneRect;
@property(retain, nonatomic) AVCaptureVideoDataOutput *dataOutput; // @synthesize dataOutput=_dataOutput;
@property(retain, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(nonatomic) __weak id <TTFQRCodeReaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)stopScanWithoutScanAnimated;
- (void)startScanWithWrongResult;
- (void)stopScan;
- (void)startScan;
- (struct CGRect)getScanCrop:(struct CGRect)arg1 readerViewBounds:(struct CGRect)arg2;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
