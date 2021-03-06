//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class JSContext, NSDictionary, NSMutableDictionary, NSString, NSURL, UIView, UIViewController, WXComponentManager, WXResourceLoader, WXRootView, WXThreadSafeMutableDictionary;

@interface WXSDKInstance : NSObject
{
    NSDictionary *_options;
    id _jsData;
    WXResourceLoader *_mainBundleLoader;
    WXComponentManager *_componentManager;
    WXRootView *_rootView;
    WXThreadSafeMutableDictionary *_moduleEventObservers;
    _Bool _performanceCommit;
    _Bool _needDestroy;
    _Bool _syncDestroyComponentManager;
    _Bool _isRootViewFrozen;
    _Bool _needValidate;
    _Bool _needPrerender;
    _Bool _trackComponent;
    UIViewController *_viewController;
    NSURL *_scriptURL;
    WXSDKInstance *_parentInstance;
    NSString *_parentNodeRef;
    NSString *_instanceId;
    long long _state;
    CDUnknownBlockType _onCreate;
    CDUnknownBlockType _onLayoutChange;
    CDUnknownBlockType _renderFinish;
    CDUnknownBlockType _refreshFinish;
    NSString *_bundleType;
    CDUnknownBlockType _onFailed;
    CDUnknownBlockType _onJSRuntimeException;
    CDUnknownBlockType _onScroll;
    CDUnknownBlockType _onRenderProgress;
    CDUnknownBlockType _onJSDownloadedFinish;
    CDUnknownBlockType _onRenderTerminateWhenJSDownloadedFinish;
    NSMutableDictionary *_userInfo;
    NSString *_bizType;
    NSString *_pageName;
    id _pageObject;
    NSMutableDictionary *_performanceDict;
    NSDictionary *_properties;
    double _networkTime;
    CDUnknownBlockType _updateFinish;
    double _viewportWidth;
    WXThreadSafeMutableDictionary *_moduleInstances;
    NSMutableDictionary *_naviBarStyles;
    NSMutableDictionary *_styleConfigs;
    NSMutableDictionary *_attrConfigs;
    NSString *_mainBundleString;
    JSContext *_instanceJavaScriptContext;
    struct CGRect _frame;
}

