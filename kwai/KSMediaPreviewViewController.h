//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSBaseViewController.h"

#import "KSLocalMusicPickViewControllerDelegate-Protocol.h"
#import "KSMediaPreviewViewController-Protocol.h"
#import "KSPreviewEffectViewControllerDelegate-Protocol.h"

@class KSMusicItem, KSNavAlertView, KSPreviewEffectViewController, KSVideoMusicPickViewController, NSObject, NSString, NSURL, UIView;
@protocol KSAttachmentAudioMedia, KSMediaOperationContextProtocol;

@interface KSMediaPreviewViewController : KSBaseViewController <KSPreviewEffectViewControllerDelegate, KSLocalMusicPickViewControllerDelegate, KSMediaPreviewViewController>
{
    _Bool _beautifyEnabledForFirstTime;
    _Bool _forceOpenMusicTag;
    _Bool _hasProcessedMedia;
    KSPreviewEffectViewController *_previewEffectViewController;
    UIView *_playView;
    NSObject<KSMediaOperationContextProtocol> *_context;
    NSObject<KSAttachmentAudioMedia> *_media;
    NSURL *_attachmentAudioURL;
    KSMusicItem *_defaultMusic;
    NSString *_initalCaption;
    double _contentHeight;
    KSNavAlertView *_navAlert;
    KSVideoMusicPickViewController *_musicPickerViewController;
}

+ (struct CGSize)playViewMaxSize;
@property(retain, nonatomic) KSVideoMusicPickViewController *musicPickerViewController; // @synthesize musicPickerViewController=_musicPickerViewController;
@property(nonatomic) _Bool hasProcessedMedia; // @synthesize hasProcessedMedia=_hasProcessedMedia;
@property(retain, nonatomic) KSNavAlertView *navAlert; // @synthesize navAlert=_navAlert;
@property(nonatomic) _Bool beautifyEnabledForFirstTime; // @synthesize beautifyEnabledForFirstTime=_beautifyEnabledForFirstTime;
@property(readonly, nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(nonatomic) _Bool forceOpenMusicTag; // @synthesize forceOpenMusicTag=_forceOpenMusicTag;
@property(retain, nonatomic) NSString *initalCaption; // @synthesize initalCaption=_initalCaption;
@property(retain, nonatomic) KSMusicItem *defaultMusic; // @synthesize defaultMusic=_defaultMusic;
@property(retain, nonatomic) NSURL *attachmentAudioURL; // @synthesize attachmentAudioURL=_attachmentAudioURL;
@property(retain, nonatomic) NSObject<KSAttachmentAudioMedia> *media; // @synthesize media=_media;
@property(retain, nonatomic) NSObject<KSMediaOperationContextProtocol> *context; // @synthesize context=_context;
@property(retain, nonatomic) UIView *playView; // @synthesize playView=_playView;
@property(retain, nonatomic) KSPreviewEffectViewController *previewEffectViewController; // @synthesize previewEffectViewController=_previewEffectViewController;
- (void).cxx_destruct;
- (id)ksuShowMetaData;
- (void)recoverWithMovieInfo:(id)arg1;
- (void)recoverWithMusicEffect:(id)arg1;
- (void)recoverWithFilterEffects:(id)arg1;
- (void)onDismiss;
- (void)onPreviousStep;
- (void)onNextStep;
- (void)didChangePreviewTab:(int)arg1;
- (void)configMenu;
- (void)changeMediaVolume:(double)arg1;
- (_Bool)autoPlayMedia;
- (id)mediaForPickMusic;
- (id)contextForBGM;
- (void)activateEffect:(id)arg1 inContext:(id)arg2;
- (void)updatePlayViewSwipable;
- (unsigned int)audioFileType;
- (id)mediaType;
- (id)createContext;
- (id)createPreviewEffectViewController;
- (id)createPlayView;
- (id)statisticName;
- (void)_processMediaIfNeed;
- (_Bool)prefersStatusBarHidden;
- (void)enableFinishButton:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithBeautifyEnabled:(_Bool)arg1;
- (void)makeAndSharePicturesWithContext:(id)arg1 type:(long long)arg2 target:(id)arg3;
- (void)p_didSelectCloudBGM;
- (void)p_didSelectLocalBGM;
- (void)didTapAdvanceEdit;
- (void)didChangeLeftPosition:(CDStruct_1b6d18a9)arg1 rightPosition:(CDStruct_1b6d18a9)arg2;
- (id)displayingEffectForPickingEffect:(id)arg1;
- (void)didChangeBGMValue:(float)arg1;
- (void)didChangeOriginValue:(float)arg1;
- (void)didSelectEffect:(id)arg1;
- (void)animateChangeVisiableHeight:(double)arg1;
- (void)localMusicPickViewController:(id)arg1 didSelectLocalMusic:(id)arg2 startTimeProportion:(float)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
