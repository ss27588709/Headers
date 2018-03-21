//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSBaseViewController.h"

#import "KSURLPortalAnnotation-Protocol.h"

@class KSLoadingView, KSThirdAuthService, NSDictionary, NSString;

@interface KSThirdAuthViewController : KSBaseViewController <KSURLPortalAnnotation>
{
    NSDictionary *_param;
    KSThirdAuthService *_authService;
    KSLoadingView *_loadingView;
}

+ (id)ks_portalPath;
@property(retain, nonatomic) KSLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) KSThirdAuthService *authService; // @synthesize authService=_authService;
@property(retain, nonatomic) NSDictionary *param; // @synthesize param=_param;
- (void).cxx_destruct;
- (void)buildUI;
- (void)buildTitleBar;
- (void)presentOnViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)confirmLogin;
- (void)dismiss;
- (void)didTapBackNagigationButton:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (_Bool)ks_presentViewControllerWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