@property(retain, nonatomic) JSContext *instanceJavaScriptContext; // @synthesize instanceJavaScriptContext=_instanceJavaScriptContext;
@property(retain, nonatomic) NSString *mainBundleString; // @synthesize mainBundleString=_mainBundleString;
@property(retain, nonatomic) NSMutableDictionary *attrConfigs; // @synthesize attrConfigs=_attrConfigs;
@property(retain, nonatomic) NSMutableDictionary *styleConfigs; // @synthesize styleConfigs=_styleConfigs;
@property(retain, nonatomic) NSMutableDictionary *naviBarStyles; // @synthesize naviBarStyles=_naviBarStyles;
@property(retain, nonatomic) WXThreadSafeMutableDictionary *moduleInstances; // @synthesize moduleInstances=_moduleInstances;
@property(nonatomic) double viewportWidth; // @synthesize viewportWidth=_viewportWidth;
@property(copy, nonatomic) CDUnknownBlockType updateFinish; // @synthesize updateFinish=_updateFinish;
@property(nonatomic) double networkTime; // @synthesize networkTime=_networkTime;
@property(retain, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) NSMutableDictionary *performanceDict; // @synthesize performanceDict=_performanceDict;
@property(nonatomic) __weak id pageObject; // @synthesize pageObject=_pageObject;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(nonatomic) _Bool trackComponent; // @synthesize trackComponent=_trackComponent;
@property(retain) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(copy, nonatomic) CDUnknownBlockType onRenderTerminateWhenJSDownloadedFinish; // @synthesize onRenderTerminateWhenJSDownloadedFinish=_onRenderTerminateWhenJSDownloadedFinish;
@property(copy, nonatomic) CDUnknownBlockType onJSDownloadedFinish; // @synthesize onJSDownloadedFinish=_onJSDownloadedFinish;
@property(copy, nonatomic) CDUnknownBlockType onRenderProgress; // @synthesize onRenderProgress=_onRenderProgress;
@property(copy, nonatomic) CDUnknownBlockType onScroll; // @synthesize onScroll=_onScroll;
@property(copy, nonatomic) CDUnknownBlockType onJSRuntimeException; // @synthesize onJSRuntimeException=_onJSRuntimeException;
@property(copy, nonatomic) CDUnknownBlockType onFailed; // @synthesize onFailed=_onFailed;
@property(retain, nonatomic) NSString *bundleType; // @synthesize bundleType=_bundleType;
@property(copy, nonatomic) CDUnknownBlockType refreshFinish; // @synthesize refreshFinish=_refreshFinish;
@property(copy, nonatomic) CDUnknownBlockType renderFinish; // @synthesize renderFinish=_renderFinish;
@property(copy, nonatomic) CDUnknownBlockType onLayoutChange; // @synthesize onLayoutChange=_onLayoutChange;
@property(copy, nonatomic) CDUnknownBlockType onCreate; // @synthesize onCreate=_onCreate;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) _Bool needPrerender; // @synthesize needPrerender=_needPrerender;
@property(retain, nonatomic) NSString *instanceId; // @synthesize instanceId=_instanceId;
@property(nonatomic) __weak NSString *parentNodeRef; // @synthesize parentNodeRef=_parentNodeRef;
@property(nonatomic) __weak WXSDKInstance *parentInstance; // @synthesize parentInstance=_parentInstance;
@property(retain, nonatomic) NSURL *scriptURL; // @synthesize scriptURL=_scriptURL;
@property(nonatomic) _Bool needValidate; // @synthesize needValidate=_needValidate;
@property(nonatomic) _Bool isRootViewFrozen; // @synthesize isRootViewFrozen=_isRootViewFrozen;
@property(retain, nonatomic) UIView *rootView; // @synthesize rootView=_rootView;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) WXComponentManager *componentManager;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)removeObservers;
- (void)addObservers;
- (void)moduleEventNotification:(id)arg1;
- (void)removeModuleEventObserver:(id)arg1 moduleClassName:(id)arg2;
- (void)_removeModuleEventObserverWithModuleMethod:(id)arg1;
- (void)addModuleEventObservers:(id)arg1 callback:(id)arg2 option:(id)arg3 moduleClassName:(id)arg4;
- (void)_addModuleEventObserversWithModuleMethod:(id)arg1;
- (_Bool)checkModuleEventRegistered:(id)arg1 moduleClassName:(id)arg2;
- (id)completeURL:(id)arg1;
@property(readonly, nonatomic) double pixelScaleFactor;
- (void)fireModuleEvent:(Class)arg1 eventName:(id)arg2 params:(id)arg3;
- (void)fireGlobalEvent:(id)arg1 params:(id)arg2;
- (unsigned long long)numberOfComponents;
- (id)componentForRef:(id)arg1;
- (id)moduleForClass:(Class)arg1;
- (void)updateState:(long long)arg1;
- (void)forceGarbageCollection;
- (void)destroyInstance;
- (void)refreshInstance:(id)arg1;
- (void)reload:(_Bool)arg1;
- (void)_renderWithRequest:(id)arg1 options:(id)arg2 data:(id)arg3;
- (void)renderWithMainBundleString:(id)arg1;
- (_Bool)_handleConfigCenter;
- (void)_renderWithMainBundleString:(id)arg1;
- (void)renderView:(id)arg1 options:(id)arg2 data:(id)arg3;
- (void)renderWithURL:(id)arg1 options:(id)arg2 data:(id)arg3;
- (void)renderWithURL:(id)arg1;
- (id)description;
- (id)init;
- (void)dealloc;
- (id)utArgs;
- (void)addUtArgs:(id)arg1;
- (void)setWxExtDict:(id)arg1;
- (id)wxExtDict;
- (void)creatFinish;
- (void)finishPerformance;
- (void)reloadData:(id)arg1;
- (void)setMirrorX:(_Bool)arg1;
- (_Bool)getMirrorX;
- (void *)readRDMPixelWidth:(int *)arg1 height:(int *)arg2;
- (void)inputBackImage:(char *)arg1 width:(int)arg2 height:(int)arg3;
- (void)setRDMManager:(id)arg1;
- (void)setInterfaceOrientations:(unsigned long long)arg1;
- (unsigned long long)getInterfaceOrientations;
- (CDUnknownBlockType)getErrorHandler;
- (void)setErrorHandler:(CDUnknownBlockType)arg1;

@end

