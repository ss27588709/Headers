//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;

@interface CameraDrawView : UIView
{
    BOOL _edgeLine;
    UIButton *_shadowView;
    struct CGRect _idCardRangeRect;
}

@property(nonatomic) struct CGRect idCardRangeRect; // @synthesize idCardRangeRect=_idCardRangeRect;
@property(retain, nonatomic) UIButton *shadowView; // @synthesize shadowView=_shadowView;
@property(nonatomic) BOOL edgeLine; // @synthesize edgeLine=_edgeLine;
- (void).cxx_destruct;
- (void)drawEdge:(struct CGContext *)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
