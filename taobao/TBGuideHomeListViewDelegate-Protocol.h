//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TBGuideBaseHomeView, TBNavigationController;

@protocol TBGuideHomeListViewDelegate <NSObject>
- (void)guideListViewShowSearchTip;
- (void)guideListViewScrollDown;
- (void)guideListViewScrollUp;
- (_Bool)guideMenuItemShouldScrollToTop:(TBGuideBaseHomeView *)arg1;
- (void)guideMenuItemShowUpdateTitleWithNumber:(int)arg1;
- (TBNavigationController *)guideMenuItemNavigationController;
@end
