//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "NSMutableCopying-Protocol.h"

@class TBDetailPhotoZoomingScrollView, UIImageView;

@interface AliDetailImageDisplayView : UIView <NSMutableCopying>
{
    TBDetailPhotoZoomingScrollView *_zoomingView;
    UIImageView *_photoImageView;
}

@property(retain, nonatomic) UIImageView *photoImageView; // @synthesize photoImageView=_photoImageView;
@property(retain, nonatomic) TBDetailPhotoZoomingScrollView *zoomingView; // @synthesize zoomingView=_zoomingView;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end
