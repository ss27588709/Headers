//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBSlideShowTheme.h"

@interface WBSlideShowThemeYouth : WBSlideShowTheme
{
}

- (void)themeInitialize;
- (id)audioPath;
- (double)configureFirstTypeSources:(id)arg1 startTime:(double)arg2 size:(struct CGSize)arg3 components:(id)arg4;
- (double)cycleTransitionWithSources:(id)arg1 startTime:(double)arg2 size:(struct CGSize)arg3 components:(id)arg4;
- (double)subCycleTransitionWithSources:(id)arg1 startTime:(double)arg2 size:(struct CGSize)arg3 components:(id)arg4;
- (id)typeFirstTransitionMakeTranslationComponentWithStart:(struct CGPoint)arg1 center:(struct CGPoint)arg2 end:(struct CGPoint)arg3 scaleStart:(struct CGPoint)arg4 scaleEnd:(struct CGPoint)arg5 size:(struct CGSize)arg6;
- (id)typeFirstTransitionMakeTranslationWithStart:(id)arg1 center:(id)arg2 end:(id)arg3 scaleStart:(id)arg4 scaleEnd:(id)arg5;
- (id)pointsOfTranslation;
- (id)typeFirstTransitionThirdFilters;
- (id)typeFirstTransitionMakeScaleComponentWithSize:(struct CGSize)arg1;
- (id)typeFirstTransitionFiltersMakeScaleWithScaleStart:(id)arg1 scaleEnd:(id)arg2;
- (id)typeFirstTransitionFirstFilters;
- (_Bool)isZoomIn;
- (void)setIsZoomIn:(_Bool)arg1;

@end

