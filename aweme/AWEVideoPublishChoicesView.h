//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEFansInfluenceEntranceView, AWESelectedMarkButton, UIButton, UITextView;

@interface AWEVideoPublishChoicesView : UIView
{
    UIButton *_buttonDraft;
    UIButton *_buttonPublish;
    UIButton *_buttonChallange;
    UIButton *_buttonLocation;
    AWESelectedMarkButton *_buttonSelectedLocation;
    UIButton *_buttonDeleteLocation;
    UIButton *_buttonAt;
    UIButton *_buttonPrivate;
    UIButton *_buttonSaveAlbum;
    UITextView *_titleTextView;
    AWESelectedMarkButton *_challengeContainer;
    UIButton *_buttonSyncToTwitter;
    UIButton *_buttonSyncToFacebook;
    UIButton *_buttonSyncToYouTube;
    UIView *_spliter;
    AWEFansInfluenceEntranceView *_fansEntranceView;
}

@property(retain, nonatomic) AWEFansInfluenceEntranceView *fansEntranceView; // @synthesize fansEntranceView=_fansEntranceView;
@property(retain, nonatomic) UIView *spliter; // @synthesize spliter=_spliter;
@property(retain, nonatomic) UIButton *buttonSyncToYouTube; // @synthesize buttonSyncToYouTube=_buttonSyncToYouTube;
@property(retain, nonatomic) UIButton *buttonSyncToFacebook; // @synthesize buttonSyncToFacebook=_buttonSyncToFacebook;
@property(retain, nonatomic) UIButton *buttonSyncToTwitter; // @synthesize buttonSyncToTwitter=_buttonSyncToTwitter;
@property(retain, nonatomic) AWESelectedMarkButton *challengeContainer; // @synthesize challengeContainer=_challengeContainer;
@property(retain, nonatomic) UITextView *titleTextView; // @synthesize titleTextView=_titleTextView;
@property(retain, nonatomic) UIButton *buttonSaveAlbum; // @synthesize buttonSaveAlbum=_buttonSaveAlbum;
@property(retain, nonatomic) UIButton *buttonPrivate; // @synthesize buttonPrivate=_buttonPrivate;
@property(retain, nonatomic) UIButton *buttonAt; // @synthesize buttonAt=_buttonAt;
@property(retain, nonatomic) UIButton *buttonDeleteLocation; // @synthesize buttonDeleteLocation=_buttonDeleteLocation;
@property(retain, nonatomic) AWESelectedMarkButton *buttonSelectedLocation; // @synthesize buttonSelectedLocation=_buttonSelectedLocation;
@property(retain, nonatomic) UIButton *buttonLocation; // @synthesize buttonLocation=_buttonLocation;
@property(retain, nonatomic) UIButton *buttonChallange; // @synthesize buttonChallange=_buttonChallange;
@property(retain, nonatomic) UIButton *buttonPublish; // @synthesize buttonPublish=_buttonPublish;
@property(retain, nonatomic) UIButton *buttonDraft; // @synthesize buttonDraft=_buttonDraft;
- (void).cxx_destruct;
- (void)hideToolViews:(_Bool)arg1;
- (void)resetLocationButtonState;
- (void)refreshLocationWith:(id)arg1;
- (void)refreshChallengeStatusWithModel:(id)arg1;
- (_Bool)showPrivate;
- (void)buildUI;
- (id)init;

@end

