//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XSearchSDKChildBaseViewController.h"

#import "TBSRPXSearchDynamicPortalViewControllerDelegate-Protocol.h"
#import "XSearchSDKChildBaseViewControllerDelegate-Protocol.h"

@class NSString, TBSRPXSearchDynamicPortalViewController;

@interface TBSRPXSearchWebViewController : XSearchSDKChildBaseViewController <TBSRPXSearchDynamicPortalViewControllerDelegate, XSearchSDKChildBaseViewControllerDelegate>
{
    TBSRPXSearchDynamicPortalViewController *_dynamicPortalVc;
    NSString *_url;
}

@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) TBSRPXSearchDynamicPortalViewController *dynamicPortalVc; // @synthesize dynamicPortalVc=_dynamicPortalVc;
- (void).cxx_destruct;
- (void)findScroll;
- (void)filterSearchFail:(id)arg1;
- (void)filterSearchSuccess;
- (void)filterSearchStart;
- (void)didFinishLoad;
- (void)reloadData;
- (void)tabSearch;
- (void)viewDidLoad;
- (id)initWithService:(id)arg1 Delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
