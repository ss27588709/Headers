//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString;
@protocol AliDetailSkuContractNetStandard;

@interface AliDetailSkuContractNetStandardList : TBJSONModel
{
    NSArray<AliDetailSkuContractNetStandard> *_network;
    NSString *_networkName;
}

@property(retain, nonatomic) NSString *networkName; // @synthesize networkName=_networkName;
@property(retain, nonatomic) NSArray<AliDetailSkuContractNetStandard> *network; // @synthesize network=_network;
- (void).cxx_destruct;

@end

