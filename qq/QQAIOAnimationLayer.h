//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class QQBaseChatViewController;

@interface QQAIOAnimationLayer : CALayer
{
    double _tableviewAlpha;
    _Bool _isAnimating;
    QQBaseChatViewController *_containerVC;
}

@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) __weak QQBaseChatViewController *containerVC; // @synthesize containerVC=_containerVC;
- (void).cxx_destruct;
- (void)animationEnd;
- (void)animationBegin;

@end

