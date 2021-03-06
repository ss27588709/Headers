//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "HeaderHandleProtocol-Protocol.h"
#import "WBGuideCustomHandlerEventProtocol-Protocol.h"
#import "WBPublishGuideViewDelegate-Protocol.h"

@class NSString, WBFeedGroup, WBPublishGuideHandler, WBPublishGuideView;
@protocol HeaderManagerProtocol;

@interface WBFeedPublishGuideHandler : NSObject <WBPublishGuideViewDelegate, WBGuideCustomHandlerEventProtocol, HeaderHandleProtocol>
{
    WBPublishGuideView *publishGuideView;
    WBPublishGuideHandler *publishGuideHandler;
    WBFeedGroup *currentGroup;
    id <HeaderManagerProtocol> _headerManager;
}

@property(nonatomic) __weak id <HeaderManagerProtocol> headerManager; // @synthesize headerManager=_headerManager;
@property(retain, nonatomic) WBFeedGroup *currentGroup; // @synthesize currentGroup;
- (void).cxx_destruct;
- (void)closeCurrentGuide;
- (void)didClickGuideView:(id)arg1 userInfo:(id)arg2;
- (void)didClickCloseGuideView:(id)arg1;
- (void)guideView:(id)arg1 willShow:(_Bool)arg2;
- (void)handlePublishGuide:(id)arg1;
- (_Bool)hasShadowBelowWhenSelfIsLastHeader;
- (_Bool)holdEvents:(id)arg1;
- (_Bool)responseEvents:(id)arg1;
- (CDStruct_b2a2dcfe)headerConfig;
- (unsigned long long)headerViewState;
- (id)showView;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

