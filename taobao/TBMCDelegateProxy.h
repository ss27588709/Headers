//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString;
@protocol MCScrollViewDelegate;

@interface TBMCDelegateProxy : NSProxy <UIScrollViewDelegate>
{
    id <MCScrollViewDelegate> _mcDelegate;
    id _mcTarget;
}

@property(nonatomic) __weak id mcTarget; // @synthesize mcTarget=_mcTarget;
@property(nonatomic) __weak id <MCScrollViewDelegate> mcDelegate; // @synthesize mcDelegate=_mcDelegate;
- (void).cxx_destruct;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)methodShouldForward:(SEL)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

