//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class APayWapPayViewController, NSString;

@interface APayRoute : NSObject
{
    NSString *_orderStr;
    NSString *_schemeStr;
    CDUnknownBlockType _resultBlock;
    APayWapPayViewController *_wapViewController;
}

@property(retain, nonatomic) APayWapPayViewController *wapViewController; // @synthesize wapViewController=_wapViewController;
@property(copy, nonatomic) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
@property(copy, nonatomic) NSString *schemeStr; // @synthesize schemeStr=_schemeStr;
@property(copy, nonatomic) NSString *orderStr; // @synthesize orderStr=_orderStr;
- (void).cxx_destruct;
- (void)authByWapWithInfo:(id)arg1 ofUrl:(id)arg2;
- (void)authByPortalWithInfo:(id)arg1;
- (void)authWithInfo:(id)arg1 ofType:(long long)arg2 externInfo:(id)arg3 result:(CDUnknownBlockType)arg4;
- (void)downloadApp:(id)arg1;
- (void)presentViewController:(id)arg1;
- (void)payWithWapUrl:(id)arg1 andParams:(id)arg2;
- (void)saveMerchantScreen;
- (void)payWithNativeApp:(id)arg1;
- (void)payCallSafepay;
- (void)payCallAlipay;
- (void)payWithOrder:(id)arg1 scheme:(id)arg2 andConfig:(long long)arg3 externInfo:(id)arg4 result:(CDUnknownBlockType)arg5;

@end
