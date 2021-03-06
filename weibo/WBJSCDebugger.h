//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WBWebViewConsoleHost-Protocol.h"

@class JSVirtualMachine, NSMutableArray, NSString, WBJSCInterfaceContext, WBWebViewConsole;

@interface WBJSCDebugger : NSObject <WBWebViewConsoleHost>
{
    JSVirtualMachine *_vm;
    WBJSCInterfaceContext *_globalContext;
    WBWebViewConsole *_console;
    NSMutableArray *_userScripts;
    unsigned long long _exceptionCount;
}

+ (void)injectUserScripts:(id)arg1 toContext:(id)arg2;
+ (id)sharedDebugger;
@property(nonatomic) unsigned long long exceptionCount; // @synthesize exceptionCount=_exceptionCount;
@property(retain, nonatomic) NSMutableArray *userScripts; // @synthesize userScripts=_userScripts;
@property(retain, nonatomic) WBWebViewConsole *console; // @synthesize console=_console;
@property(retain, nonatomic) WBJSCInterfaceContext *globalContext; // @synthesize globalContext=_globalContext;
@property(retain, nonatomic) JSVirtualMachine *vm; // @synthesize vm=_vm;
- (void).cxx_destruct;
- (void)removeAllUserScripts;
- (void)addUserScript:(id)arg1;
- (void)resetContext;
- (void)evaluateJavaScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleException:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

