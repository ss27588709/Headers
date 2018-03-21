//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TTFClearanceSectionView, TTFQuizShowLiveRoomViewModel, UILabel;

@interface TTFClearanceUserAndTeamView : UIView
{
    TTFQuizShowLiveRoomViewModel *_viewModel;
    TTFClearanceSectionView *_usersContainerView;
    TTFClearanceSectionView *_teamsContainerView;
    UIView *_teamsHintContainerView;
    UIView *_teamsHintLeftLineView;
    UILabel *_teamsHintLabel;
    UIView *_teamsHintRightLineView;
}

@property(retain, nonatomic) UIView *teamsHintRightLineView; // @synthesize teamsHintRightLineView=_teamsHintRightLineView;
@property(retain, nonatomic) UILabel *teamsHintLabel; // @synthesize teamsHintLabel=_teamsHintLabel;
@property(retain, nonatomic) UIView *teamsHintLeftLineView; // @synthesize teamsHintLeftLineView=_teamsHintLeftLineView;
@property(retain, nonatomic) UIView *teamsHintContainerView; // @synthesize teamsHintContainerView=_teamsHintContainerView;
@property(retain, nonatomic) TTFClearanceSectionView *teamsContainerView; // @synthesize teamsContainerView=_teamsContainerView;
@property(retain, nonatomic) TTFClearanceSectionView *usersContainerView; // @synthesize usersContainerView=_usersContainerView;
@property(retain, nonatomic) TTFQuizShowLiveRoomViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)teamsViewModel;
- (id)usersViewModel;
- (void)ttf_setupConstraint;
- (void)ttf_setupView;
- (id)initWithViewModel:(id)arg1;

@end
