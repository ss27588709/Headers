//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBShopBasicComponent.h"

@class NSString, TBShopImageSuite;

@interface TBShopLoftComponent : TBShopBasicComponent
{
    TBShopImageSuite *_launchImage;
    NSString *_targetId;
}

+ (id)defaultLoftData;
+ (id)createMockLoftWithH5Url:(id)arg1;
@property(retain, nonatomic) NSString *targetId; // @synthesize targetId=_targetId;
@property(retain, nonatomic) TBShopImageSuite *launchImage; // @synthesize launchImage=_launchImage;
- (void).cxx_destruct;
- (void)forceResetLoftUrl:(id)arg1;
- (void)prepareWithRawData:(id)arg1;
- (id)initWithData:(id)arg1;

@end
