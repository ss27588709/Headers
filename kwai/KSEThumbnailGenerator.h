//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSEVideoEditorProject;

@interface KSEThumbnailGenerator : NSObject
{
    struct NativeThumbnailGeneratorInterface *_nativeThumbnailGenerator;
    double _timeInterval;
    struct CGSize _imageSize;
    _Bool _ignoreClippedRange;
    KSEVideoEditorProject *_project;
}

@property(nonatomic) _Bool ignoreClippedRange; // @synthesize ignoreClippedRange=_ignoreClippedRange;
@property(retain, nonatomic) KSEVideoEditorProject *project; // @synthesize project=_project;
- (void).cxx_destruct;
- (void)thumbnailAtIndex:(unsigned long long)arg1 size:(struct CGSize)arg2 renderFlags:(int)arg3 callback:(CDUnknownBlockType)arg4;
- (void)thumbnailAtIndex:(unsigned long long)arg1 renderFlags:(int)arg2 callback:(CDUnknownBlockType)arg3;
- (void)thumbnailAtIndex:(unsigned long long)arg1 size:(struct CGSize)arg2 callback:(CDUnknownBlockType)arg3;
- (void)thumbnailAtIndex:(unsigned long long)arg1 callback:(CDUnknownBlockType)arg2;
- (id)thumbnailAtIndex:(unsigned long long)arg1 size:(struct CGSize)arg2 renderFlags:(int)arg3 error:(id *)arg4;
- (id)thumbnailAtIndex:(unsigned long long)arg1 renderFlags:(int)arg2 error:(id *)arg3;
- (id)thumbnailAtIndex:(unsigned long long)arg1 size:(struct CGSize)arg2 error:(id *)arg3;
- (id)thumbnailAtIndex:(unsigned long long)arg1 error:(id *)arg2;
- (int)CreateCGImageFromCVPixelBuffer:(struct __CVBuffer *)arg1 imageOut:(struct CGImage **)arg2;
- (void)updateProject;
- (void)updateProject:(id)arg1;
- (void)setFilterResourcePath:(id)arg1;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) double timeInterval;
- (void)applicationDidReceiveMemoryWarning;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)dealloc;
@property(readonly, nonatomic) struct CGSize imageSize;
- (id)initWithTimeInterval:(double)arg1 size:(struct CGSize)arg2 cacheLimitBytes:(long long)arg3;
- (id)initWithImageSize:(struct CGSize)arg1;
- (id)init;

@end

