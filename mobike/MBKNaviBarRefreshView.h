//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class NSString, UIImageView;

@interface MBKNaviBarRefreshView : UIView <CAAnimationDelegate>
{
    UIImageView *_circleImage;
}

@property(retain, nonatomic) UIImageView *circleImage; // @synthesize circleImage=_circleImage;
- (void).cxx_destruct;
- (void)stopLoading;
- (void)startLoading;
- (void)setupViewWithImage:(id)arg1 offset:(struct CGPoint)arg2;
- (id)initWithFrame:(struct CGRect)arg1 image:(id)arg2 offset:(struct CGPoint)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

