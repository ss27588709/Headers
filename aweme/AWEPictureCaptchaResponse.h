//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSNumber, NSString;

@interface AWEPictureCaptchaResponse : AWEBaseApiModel
{
    NSString *_verifyInfo;
    NSNumber *_timeout;
    NSNumber *_interval;
    NSNumber *_chanceUsed;
    NSNumber *_chanceLeft;
    NSString *_errorMessage;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(retain, nonatomic) NSNumber *chanceLeft; // @synthesize chanceLeft=_chanceLeft;
@property(retain, nonatomic) NSNumber *chanceUsed; // @synthesize chanceUsed=_chanceUsed;
@property(retain, nonatomic) NSNumber *interval; // @synthesize interval=_interval;
@property(retain, nonatomic) NSNumber *timeout; // @synthesize timeout=_timeout;
@property(copy, nonatomic) NSString *verifyInfo; // @synthesize verifyInfo=_verifyInfo;
- (void).cxx_destruct;

@end

