//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSListSectionController.h"

#import "KSCommentReplyActionCellDelegate-Protocol.h"
#import "KSFeedCommentCellDelegate-Protocol.h"

@class KSFeedCommentRepliesModel, KSFeedCommentViewModel, KS_comment, NSMutableArray, NSString;
@protocol KSFeedCommentSectionControllerDelegate;

@interface KSFeedCommentSectionController : KSListSectionController <KSCommentReplyActionCellDelegate, KSFeedCommentCellDelegate>
{
    _Bool _allowsExpand;
    id <KSFeedCommentSectionControllerDelegate> _delegate;
    struct KS_comment *_selectedComment;
    long long _collapseType;
    KSFeedCommentRepliesModel *_repliesModel;
    NSMutableArray *_insertedReplies;
    NSMutableArray *_items;
    long long _basicRepliesCount;
}

@property(nonatomic) _Bool allowsExpand; // @synthesize allowsExpand=_allowsExpand;
@property(nonatomic) long long basicRepliesCount; // @synthesize basicRepliesCount=_basicRepliesCount;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSMutableArray *insertedReplies; // @synthesize insertedReplies=_insertedReplies;
@property(retain, nonatomic) KSFeedCommentRepliesModel *repliesModel; // @synthesize repliesModel=_repliesModel;
@property(nonatomic) long long collapseType; // @synthesize collapseType=_collapseType;
@property(retain, nonatomic) KS_comment *selectedComment; // @synthesize selectedComment=_selectedComment;
@property(nonatomic) __weak id <KSFeedCommentSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapUnfoldOfCommentCell:(id)arg1;
- (void)didTapFoldOfCommentCell:(id)arg1;
- (void)commentCell:(id)arg1 didTapNameOfUser:(id)arg2;
- (void)didTapAvatarOfCommentCell:(id)arg1;
- (void)didTapCollapseButtonOfActionCell:(id)arg1;
- (void)didTapExpandButtonOfActionCell:(id)arg1;
- (void)performUnfoldingAnimation;
- (struct KS_comment *)commentAtIndex:(long long)arg1;
- (long long)indexOfItem:(id)arg1;
- (void)removeReply:(struct KS_comment *)arg1;
- (void)insertReply:(struct KS_comment *)arg1 animated:(_Bool)arg2;
- (void)insertReply:(struct KS_comment *)arg1;
- (void)showNotifyTintForSelectedComment;
- (void)didSelectItemAtIndex:(long long)arg1;
- (double)heightForItemAtIndex:(long long)arg1;
- (void)willDisplayCell:(id)arg1 atIndex:(long long)arg2;
- (id)cellForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (void)reloadData;
- (void)didUpdateToObject:(id)arg1;
@property(readonly, nonatomic) KSFeedCommentViewModel *viewModel; // @dynamic viewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

