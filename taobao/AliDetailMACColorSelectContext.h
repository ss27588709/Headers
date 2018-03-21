//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AliDetailModel, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface AliDetailMACColorSelectContext : NSObject
{
    AliDetailModel *_detailModel;
    NSString *_selectedValueId;
    NSString *_selectedPid;
    NSArray *_showValues;
    NSMutableDictionary *_colorSeriesMap;
    NSMutableArray *_colorSeriesKeyList;
}

@property(retain, nonatomic) NSMutableArray *colorSeriesKeyList; // @synthesize colorSeriesKeyList=_colorSeriesKeyList;
@property(retain, nonatomic) NSMutableDictionary *colorSeriesMap; // @synthesize colorSeriesMap=_colorSeriesMap;
@property(retain, nonatomic) NSArray *showValues; // @synthesize showValues=_showValues;
@property(retain, nonatomic) NSString *selectedPid; // @synthesize selectedPid=_selectedPid;
@property(retain, nonatomic) NSString *selectedValueId; // @synthesize selectedValueId=_selectedValueId;
@property(nonatomic) __weak AliDetailModel *detailModel; // @synthesize detailModel=_detailModel;
- (void).cxx_destruct;
- (void)setDetailModel:(id)arg1 withPid:(id)arg2;

@end
