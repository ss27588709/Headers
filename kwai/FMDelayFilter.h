//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageFilter.h"

@class FMFBOSwitcher;

@interface FMDelayFilter : GPUImageFilter
{
    int mTotalFrameCount;
    int EACH_FRAME;
    int mIndex;
    unsigned int *mTextureIdArr;
    int mWidth;
    int mHeight;
    unsigned int mProgramId;
    unsigned int mVertexAttribute;
    unsigned int mTexture0Uniform;
    unsigned int mTexture1Uniform;
    unsigned int mTexture2Uniform;
    unsigned int mTexture3Uniform;
    FMFBOSwitcher *mFBOSwitcher;
    unsigned int mTex1UploadUniform;
    unsigned int mTex2UploadUniform;
    unsigned int mTex3UploadUniform;
}

+ (id)delayFilterWithResource:(id)arg1 materialProvider:(id)arg2 layerName:(id)arg3;
- (void).cxx_destruct;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (void)onDraw:(int)arg1 vertices:(const float *)arg2 textureCoordinates:(const float *)arg3;
- (void)onInit;
- (id)initWithVertexShaderFromString:(id)arg1 fragmentShaderFromString:(id)arg2 totalFrame:(int)arg3 size:(struct CGSize)arg4;
- (void)dealloc;

@end
