//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, PadView;

@interface PluginsView : UIView
{
    NSMutableArray *_pluginStatck;
    PadView *_padView;
}

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)removeAllPluginsView;
- (void)setPlugins:(id)arg1;
- (void)pushPlugins:(id)arg1;
- (void)popPlugins;
- (void)showPluginsView:(_Bool)arg1;
@property(readonly, nonatomic) UIView *lastHitTestView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
