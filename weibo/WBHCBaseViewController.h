//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewController.h"

@interface WBHCBaseViewController : WBTableViewController
{
    _Bool _isTranslucent;
    double _alphaRange;
    double _scrollPosition;
}

@property(nonatomic) double scrollPosition; // @synthesize scrollPosition=_scrollPosition;
@property(nonatomic) _Bool isTranslucent; // @synthesize isTranslucent=_isTranslucent;
@property(nonatomic) double alphaRange; // @synthesize alphaRange=_alphaRange;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateNavigationBarAndStatusBar;
- (void)updateStatusBar:(_Bool)arg1;
- (void)updateNavigationBar;
- (double)navigationBarAlphaValue;
- (void)updateNavigationBar:(double)arg1;
- (void)updateNavigationBarTextContents;
- (void)updateNavigationBarTextContentsWithTranslucent:(_Bool)arg1;
- (void)configTitleViews:(_Bool)arg1 alpha:(double)arg2;
- (id)backButtonWithBackgroundType:(int)arg1;
- (void)backButtonPressed:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)moduleID;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

