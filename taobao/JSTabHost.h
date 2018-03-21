//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "TNodeComponentProtocol-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSString;

@interface JSTabHost : UIScrollView <UIScrollViewDelegate, TNodeComponentProtocol>
{
    _Bool _didScrollToTop;
    double _scrollHeight;
}

+ (struct UIView *)makeTNodeComponent:(id)arg1;
@property(nonatomic) _Bool didScrollToTop; // @synthesize didScrollToTop=_didScrollToTop;
@property(nonatomic) double scrollHeight; // @synthesize scrollHeight=_scrollHeight;
- (void)dealloc;
- (id)findTabBar:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
