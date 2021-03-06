//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WVWebViewDelegate-Protocol.h"

@class NSString, TBXSearchService, UIActivityIndicatorView, UIView;
@protocol TBSearchWebViewManagerDelegate;

@interface TBSearchWebViewManager : NSObject <WVWebViewDelegate>
{
    UIView *_view;
    UIView *_webView;
    id <TBSearchWebViewManagerDelegate> _delegate;
    long long _webviewType;
    TBXSearchService *_searchService;
    UIActivityIndicatorView *_loadingView;
    NSString *_cacheUrl;
    NSString *_currentDisableInterceptionType;
}

@property(retain, nonatomic) NSString *currentDisableInterceptionType; // @synthesize currentDisableInterceptionType=_currentDisableInterceptionType;
@property(retain, nonatomic) NSString *cacheUrl; // @synthesize cacheUrl=_cacheUrl;
@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) TBXSearchService *searchService; // @synthesize searchService=_searchService;
@property(nonatomic) long long webviewType; // @synthesize webviewType=_webviewType;
@property(nonatomic) __weak id <TBSearchWebViewManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (id)getUTParamsDict;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)changeViewFrame:(struct CGRect)arg1;
- (void)clearCacheUrl;
- (id)getUrlParamsWithUrl:(id)arg1 andParamNames:(id)arg2;
- (id)getDisableInterceptionTypeWithUrl:(id)arg1;
- (_Bool)openWKWebviewWithUrl:(id)arg1;
- (void)loadWithUrl:(id)arg1 andUrlParamNames:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

