//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LYWService-Protocol.h"

@class KSEImageFilterRenderer, KSMPreviewPlayer, LYWStore, NSString;
@protocol KSMediaPreviewAsset;

@interface KSMediaEditPreviewService : NSObject <LYWService>
{
    _Bool _isActive;
    LYWStore *_store;
    NSObject<KSMediaPreviewAsset> *_asset;
    KSMPreviewPlayer *_videoBackendPlayer;
    KSEImageFilterRenderer *_filterRenderer;
    id _applicationDidEnterBackgroundNotificationObserver;
    id _applicationWillEnterForegroundNotificationObserver;
}

@property(retain, nonatomic) id applicationWillEnterForegroundNotificationObserver; // @synthesize applicationWillEnterForegroundNotificationObserver=_applicationWillEnterForegroundNotificationObserver;
@property(retain, nonatomic) id applicationDidEnterBackgroundNotificationObserver; // @synthesize applicationDidEnterBackgroundNotificationObserver=_applicationDidEnterBackgroundNotificationObserver;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(retain, nonatomic) KSEImageFilterRenderer *filterRenderer; // @synthesize filterRenderer=_filterRenderer;
@property(retain, nonatomic) KSMPreviewPlayer *videoBackendPlayer; // @synthesize videoBackendPlayer=_videoBackendPlayer;
@property(retain, nonatomic) NSObject<KSMediaPreviewAsset> *asset; // @synthesize asset=_asset;
@property(nonatomic) __weak LYWStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (id)_rootState;
- (void)KSMediaEditSeekAction$Port:(id)arg1;
- (void)KSMediaEditClippedRangeAction$Port:(id)arg1;
- (void)KSMediaEditPreviewServiceAction$Port:(id)arg1;
- (void)dealloc;
- (void)KSMediaEditPreviewInitializationAction$Port:(id)arg1;
- (void)KSSetBgmVolumeServiceAction$Port:(id)arg1;
- (void)KSSetOriginalAudioVolumeServiceAction$Port:(id)arg1;
- (void)KSAudioItemInitialServiceAction$Port:(id)arg1;
- (void)KSSetAudioItemSelectedServiceAction$Port:(id)arg1;
- (void)KSMediaEditGoToPageAction$Port:(id)arg1;
- (void)KSSelectTabAction$Port:(id)arg1;
- (void)setPageURL:(id)arg1;
- (void)KSMediaEditFilterLoadPreviewImagesAction$Port:(id)arg1;
- (void)KSSetFilterValueServiceAction$Port:(id)arg1;
- (void)KSDisableBeautifyServiceAction$Port:(id)arg1;
- (void)KSSelectFilterServiceAction$Port:(id)arg1;
- (void)KSMediaEditPreviewFilterSwipeAction$Port:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
