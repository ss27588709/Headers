//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface TBLiveInteractiveView : UIView
{
    _Bool _hasChildView;
}

@property(nonatomic) _Bool hasChildView; // @synthesize hasChildView=_hasChildView;
- (void)dealloc;
- (void)autoRemove:(CDUnknownBlockType)arg1;
- (void)cancelDelayBlock;
- (void)reCountTimeWithDuration:(double)arg1 remove:(CDUnknownBlockType)arg2;
- (void)addView:(id)arg1 toSuperView:(id)arg2 animatedViews:(id)arg3 frame:(struct CGRect)arg4 duration:(double)arg5 remove:(CDUnknownBlockType)arg6;

@end

