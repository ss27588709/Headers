//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TFBaseRespVO.h"

@class NSString;

@interface TFCheckCardBinResp : TFBaseRespVO
{
    _Bool _guideFlag;
    NSString *_bankShortName;
    NSString *_bankName;
    NSString *_cardType;
}

@property(nonatomic) _Bool guideFlag; // @synthesize guideFlag=_guideFlag;
@property(retain, nonatomic) NSString *cardType; // @synthesize cardType=_cardType;
@property(retain, nonatomic) NSString *bankName; // @synthesize bankName=_bankName;
@property(retain, nonatomic) NSString *bankShortName; // @synthesize bankShortName=_bankShortName;
- (void).cxx_destruct;

@end
