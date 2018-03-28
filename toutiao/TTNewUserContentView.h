//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

@class TTImageView, TTProfileHeaderVisitorView, TTTextRightArrowButton;

@interface TTNewUserContentView : SSThemedView
{
    SSThemedView *_avatarContainerView;
    TTImageView *_avatarImageView;
    TTTextRightArrowButton *_usernameButton;
    TTProfileHeaderVisitorView *_visitorContainerView;
}

@property(retain, nonatomic) TTProfileHeaderVisitorView *visitorContainerView; // @synthesize visitorContainerView=_visitorContainerView;
@property(retain, nonatomic) TTTextRightArrowButton *usernameButton; // @synthesize usernameButton=_usernameButton;
@property(retain, nonatomic) TTImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) SSThemedView *avatarContainerView; // @synthesize avatarContainerView=_avatarContainerView;
- (void).cxx_destruct;
- (void)didTapUsernameButton:(id)arg1;
- (void)refreshUserVisitedHistoryInfo;
- (void)refreshUserInfo;
- (void)themeChanged:(id)arg1;

@end
