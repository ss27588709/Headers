//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString, TBSNSFollowShopRecommendShopTO;
@protocol TBSNSFollowShopRecommendHotItem;

@interface TBSNSFollowShopRecommendShop : TBJSONModel
{
    _Bool _exposed;
    TBSNSFollowShopRecommendShopTO *_shopTO;
    NSArray<TBSNSFollowShopRecommendHotItem> *_hotItems;
    NSString *_scm;
    NSString *_pvid;
}

@property(nonatomic, getter=isExposed) _Bool exposed; // @synthesize exposed=_exposed;
@property(copy, nonatomic) NSString *pvid; // @synthesize pvid=_pvid;
@property(copy, nonatomic) NSString *scm; // @synthesize scm=_scm;
@property(retain, nonatomic) NSArray<TBSNSFollowShopRecommendHotItem> *hotItems; // @synthesize hotItems=_hotItems;
@property(retain, nonatomic) TBSNSFollowShopRecommendShopTO *shopTO; // @synthesize shopTO=_shopTO;
- (void).cxx_destruct;

@end

