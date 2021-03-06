//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSEffectSelectCollectionViewCell.h"

@class KSMediaEditMagicFinger, NSCache, NSObject, NSString, UIImageView;
@protocol OS_dispatch_queue;

@interface KSMediaEditMagicFingerEffectCell : KSEffectSelectCollectionViewCell
{
    UIImageView *_frameImageView;
    KSMediaEditMagicFinger *_viewModel;
    NSCache *_imageCache;
    NSObject<OS_dispatch_queue> *_imageLoadingQueue;
    NSString *_selectedObserveToken;
}

@property(retain, nonatomic) NSString *selectedObserveToken; // @synthesize selectedObserveToken=_selectedObserveToken;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *imageLoadingQueue; // @synthesize imageLoadingQueue=_imageLoadingQueue;
@property(retain, nonatomic) NSCache *imageCache; // @synthesize imageCache=_imageCache;
@property(readonly, nonatomic) KSMediaEditMagicFinger *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIImageView *frameImageView; // @synthesize frameImageView=_frameImageView;
- (void).cxx_destruct;
- (void)_updateSelectState;
- (void)bindViewModel:(id)arg1;
- (void)startEffectAnimation;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

