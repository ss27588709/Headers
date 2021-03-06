//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FriendsFollowsVC.h"

#import "WBFansUserTableViewCellDelegate-Protocol.h"
#import "WBUserListOverlayViewDelegate-Protocol.h"

@class NSString, WBFollowListTableViewCell, WBSearchEngine, WBUser, WBUserListOverlayView;
@protocol WBFollowingUserSearchViewControllerDelegate;

@interface WBFollowingUserSearchViewController : FriendsFollowsVC <WBUserListOverlayViewDelegate, WBFansUserTableViewCellDelegate>
{
    struct {
        unsigned int viewAppeared:1;
    } _flags;
    _Bool _shouldDisableUserInteractionWhileEditing;
    _Bool _customEditing;
    _Bool _customEditingAnimationInProgress;
    NSString *_query;
    id <WBFollowingUserSearchViewControllerDelegate> _searchViewdelegate;
    WBSearchEngine *_searchEngine;
    WBUser *_user;
    WBFollowListTableViewCell *_cellDisplayingMenuOptions;
    WBUserListOverlayView *_overlayView;
}

@property(nonatomic) _Bool customEditingAnimationInProgress; // @synthesize customEditingAnimationInProgress=_customEditingAnimationInProgress;
@property(nonatomic) _Bool customEditing; // @synthesize customEditing=_customEditing;
@property(retain, nonatomic) WBUserListOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) WBFollowListTableViewCell *cellDisplayingMenuOptions; // @synthesize cellDisplayingMenuOptions=_cellDisplayingMenuOptions;
@property(retain, nonatomic) WBUser *user; // @synthesize user=_user;
@property(retain, nonatomic) WBSearchEngine *searchEngine; // @synthesize searchEngine=_searchEngine;
@property(nonatomic) _Bool shouldDisableUserInteractionWhileEditing; // @synthesize shouldDisableUserInteractionWhileEditing=_shouldDisableUserInteractionWhileEditing;
@property(nonatomic) id <WBFollowingUserSearchViewControllerDelegate> searchViewdelegate; // @synthesize searchViewdelegate=_searchViewdelegate;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)overlayView:(id)arg1 didHitTest:(struct CGPoint)arg2 withEvent:(id)arg3;
- (_Bool)isTopUserInCell:(id)arg1 withUser:(id)arg2;
- (_Bool)shouldShowMenuOptionsViewInCell:(id)arg1;
- (void)contextMenuWillShowInCell:(id)arg1;
- (void)contextMenuWillHideInCell:(id)arg1;
- (void)contextMenuDidShowInCell:(id)arg1;
- (void)contextMenuDidHideInCell:(id)arg1;
- (void)contextMenuCellDidSelectFollowOption:(id)arg1 withUser:(id)arg2;
- (void)contextMenuCellDidSelectTopOption:(id)arg1 withUser:(id)arg2 isTopUser:(_Bool)arg3;
- (void)hideMenuOptionsAnimated:(_Bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)reloadSeverGroup;
- (void)stickyOrCancelFollow:(id)arg1 isTop:(_Bool)arg2;
- (void)addOrRemoveUserToTop:(id)arg1 isAdd:(_Bool)arg2;
- (_Bool)checkUserInTop:(id)arg1;
- (_Bool)isFromSearchFollow;
- (_Bool)tableViewShouldBypassEmptyView:(id)arg1;
- (void)reloadData;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

