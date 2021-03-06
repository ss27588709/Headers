//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AWEFeedMessage-Protocol.h"

@class AWEAwemeDiggHintView, AWEBubble, NSString, UIImageView, UILabel, UITableView, UIView;

@interface AWEFeedGuideManager : NSObject <AWEFeedMessage>
{
    _Bool _transitionToProfileWithClick;
    _Bool _isNewUser;
    _Bool _isStoryViewOpen;
    _Bool _closeDiggHintView;
    _Bool _enableGuideEnhance;
    AWEAwemeDiggHintView *_diggHintView;
    AWEBubble *_followHintView;
    AWEBubble *_slideHintView;
    AWEBubble *_enterMusicDetailView;
    UIView *_feedScreenBounceMaskView;
    UIImageView *_handImageView;
    UILabel *_slideUpDownHintLabel;
    UITableView *_tableView;
    long long _screenBounceAnimationTimes;
    struct CGPoint _originOffSet;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool enableGuideEnhance; // @synthesize enableGuideEnhance=_enableGuideEnhance;
@property(nonatomic) struct CGPoint originOffSet; // @synthesize originOffSet=_originOffSet;
@property(nonatomic) long long screenBounceAnimationTimes; // @synthesize screenBounceAnimationTimes=_screenBounceAnimationTimes;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UILabel *slideUpDownHintLabel; // @synthesize slideUpDownHintLabel=_slideUpDownHintLabel;
@property(retain, nonatomic) UIImageView *handImageView; // @synthesize handImageView=_handImageView;
@property(retain, nonatomic) UIView *feedScreenBounceMaskView; // @synthesize feedScreenBounceMaskView=_feedScreenBounceMaskView;
@property(retain, nonatomic) AWEBubble *enterMusicDetailView; // @synthesize enterMusicDetailView=_enterMusicDetailView;
@property(retain, nonatomic) AWEBubble *slideHintView; // @synthesize slideHintView=_slideHintView;
@property(retain, nonatomic) AWEBubble *followHintView; // @synthesize followHintView=_followHintView;
@property(nonatomic) _Bool closeDiggHintView; // @synthesize closeDiggHintView=_closeDiggHintView;
@property(retain, nonatomic) AWEAwemeDiggHintView *diggHintView; // @synthesize diggHintView=_diggHintView;
@property(nonatomic) _Bool isStoryViewOpen; // @synthesize isStoryViewOpen=_isStoryViewOpen;
@property(nonatomic) _Bool isNewUser; // @synthesize isNewUser=_isNewUser;
- (void).cxx_destruct;
- (void)addVideoIDToShownVideoIDDictionary:(id)arg1;
- (void)removeEnterMusicDetailBubble;
- (id)showEnterMusicDetailGuideIfNeeded:(id)arg1;
- (_Bool)checkIfShouldShowShareGuideAnimationWithVideoID:(id)arg1;
- (id)followHintDefaultKey;
- (_Bool)closeFollowHintGuideIfNeeded;
- (void)showFollowHintGuideIfNeededOnView:(id)arg1 frame:(struct CGRect)arg2 userID:(id)arg3;
- (id)diggHintDefaultKey;
- (_Bool)closeDiggHintGuideIfNeeded;
- (void)_showDiggHintGuideOnView:(id)arg1;
- (void)endFeedScreenBounceAnimation;
- (void)repeatScreenBounceGuideAnimationIfNeeded;
- (void)beginScreenBounceGuideAnimation:(id)arg1;
- (void)showScreenBounceGuideViewIfNeeded:(id)arg1;
- (void)showDiggHintGuideOnViewIfNeeded:(id)arg1;
- (_Bool)shouldShowTransitionGuide;
- (void)transitionToProfileWithGesture;
- (void)transitionToProfileWithClick;
- (void)showFeedTransitionGuide:(id)arg1 duration:(double)arg2;
- (void)didCloseStoryView;
- (void)didOpenStoryView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

