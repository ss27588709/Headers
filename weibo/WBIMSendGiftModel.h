//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBIMBaseModel.h"

@class NSString, WBIMSendGiftInfoModel;

@interface WBIMSendGiftModel : WBIMBaseModel
{
    long long _currentCoins;
    long long _giftAvailableNum;
    unsigned long long _anchorCoins;
    WBIMSendGiftInfoModel *_giftInfo;
    NSString *_extension;
}

@property(copy, nonatomic) NSString *extension; // @synthesize extension=_extension;
@property(retain, nonatomic) WBIMSendGiftInfoModel *giftInfo; // @synthesize giftInfo=_giftInfo;
@property(nonatomic) unsigned long long anchorCoins; // @synthesize anchorCoins=_anchorCoins;
@property(nonatomic) long long giftAvailableNum; // @synthesize giftAvailableNum=_giftAvailableNum;
@property(nonatomic) long long currentCoins; // @synthesize currentCoins=_currentCoins;
- (void).cxx_destruct;

@end

