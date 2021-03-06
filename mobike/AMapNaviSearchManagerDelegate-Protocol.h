//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AMapNaviBatchRequest, AMapNaviInputTipsRequest, AMapNaviPOIIDRequest, AMapNaviPOIKeywordsRequest, AMapNaviReGeocodeRequest, AMapNaviSearchBaseRequest, NSArray, NSDictionary, NSError;

@protocol AMapNaviSearchManagerDelegate <NSObject>

@optional
- (void)onBatchDone:(AMapNaviBatchRequest *)arg1 result:(NSArray *)arg2;
- (void)onInputTipsDone:(AMapNaviInputTipsRequest *)arg1 result:(NSDictionary *)arg2;
- (void)onPOIIDDone:(AMapNaviPOIIDRequest *)arg1 result:(NSDictionary *)arg2;
- (void)onReGeocodeDone:(AMapNaviReGeocodeRequest *)arg1 result:(NSDictionary *)arg2;
- (void)onPOIKeywordsSearchDone:(AMapNaviPOIKeywordsRequest *)arg1 result:(NSDictionary *)arg2;
- (void)navSearchRequest:(AMapNaviSearchBaseRequest *)arg1 didFailWithError:(NSError *)arg2;
@end

