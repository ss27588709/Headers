//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MJRefreshHeader.h"

@class UIActivityIndicatorView, UILabel;

@interface HTSLiveTableViewHeader : MJRefreshHeader
{
    UILabel *_label;
    UIActivityIndicatorView *_loading;
}

@property(nonatomic) __weak UIActivityIndicatorView *loading; // @synthesize loading=_loading;
@property(nonatomic) __weak UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)setPullingPercent:(double)arg1;
- (void)setState:(long long)arg1;
- (void)scrollViewPanStateDidChange:(id)arg1;
- (void)scrollViewContentSizeDidChange:(id)arg1;
- (void)scrollViewContentOffsetDidChange:(id)arg1;
- (void)placeSubviews;
- (void)prepare;

@end
