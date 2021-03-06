//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBWebViewController.h"

@class UIView, UIViewController;
@protocol WVWebViewProtocol;

@interface TBPSAdapterWebViewController : TBWebViewController
{
    _Bool _isNeedShowNavBar;
    UIViewController *_superViewController;
}

@property(nonatomic) _Bool isNeedShowNavBar; // @synthesize isNeedShowNavBar=_isNeedShowNavBar;
@property(nonatomic) __weak UIViewController *superViewController; // @synthesize superViewController=_superViewController;
- (void).cxx_destruct;
- (void)registeHandler:(id)arg1 withClassName:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)viewDidAppear:(_Bool)arg1;
- (void)setShouldStartLoadWithRequestBlock:(CDUnknownBlockType)arg1;
- (void)refresh;
- (void)stopLoading;
@property(readonly, nonatomic) __weak UIView<WVWebViewProtocol> *WVWebView;
- (id)initWithURL:(id)arg1;

@end

