//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class QZPageScrollView, UIView;

@protocol QZPageScrollViewProtocol <NSObject>
- (void)scrollViewPageIndexChangedWhenScrolling:(long long)arg1;
- (void)pageView:(QZPageScrollView *)arg1 didEndDisplayView:(UIView *)arg2 index:(long long)arg3;
- (void)pageView:(QZPageScrollView *)arg1 didScrollToView:(UIView *)arg2 index:(long long)arg3;
- (void)pageView:(QZPageScrollView *)arg1 willScrollToView:(UIView *)arg2 index:(long long)arg3;
- (void)scrollViewDidEndScroll;
- (void)scrollViewDidEndDecelerating;
- (void)scrollViewWillBeginDecelerating;
- (void)scrollViewWillBeginDragging;
- (UIView *)pageViewChildViewWithIndex:(long long)arg1;
@end
