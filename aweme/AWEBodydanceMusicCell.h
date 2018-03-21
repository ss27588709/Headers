//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "AWEAVPlayerWrapperDelegate-Protocol.h"

@class AWEAVPlayerWrapper, AWEMusicModel, AWETranslationTransitionController, NSString, UIButton, UIImageView, UILabel, UIView;

@interface AWEBodydanceMusicCell : UICollectionViewCell <AWEAVPlayerWrapperDelegate>
{
    AWEMusicModel *_music;
    UILabel *_durationLabel;
    UIButton *_detailButton;
    UIView *_coverContainer;
    UIImageView *_coverImageView;
    UIImageView *_coverMaskImageView;
    UIButton *_playButton;
    UILabel *_nameLabel;
    UILabel *_authorLabel;
    AWEAVPlayerWrapper *_audioPlayer;
    AWETranslationTransitionController *_transitionDelegate;
}

+ (id)timeString:(double)arg1;
+ (id)identifier;
@property(retain, nonatomic) AWETranslationTransitionController *transitionDelegate; // @synthesize transitionDelegate=_transitionDelegate;
@property(retain, nonatomic) AWEAVPlayerWrapper *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(retain, nonatomic) UILabel *authorLabel; // @synthesize authorLabel=_authorLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) UIImageView *coverMaskImageView; // @synthesize coverMaskImageView=_coverMaskImageView;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UIView *coverContainer; // @synthesize coverContainer=_coverContainer;
@property(retain, nonatomic) UIButton *detailButton; // @synthesize detailButton=_detailButton;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) AWEMusicModel *music; // @synthesize music=_music;
- (void).cxx_destruct;
- (void)_refreshAudioStatus:(unsigned long long)arg1;
- (void)resumeAnimationWithLayer:(id)arg1;
- (void)pauseAnimationWithLayer:(id)arg1;
- (void)playerWrapper:(id)arg1 didChangePlayStatus:(unsigned long long)arg2;
- (void)pause;
- (void)play;
- (void)playButtonClicked:(id)arg1;
- (void)detaiButtonClicked:(id)arg1;
- (void)configWithMusic:(id)arg1;
- (void)prepareForReuse;
- (void)clearPlayer;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
