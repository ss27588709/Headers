//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIImage;

@interface CKBaseViewController : UIViewController
{
    _Bool hideStatusBar;
    _Bool _isContainedInTabBarController;
    UIImage *_backImageBefore7;
}

@property(retain, nonatomic) UIImage *backImageBefore7; // @synthesize backImageBefore7=_backImageBefore7;
@property(nonatomic) _Bool isContainedInTabBarController; // @synthesize isContainedInTabBarController=_isContainedInTabBarController;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)doSomethingInMainThread:(CDUnknownBlockType)arg1;
- (void)appendDismissPresentButtonWithNormalImage:(id)arg1 andHighlightedImage:(id)arg2;
- (id)findHairlineImageViewUnder:(id)arg1;
- (double)pureHeightOfView;
- (double)pureWidthOfView;
- (double)bottomOfViewOffset;
- (double)topOfViewOffset;
- (double)statusBarHeight;
- (double)navBarHeight;
- (void)hideStatusBar:(_Bool)arg1;
- (_Bool)prefersStatusBarHidden;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)dismiss;
- (void)viewDidLoad;

@end

