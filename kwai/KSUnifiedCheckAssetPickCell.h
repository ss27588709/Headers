//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSAssetPickCell.h"

#import "KSPickCellProtocol-Protocol.h"

@class CAAnimationlessLayer, NSObject, UIImageView;
@protocol KSPostAsset;

@interface KSUnifiedCheckAssetPickCell : KSAssetPickCell <KSPickCellProtocol>
{
    UIImageView *_imageView;
    UIImageView *_selectedImageView;
    CAAnimationlessLayer *_coverLayer;
}

@property(retain, nonatomic) CAAnimationlessLayer *coverLayer; // @synthesize coverLayer=_coverLayer;
@property(retain, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)setChecked:(_Bool)arg1;
- (void)performSpringbackAnimationWithCompleteBlock:(CDUnknownBlockType)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateWithAsset:(id)arg1;
- (void)setTcs:(id)arg1;
- (id)tcs;
@property(readonly, nonatomic) NSObject<KSPostAsset> *asset;
- (void)setAsset:(id)arg1;

@end

