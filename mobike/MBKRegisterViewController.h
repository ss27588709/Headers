//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKBaseViewController.h"

@class NSString;

@interface MBKRegisterViewController : MBKBaseViewController
{
    _Bool _showDismissButton;
    NSString *_pageTitle;
}

@property(nonatomic) _Bool showDismissButton; // @synthesize showDismissButton=_showDismissButton;
@property(retain, nonatomic) NSString *pageTitle; // @synthesize pageTitle=_pageTitle;
- (void).cxx_destruct;
- (void)viewWillAppear:(_Bool)arg1;
- (id)createNavigationBar;
- (long long)preferredStatusBarStyle;
- (void)back;
- (void)addNavigationBar;
- (void)viewDidLoad;

@end

