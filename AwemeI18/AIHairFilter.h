//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@interface AIHairFilter : CIFilter
{
    void *handle;
}

- (void)dealloc;
- (void)releaseModel;
- (struct CGImage *)getHairCGImageFromCameraOutputBuffer:(struct __CVBuffer *)arg1 orient:(int)arg2 flipAlpha:(_Bool)arg3;
- (int)getHairSmallAlphaArrayFromCameraOutputBuffer:(struct __CVBuffer *)arg1 alpha:(char *)arg2 orient:(int)arg3 flipAlpha:(_Bool)arg4;
- (id)initWithInputShape:(id)arg1 outputShape:(id)arg2;

@end

