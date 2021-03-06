//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

@class SSThemedLabel;
@protocol FRActionDataProtocol, FRDetailNatantTabHeaderViewSelectDelegate;

@interface FRDetailNatantTabHeaderView : SSThemedView
{
    id <FRDetailNatantTabHeaderViewSelectDelegate> _delegate;
    unsigned long long _tabType;
    long long _entityID;
    unsigned long long _actionType;
    double _width;
    SSThemedLabel *_allCommentsLabel;
    SSThemedLabel *_repostLabel;
    SSThemedLabel *_digUsersLabel;
    SSThemedView *_separatorLine;
    SSThemedView *_bottomSlideLine;
    SSThemedLabel *_curSelectLable;
    SSThemedLabel *_caculateWidthLabel;
    id <FRActionDataProtocol> _actionDataModel;
}

@property(retain, nonatomic) id <FRActionDataProtocol> actionDataModel; // @synthesize actionDataModel=_actionDataModel;
@property(retain, nonatomic) SSThemedLabel *caculateWidthLabel; // @synthesize caculateWidthLabel=_caculateWidthLabel;
@property(retain, nonatomic) SSThemedLabel *curSelectLable; // @synthesize curSelectLable=_curSelectLable;
@property(retain, nonatomic) SSThemedView *bottomSlideLine; // @synthesize bottomSlideLine=_bottomSlideLine;
@property(retain, nonatomic) SSThemedView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) SSThemedLabel *digUsersLabel; // @synthesize digUsersLabel=_digUsersLabel;
@property(retain, nonatomic) SSThemedLabel *repostLabel; // @synthesize repostLabel=_repostLabel;
@property(retain, nonatomic) SSThemedLabel *allCommentsLabel; // @synthesize allCommentsLabel=_allCommentsLabel;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
@property(nonatomic) long long entityID; // @synthesize entityID=_entityID;
@property(nonatomic) unsigned long long tabType; // @synthesize tabType=_tabType;
@property(nonatomic) __weak id <FRDetailNatantTabHeaderViewSelectDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)digUserLabelTapped:(id)arg1;
- (void)repostLabelTapped:(id)arg1;
- (void)allCommentLabelTapped:(id)arg1;
- (void)configureTabType:(unsigned long long)arg1 withActionType:(unsigned long long)arg2;
- (void)refreshUI;
- (void)updateRepostLabelWithRepostCount:(long long)arg1;
- (void)updateAllCommentsLabelWithCommentCount:(long long)arg1;
- (void)updateDigUsersLabelWithDiggCount:(long long)arg1;
- (void)addObservers;
- (void)reloadData;
- (void)dealloc;
- (id)initWithWidth:(double)arg1 withEntityID:(long long)arg2 withTabType:(unsigned long long)arg3;

@end

