//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FaceWallImageView, UIImageView, UILabel;
@protocol QQDynamicPluginHeadViewDelegate;

@interface QQDynamicPlugininHeadView : UIView
{
    UIImageView *_headbackimgView;
    FaceWallImageView *_pluginIconView;
    UILabel *_pluginNameLabel;
    id <QQDynamicPluginHeadViewDelegate> delegate;
    double offsetHeight;
}

@property(nonatomic) double offsetHeight; // @synthesize offsetHeight;
@property(nonatomic) id <QQDynamicPluginHeadViewDelegate> delegate; // @synthesize delegate;
- (void)dealloc;
- (void)resetUIRect;
- (void)relayoutWhenDidScroll:(double)arg1 tableHeight:(double)arg2;
- (void)resetUIRectWithTableOffset:(double)arg1;
- (void)close;
- (id)initWithPluginConfig:(id)arg1;
- (double)getHEADIMAGEBeginY;
- (double)getHEADIMAGESize;

@end
