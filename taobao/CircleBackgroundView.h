//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface CircleBackgroundView : UIView
{
    double _r;
    double _dt;
    double _tHeight;
    UIColor *_c1;
    UIColor *_c2;
    _Bool _isHiddenCursor;
}

@property(nonatomic) _Bool isHiddenCursor; // @synthesize isHiddenCursor=_isHiddenCursor;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 back1Color:(id)arg2 back2Color:(id)arg3 raidus:(double)arg4 dt:(double)arg5 arrowHeight:(double)arg6;

@end
