//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, TBShareBizIdConfig;

@interface TBShareScanCodeModel : NSObject
{
    NSString *_url;
    NSString *_showText;
    NSString *_showImageUrl;
    NSString *_showTips;
    NSDictionary *_qrTemplate;
    NSString *_priceText;
    NSArray *_shareImages;
    NSString *_contentType;
    NSString *_businessId;
    TBShareBizIdConfig *_bizIdConfig;
}

@property(retain, nonatomic) TBShareBizIdConfig *bizIdConfig; // @synthesize bizIdConfig=_bizIdConfig;
@property(copy, nonatomic) NSString *businessId; // @synthesize businessId=_businessId;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(copy, nonatomic) NSArray *shareImages; // @synthesize shareImages=_shareImages;
@property(copy, nonatomic) NSString *priceText; // @synthesize priceText=_priceText;
@property(copy, nonatomic) NSDictionary *qrTemplate; // @synthesize qrTemplate=_qrTemplate;
@property(copy, nonatomic) NSString *showTips; // @synthesize showTips=_showTips;
@property(copy, nonatomic) NSString *showImageUrl; // @synthesize showImageUrl=_showImageUrl;
@property(copy, nonatomic) NSString *showText; // @synthesize showText=_showText;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;

@end

