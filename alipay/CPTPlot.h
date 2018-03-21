//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CPTAnnotationHostLayer.h"

@class CPTPlotArea, CPTPlotSpace, CPTShadow, CPTTextStyle, NSAttributedString, NSFormatter, NSMutableArray, NSMutableDictionary, NSString;
@protocol CPTPlotDataSource;

@interface CPTPlot : CPTAnnotationHostLayer
{
    id <CPTPlotDataSource> dataSource;
    NSString *title;
    NSAttributedString *attributedTitle;
    CPTPlotSpace *plotSpace;
    _Bool dataNeedsReloading;
    NSMutableDictionary *cachedData;
    unsigned long long cachedDataCount;
    int cachePrecision;
    _Bool needsRelabel;
    _Bool adjustLabelAnchors;
    _Bool showLabels;
    double labelOffset;
    double labelRotation;
    unsigned long long labelField;
    CPTTextStyle *labelTextStyle;
    NSFormatter *labelFormatter;
    struct _NSRange labelIndexRange;
    NSMutableArray *labelAnnotations;
    CPTShadow *labelShadow;
    _Bool alignsPointsToPixels;
}

+ (id)nilData;
+ (_Bool)needsDisplayForKey:(id)arg1;
@property(nonatomic) _Bool alignsPointsToPixels; // @synthesize alignsPointsToPixels;
@property(retain, nonatomic) NSMutableArray *labelAnnotations; // @synthesize labelAnnotations;
@property(nonatomic) struct _NSRange labelIndexRange; // @synthesize labelIndexRange;
@property(retain, nonatomic) CPTShadow *labelShadow; // @synthesize labelShadow;
@property(retain, nonatomic) NSFormatter *labelFormatter; // @synthesize labelFormatter;
@property(copy, nonatomic) CPTTextStyle *labelTextStyle; // @synthesize labelTextStyle;
@property(nonatomic) unsigned long long labelField; // @synthesize labelField;
@property(nonatomic) double labelRotation; // @synthesize labelRotation;
@property(nonatomic) double labelOffset; // @synthesize labelOffset;
@property(nonatomic) _Bool showLabels; // @synthesize showLabels;
@property(nonatomic) _Bool adjustLabelAnchors; // @synthesize adjustLabelAnchors;
@property(nonatomic) _Bool needsRelabel; // @synthesize needsRelabel;
@property(nonatomic) int cachePrecision; // @synthesize cachePrecision;
@property(nonatomic) unsigned long long cachedDataCount; // @synthesize cachedDataCount;
@property(retain, nonatomic) NSMutableDictionary *cachedData; // @synthesize cachedData;
@property(nonatomic) _Bool dataNeedsReloading; // @synthesize dataNeedsReloading;
@property(retain, nonatomic) CPTPlotSpace *plotSpace; // @synthesize plotSpace;
@property(copy, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title;
@property(nonatomic) id <CPTPlotDataSource> dataSource; // @synthesize dataSource;
- (void)setHidden:(_Bool)arg1;
@property(readonly, retain, nonatomic) CPTPlotArea *plotArea; // @dynamic plotArea;
- (id)dataLabels;
- (_Bool)pointingDeviceDownEvent:(struct UIEvent *)arg1 atPoint:(struct CGPoint)arg2;
- (void)drawSwatchForLegend:(id)arg1 atIndex:(unsigned long long)arg2 inRect:(struct CGRect)arg3 inContext:(struct CGContext *)arg4;
- (id)attributedTitleForLegendEntryAtIndex:(unsigned long long)arg1;
- (id)titleForLegendEntryAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfLegendEntries;
- (void)repositionAllLabelAnnotations;
- (void)updateContentAnchorForLabel:(id)arg1;
- (void)relabelIndexRange:(struct _NSRange)arg1;
- (void)relabel;
- (void)setNeedsRelabel;
- (id)plotRangeForCoordinate:(int)arg1;
- (id)plotRangeForField:(unsigned long long)arg1;
- (void)cacheArray:(id)arg1 forKey:(id)arg2 atRecordIndex:(unsigned long long)arg3;
- (void)cacheArray:(id)arg1 forKey:(id)arg2;
- (id)cachedValueForKey:(id)arg1 recordIndex:(unsigned long long)arg2;
- (id)cachedArrayForKey:(id)arg1;
@property(readonly, nonatomic) struct _CPTNumericDataType decimalDataType; // @dynamic decimalDataType;
@property(readonly, nonatomic) struct _CPTNumericDataType doubleDataType; // @dynamic doubleDataType;
- (void)setCachedDataType:(struct _CPTNumericDataType)arg1;
- (CDStruct_6ece915e)cachedDecimalForField:(unsigned long long)arg1 recordIndex:(unsigned long long)arg2;
- (double)cachedDoubleForField:(unsigned long long)arg1 recordIndex:(unsigned long long)arg2;
- (id)cachedNumberForField:(unsigned long long)arg1 recordIndex:(unsigned long long)arg2;
- (id)cachedNumbersForField:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool doublePrecisionCache; // @dynamic doublePrecisionCache;
- (id)numericDataForNumbers:(id)arg1;
- (void)cacheNumbers:(id)arg1 forField:(unsigned long long)arg2 atRecordIndex:(unsigned long long)arg3;
- (void)cacheNumbers:(id)arg1 forField:(unsigned long long)arg2;
- (_Bool)loadNumbersForAllFieldsFromDataSourceInRecordIndexRange:(struct _NSRange)arg1;
- (id)numbersFromDataSourceForField:(unsigned long long)arg1 recordIndexRange:(struct _NSRange)arg2;
- (void)reloadDataInIndexRange:(struct _NSRange)arg1;
- (void)reloadDataIfNeeded;
- (void)reloadData;
- (void)setDataNeedsReloading;
- (void)layoutSublayers;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithLayer:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)positionLabelAnnotation:(id)arg1 forIndex:(unsigned long long)arg2;
- (id)fieldIdentifiersForCoordinate:(int)arg1;

@end
