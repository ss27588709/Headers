//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface WBCropGridView : UIView
{
    UIColor *_bgColor;
    UIColor *_gridColor;
    struct CGRect _cropRect;
}

@property(retain, nonatomic) UIColor *gridColor; // @synthesize gridColor=_gridColor;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

