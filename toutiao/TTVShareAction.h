//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTVMoreAction.h"

@class TTActivityShareManager, TTVShareActionEntity;

@interface TTVShareAction : TTVMoreAction
{
    TTActivityShareManager *_activityActionManager;
    CDUnknownBlockType _getPresentingViewControllerOfShare;
}

@property(copy, nonatomic) CDUnknownBlockType getPresentingViewControllerOfShare; // @synthesize getPresentingViewControllerOfShare=_getPresentingViewControllerOfShare;
@property(retain, nonatomic) TTActivityShareManager *activityActionManager; // @synthesize activityActionManager=_activityActionManager;
- (void).cxx_destruct;
- (void)execute:(long long)arg1;
- (void)sendVideoShareTrackWithItemType:(long long)arg1;
- (id)initWithEntity:(id)arg1;

// Remaining properties
@property(retain, nonatomic) TTVShareActionEntity *entity; // @dynamic entity;

@end

