//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSString;

@interface QQRIJAlbumPhotoModel : QQModel
{
    _Bool _finished;
    _Bool _isZooming;
    NSString *_imageURL;
    NSString *_imageDesc;
    long long _imageIndex;
}

@property(nonatomic) _Bool isZooming; // @synthesize isZooming=_isZooming;
@property(nonatomic) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic) long long imageIndex; // @synthesize imageIndex=_imageIndex;
@property(copy, nonatomic) NSString *imageDesc; // @synthesize imageDesc=_imageDesc;
@property(copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
- (void)dealloc;

@end

