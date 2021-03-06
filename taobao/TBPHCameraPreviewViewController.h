//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBPHBaseViewController.h"

@class TBPHPhoto, UIImage, UIImageView;

@interface TBPHCameraPreviewViewController : TBPHBaseViewController
{
    UIImage *_image;
    UIImageView *_imageView;
    TBPHPhoto *_photo;
}

@property(retain, nonatomic) TBPHPhoto *photo; // @synthesize photo=_photo;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)rightButtonClicked;
- (void)leftButtonClicked;
- (void)editButtonClicked;
- (void)publishImage;
- (id)buttonWithTitle:(id)arg1 aSelector:(SEL)arg2;
- (void)setupUI;
- (void)viewDidLoad;

@end

