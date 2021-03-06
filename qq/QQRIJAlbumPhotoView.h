//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import <QQMainProject/IAsynDownloadImageObserver-Protocol.h>
#import <QQMainProject/UIScrollViewDelegate-Protocol.h>

@class NSString, QQRIJAlbumPhotoModel, UIActivityIndicatorView, UIImage, UIImageView, UILabel;

@interface QQRIJAlbumPhotoView : UIScrollView <UIScrollViewDelegate, IAsynDownloadImageObserver>
{
    UIImageView *_imageView;
    QQRIJAlbumPhotoModel *_item;
    UIImage *_deafultImage;
    NSString *_photoPath;
    unsigned long long _imageState;
    CDUnknownBlockType _imageLoadCompleteCallBack;
    UIActivityIndicatorView *_loadingView;
    UIImageView *_errorHintView;
    UILabel *_errorHintLabel;
}

@property(retain, nonatomic) UILabel *errorHintLabel; // @synthesize errorHintLabel=_errorHintLabel;
@property(retain, nonatomic) UIImageView *errorHintView; // @synthesize errorHintView=_errorHintView;
@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(copy, nonatomic) CDUnknownBlockType imageLoadCompleteCallBack; // @synthesize imageLoadCompleteCallBack=_imageLoadCompleteCallBack;
@property(nonatomic) unsigned long long imageState; // @synthesize imageState=_imageState;
@property(copy, nonatomic) NSString *photoPath; // @synthesize photoPath=_photoPath;
@property(retain, nonatomic) UIImage *deafultImage; // @synthesize deafultImage=_deafultImage;
@property(retain, nonatomic) QQRIJAlbumPhotoModel *item; // @synthesize item=_item;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)hideFailedHint;
- (void)showFailedHint;
- (void)downLoadImageFail:(id)arg1;
- (void)downloadImageFinished:(id)arg1;
- (struct CGPoint)centerOfScrollViewContent:(id)arg1;
- (void)resizeImageView;
- (void)loadImageWithPhotoDataModel:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

