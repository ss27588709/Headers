//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString, UIImage;

@interface WBContentButton : UIButton
{
    int _loadState;
    _Bool loaded;
    NSString *nornalImageUrl;
    NSString *selectedImageUrl;
    NSString *highlightImageUrl;
    NSString *disableImageUrl;
    _Bool _isAnimationWhenFinalImageReceived;
    _Bool _isNeedForceLoad;
    _Bool _imageChangedAfterFadeinAnimation;
    CDUnknownBlockType _buildAlternativeImageUrlsBlock;
    CDUnknownBlockType _imageDidBeginDownloadBlock;
    CDUnknownBlockType _imageDidFinishDownloadBlock;
    CDUnknownBlockType _imageDidFinishSaveToDiskBlock;
    UIImage *_failedPlaceholder;
}

@property(nonatomic) _Bool imageChangedAfterFadeinAnimation; // @synthesize imageChangedAfterFadeinAnimation=_imageChangedAfterFadeinAnimation;
@property(nonatomic) _Bool isNeedForceLoad; // @synthesize isNeedForceLoad=_isNeedForceLoad;
@property(retain, nonatomic) UIImage *failedPlaceholder; // @synthesize failedPlaceholder=_failedPlaceholder;
@property(nonatomic) _Bool isAnimationWhenFinalImageReceived; // @synthesize isAnimationWhenFinalImageReceived=_isAnimationWhenFinalImageReceived;
@property(copy, nonatomic) CDUnknownBlockType imageDidFinishSaveToDiskBlock; // @synthesize imageDidFinishSaveToDiskBlock=_imageDidFinishSaveToDiskBlock;
@property(copy, nonatomic) CDUnknownBlockType imageDidFinishDownloadBlock; // @synthesize imageDidFinishDownloadBlock=_imageDidFinishDownloadBlock;
@property(copy, nonatomic) CDUnknownBlockType imageDidBeginDownloadBlock; // @synthesize imageDidBeginDownloadBlock=_imageDidBeginDownloadBlock;
@property(copy, nonatomic) CDUnknownBlockType buildAlternativeImageUrlsBlock; // @synthesize buildAlternativeImageUrlsBlock=_buildAlternativeImageUrlsBlock;
- (void).cxx_destruct;
- (void)loadImageWithPath:(id)arg1 forState:(unsigned long long)arg2 loadObj:(id)arg3 alternativeUrls:(id)arg4;
- (void)loadImageWithPath:(id)arg1 forState:(unsigned long long)arg2 localCacheFileAsyncFirst:(_Bool)arg3;
- (void)cancelCurrentImageLoading:(id)arg1;
- (void)cancelCurrentImageLoadingUrls:(id)arg1;
- (void)cancelCurrentImageLoading;
- (void)setFinalImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setImageUrl:(id)arg1 placeholderImage:(id)arg2 forState:(unsigned long long)arg3 localCacheFileAsyncFirst:(_Bool)arg4;
- (void)setImageUrl:(id)arg1 placeholderImage:(id)arg2 forState:(unsigned long long)arg3;
- (void)setImageUrl:(id)arg1 forState:(unsigned long long)arg2;
- (id)imageUrlForState:(unsigned long long)arg1;
- (void)setImageLoaderImage:(id)arg1 url:(id)arg2 forState:(unsigned long long)arg3;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

