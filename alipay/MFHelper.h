//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MFHelper : NSObject
{
}

+ (id)loadSyncPageData:(id)arg1 fileNames:(id)arg2;
+ (_Bool)intelligentCrop;
+ (id)mQConfig;
+ (id)formatMultiStateUI:(id)arg1 withPrimaryKey:(id)arg2;
+ (id)formatMFWidgetDefaultEventInfo:(id)arg1;
+ (id)trimmingLRWhiteSpaceWithString:(id)arg1;
+ (_Bool)isNetworkReachable;
+ (id)preloadImage:(id)arg1;
+ (id)realId:(id)arg1;
+ (_Bool)isLocalId:(id)arg1;
+ (_Bool)sizeZero:(struct CGSize)arg1;
+ (_Bool)isLocalResourceUrl:(id)arg1;
+ (void)openSchemeOrLink:(id)arg1;
+ (_Bool)isURLString:(id)arg1;
+ (_Bool)isSameFont:(id)arg1 toFont:(id)arg2;
+ (id)fontWithFont:(id)arg1;
+ (_Bool)isTheSameColor:(id)arg1 toColor:(id)arg2;
+ (_Bool)sameRect:(struct CGRect)arg1 withRect:(struct CGRect)arg2;
+ (_Bool)sameInset:(struct UIEdgeInsets)arg1 withInset:(struct UIEdgeInsets)arg2;
+ (_Bool)sameSize:(struct CGSize)arg1 withSize:(struct CGSize)arg2;
+ (_Bool)isChineseLanguage;
+ (id)durationWithHours:(long long)arg1;
+ (id)formatRemindFeedDate:(id)arg1;
+ (id)formatDetailFeedDate:(id)arg1;
+ (id)formatHomeFeedDate:(id)arg1;
+ (int)yearAfterNumFromeDate:(id)arg1 toDate:(id)arg2;
+ (int)dayAfterNumFromeDate:(id)arg1 toDate:(id)arg2;
+ (struct CGSize)homeFeedImagePreCutSize:(long long)arg1;
+ (struct CGSize)imageFrameSizeEx:(int)arg1 ImgHeight:(int)arg2 MaxFrameWH:(int)arg3 MinScale:(float)arg4;
+ (double)platformPixle:(id)arg1;
+ (double)floorPixelValue:(double)arg1;
+ (double)ceilPixelValue:(double)arg1;
+ (double)roundPixelValue:(double)arg1;
+ (double)screenScale;
+ (double)getOnePx;
+ (struct UIEdgeInsets)formatUIEdgeInsetsWithString:(id)arg1;
+ (id)formatAccessibilityTraitsWithString:(id)arg1;
+ (id)formatOverFlowWithString:(id)arg1;
+ (id)formatContentModeWithString:(id)arg1;
+ (id)formatBackgroundImageUrlWithString:(id)arg1;
+ (id)formatImageWithString:(id)arg1;
+ (id)scalesWithStr:(id)arg1;
+ (id)formatFontWithString:(id)arg1 withScales:(id)arg2;
+ (id)formatFontWithString:(id)arg1;
+ (id)formatLineBreakModeWithString:(id)arg1;
+ (id)formatVisibilityWithString:(id)arg1;
+ (id)formatTouchEnableWithString:(id)arg1;
+ (unsigned char)formatTextAlignmentWithString:(id)arg1;
+ (_Bool)validSubViewRect:(id)arg1 withParentView:(id)arg2;
+ (struct CGRect)formatRectWithString:(id)arg1;
+ (id)getMarginTopWithCssStyle:(id)arg1;
+ (id)getHeightWithCssStyle:(id)arg1;
+ (id)getWidthWithCssStyle:(id)arg1;
+ (_Bool)isLocalImagePath:(id)arg1;
+ (id)getResourcePath;
+ (id)getBundleName;
+ (struct CGSize)sizeWithFont:(id)arg1 font:(id)arg2 size:(struct CGSize)arg3;
+ (id)templateIdWithObj:(id)arg1;
+ (id)templateIdWithData:(id)arg1 originObj:(id)arg2;
+ (id)colorWithHexString:(id)arg1;
+ (id)colorWithOctString:(id)arg1;
+ (id)colorWithString:(id)arg1;
+ (struct CGSize)screenXY;
+ (float)getOsVersion;
+ (id)stretchableCellImage:(id)arg1;
+ (id)stretchableBannerCellImage:(id)arg1;

@end
