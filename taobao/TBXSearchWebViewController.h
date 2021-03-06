//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBXSearchBaseViewController.h"

#import "TBSearchPanRelationRecognizerExpandAndContractDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSString, TBSearchOnesearchNXConfigModel, TBSearchPanRelationRecognizer, TBXSearchDynamicPortalViewController;

@interface TBXSearchWebViewController : TBXSearchBaseViewController <UIScrollViewDelegate, UIGestureRecognizerDelegate, TBSearchPanRelationRecognizerExpandAndContractDelegate>
{
    _Bool _enableNewWebviewScroll;
    NSString *_url;
    TBSearchOnesearchNXConfigModel *_nxConfigModel;
    TBSearchPanRelationRecognizer *_panRelationRecognizer;
    TBXSearchDynamicPortalViewController *_dynamicPortalVc;
}

@property(retain, nonatomic) TBXSearchDynamicPortalViewController *dynamicPortalVc; // @synthesize dynamicPortalVc=_dynamicPortalVc;
@property(nonatomic) _Bool enableNewWebviewScroll; // @synthesize enableNewWebviewScroll=_enableNewWebviewScroll;
@property(retain, nonatomic) TBSearchPanRelationRecognizer *panRelationRecognizer; // @synthesize panRelationRecognizer=_panRelationRecognizer;
@property(retain, nonatomic) TBSearchOnesearchNXConfigModel *nxConfigModel; // @synthesize nxConfigModel=_nxConfigModel;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)contract:(id)arg1;
- (void)expand:(id)arg1;
- (void)resetScrollCompensator;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)search;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

